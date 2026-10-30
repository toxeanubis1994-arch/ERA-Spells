# ERA Spells

New combat magic for Heroes III ERA: damage spells, control, protective effects and summons. Standalone mod by Toxeos, with English and Russian support and Map Editor integration.

## Compatibility

- **GEM**: uses the native spell catalog; no changes to GEM files are required. Research lists already stored in older saves are not rebuilt.
- **JS / InstantAnim, TUM / Amethyst**: the 0.6 Beta build was checked in Complete with these mods enabled; Heavenly Shield and custom effect icons work in that test. Amethyst and TUM are optional.
- **ACM**: includes a fix for access to spell descriptions and parameters. Full Master/Grandmaster gameplay verification is pending; additional high-tier mechanics for the new spells are not included.
- Requires **ERA/WoG and ERA Erm Framework**. Do not combine with story Toxeos or another mod replacing the same spell tables.

## Latest update — 0.7.2

Fixed two-target dragon breath, refreshed spell icons and strengthened Strength. Shared game DLLs do not need replacement.

Four new spells, updated artwork and sounds, revised balance and compact descriptions. Third-party generators can read live map bans through the included API/SDK.

## Spells

- **Blizzard** — Damages the target and stacks on adjacent hexes, reducing Speed by 2. The slow lasts 2/4/6 rounds according to mastery; Speed cannot fall below 2.

- **Deep Freeze** — Damages and freezes a stack, preventing it from acting or retaliating. The first damaging hit breaks the ice. The first hit deals 200% physical damage, 150% Fire Magic damage or 50% damage from other spells.

- **Heavenly Wrath** — Strikes a selected stack with a powerful discharge. A surviving target that has not acted loses its turn in the current round.

- **Cataclysm** — Damages ground creatures in both armies, leaving flying creatures and war machines unharmed. It can also make stacks that have not acted lose their current turn.

- **Dragon Wrath** — Increases a friendly stack's Defense and makes it a preferred target for enemy AI.

- **Inspiration** — Brings a friendly stack's next activation forward. Eligible creature levels depend on magic-school mastery.

- **Heavenly Shield** — Protects against physical damage, but not magical damage. It ends after its duration or hit limit is reached; limits depend on mastery.

- **Rampage** — Temporarily doubles a friendly stack's direct damage, including retaliation.

- **Summon Flame Spirit** — Summons one creature named Flame Spirit whose stats depend on hero level, Spell Power, Fire Magic, and the living army. Mana cost starts increasing at level 20. It flies, attacks three targets without retaliation and has Fire Shield. On death or replacement it releases Inferno. Recasting replaces the previous Flame Spirit.

- **Earth Bonds** — Creates an impassable barrier of roots. Attacks and spells can destroy it; durability and lifetime depend on mastery.

- **Incineration** — Deals half its damage immediately and the remainder at the start of the next three rounds. Recasting replaces the remaining effect.

- **Telekinesis** — Moves an enemy stack within 6 hexes, bypassing walls and obstacles. Eligible creature levels depend on mastery.

- **Confusion** — Prevents enemy retaliation. Expert mastery affects all eligible enemy stacks. Duration equals the hero's Spell Power. Successful Confusion removes Counterstrike; successful Counterstrike removes Confusion.

- **Restoration** — Restores machines and golems.

- **Wasp Swarm** — Deals half its damage immediately and the other half at the start of the next round, then ends.

- **Tsunami** — Damages all enemy stacks except war machines.

- **Ice Dragon** — Summons a non-living, two-hex Ice Dragon protected against Water and Mind magic. Durability is measured in hits. Base cost: 25 mana. Available only through manual assignment, not random guilds or shrines.

- **Fury of the Elements** — Unleashes the power of all four elements against a selected enemy stack. A rare spell that is not granted by elemental books.

- **Invisibility** — Hides a friendly stack. Movement or an incoming or outgoing attack removes it; waiting and defending do not. Duration equals the hero's Spell Power.

- **Survey** — Temporarily reveals a chosen map area until the owner's next turn; normal exploration is preserved.

- **Mobility** — Adds 300 movement points. A battle victory is required between repeated casts that day.

- **Strength** — A 3-round Water shield absorbing 17 × Spell Power + 10/10/20/45 damage.

- **Vampirism** — Drains 15/20/25/30% damage; maximum Health is reduced by 25/20/15/10%. Cure removes the effect. Healing plays the native Vampire Lord life-drain effect.

## Acquisition and Map Editor

Assign spells to heroes, Mage Guilds, Shrines and other supported sources in ERA Map Editor; assignments are saved in the map. Ordinary custom spells can also appear randomly in guilds and shrines, less often than stock spells. Configure generation in `ToxData/spell_generation.tsv`. Fury of the Elements retains its separate rare chance. Summon Flame Spirit does not generate in Rampart, Tower or Necropolis. Ice Dragon and Fury of the Elements are excluded from elemental books.

## Installation and language

Install the **ERA Spells** folder under `Mods` and enable it. Requires ERA/WoG and ERA Erm Framework. Amethyst and New Spells are not required. Do not enable simultaneously with the story Toxeos mod or another expansion replacing the same spell tables.

English is the default. Select `ru` in ERA settings for Russian, or set `Language=ru` under `[Era]` in `heroes3.ini`. Use `Language=en` for English. Restart the game and editor.

## For plugin authors

Use the read-only [spell-restrictions API/SDK](Developers/SpellIntegration/README.md) to check live map bans for stock and custom spells. The old 70-spell field does not cover the expanded catalog. API v1 includes a C++ header and example; it does not replace your generator's school, rarity or per-object filters.

## Screenshots

![Air Magic](Screens/1.png)

![Earth Magic](Screens/2.png)

![Fire Magic](Screens/3.png)

![Water Magic](Screens/4.png)

![Adventure spells](Screens/5.png)

![Blizzard in combat](Screens/6.png)

## Credits

Mod author: **Toxeos**.

Graphics assistance: **Dalion** and **Toriko**.

You are welcome to modify the mod and share your own versions.

[Release history](https://github.com/toxeanubis1994-arch/ERA-Spells/blob/main/CHANGELOG.md) · [Download 0.7.1](https://github.com/toxeanubis1994-arch/ERA-Spells/releases/tag/v0.7.1)

