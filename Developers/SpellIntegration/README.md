# Reading banned spells in ERA Spells

This integration is supplied with the Complete and Desktop ERA Spells profiles.
It is read-only and does not change a map's bans, generate objects, or modify
another developer's plugin. Use `SpellRestrictions.h` and `example.cpp`.

The provider module is **ToxeosBlizzard.era**. Resolve its existing loaded module
with `GetModuleHandleA`; do not load it yourself. All functions use **32-bit
Windows stdcall** and have these undecorated `GetProcAddress` names:

| Export | Signature | Result |
|---|---|---|
| ToxeosBlizzard_GetSpellRestrictionsVersion | `int __stdcall ()` | API version 1 |
| ToxeosBlizzard_GetSpellCount | `int __stdcall ()` | Highest index+1, currently 104 |
| ToxeosBlizzard_IsSpellDisabled | `int __stdcall (int spellId)` | 0 allowed; 1 disabled; -1 state not ready; -2 invalid/creature-only ID |

Playable spell IDs are **0..69 and 81..103**. IDs 70..80 are creature abilities and
are deliberately rejected. Do not enumerate `0..count-1` as playable without
checking the query result. Only a query result of 0 means the map allows a spell.
The table must be initialized and the game state must exist. Query at your
normal in-game generation stage; retry later when the result is -1. Reading the
API during DLL loading does not establish that a map is ready.

The query reads the **current live byte**, not a cached list: a map/UN:J0 change
is visible on the next call. Changing maps does not leave a cached base pointer
in the consumer. The API does not return mutable internal pointers.

## Actual storage in this profile

In the original 70-spell structure, `disabledShrines[70]` begins at +0x04 and
`disabledSpells[70]` at +0x4A. The ERA Spells core changes its active ban lookup
to the expanded index array at **Main+0x04**, with Main read through 0x699538.
Our native guild, elemental-book, Grail and UN:J0 adapters read this same array.
Do **not** use the old `disabledSpells[70]` member or add 0x4A to index new spells.
The exported query is the supported way to read the authoritative ban flag.

This is a map-ban API. It does not report temporary shrine selection/depletion,
per-object forbidden lists, school membership, spell level, or generation rarity.
Keep your plugin's own filters. For example, a spell with zero guild chance or
manual-only generation policy can still be allowed by the map. The shipped
`ToxData/spell_generation.tsv` remains the profile's generation configuration.

## Validation scope

Actual exported callback tests cover stock/custom IDs, 103, live flag changes,
nonzero flag values, holes 70..80, invalid bounds, null game and not-ready state.
The header/example are compiled for i686, and the built DLL export names are
checked. This is not a test of an external plugin that has not been supplied.

## Для автора сборки

Это ответ на запрос о чтении запретов из скриншота. Достаточно передать автору
эту папку: экспорт уже встроен в установленный core. Его сторонний плагин
изменять или отправлять ему сообщение без отдельного запроса не требуется.
