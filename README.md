<p align="center"><img src="era-spells.png" width="192" alt="ERA Spells — phoenix emblem"></p>

<h1 align="center">ERA Spells</h1>
<p align="center">Custom magic for Heroes of Might and Magic III ERA</p>
<p align="center"><strong>Native spell effects · Map Editor support · English / Русский</strong></p>

[Русская версия](README.ru.md)

**[Download ERA Spells](../../releases/latest)** · [Report an issue](../../issues)

ERA Spells is the standalone spell component of Toxeos, previously distributed as **Toxeos Native Spells**. It adds custom combat magic through native ERA plugins, with animations, spellbook integration and Map Editor support. The story mod is not required.

## Installation

1. Close the game and Map Editor.
2. Copy the complete `ERA Spells` folder into your game's `Mods` directory.
3. Enable **ERA Spells** in the mod manager.
4. Restart the game or ERA Map Editor.

Requires an ERA/WoG installation with ERA Erm Framework. New Spells and Amethyst are not required. Do not enable this package together with the story Toxeos mod, Toxeos Spells or another plugin that replaces the same spell tables.

## Language

English is the default and fallback language. Russian translations are included. Select `en` or `ru` in ERA's language settings. If your installation has no language selector, set the following in the game's `heroes3.ini`:

```ini
[Era]
Language=en
```

Use `Language=ru` for Russian. Restart both the game and editor afterwards. This changes the mod's texts; it does not translate the rest of your installation.

## Map Editor

The enabled mod supplies an editor plugin under `EraEditor`. Custom spells can be assigned through the supported hero, Mage Guild, Shrine and scroll dialogs. The existing H3M transport preserves assignments without using ERM as a hidden transport. Save and reopen a test map to check assignments before distributing it.

Renaming the package does not change Spell IDs or map data. Maps from other spell expansions can use incompatible IDs; this package does not silently convert them.

## Configuration

Random Mage Guild and Shrine distribution is configured in `ToxData/spell_generation.tsv`. Restart the game after editing it. Manual assignments take priority.

- **Ice Dragon:** manual assignment only; excluded from random guild/shrine generation and elemental books. Base cost: **25 mana**.
- **Fury of the Elements:** retains its separate rare generation rule; excluded from elemental books.
- **Summon Phoenix:** retains its separate generation rule and town exclusions.

Spell-specific effects, summons and timers run in DLLs. The standalone package does not add the story mod's talents, critical-hit rules or academies.

## Compatibility and testing

Summoned creatures use vanilla slots **122, 124 and 126**, configured programmatically. No Amethyst creature expansion or shared creature TXT replacement is required. Other mods that repurpose those slots can conflict.

Static and console checks have been performed against the two ERA installations used during development. These checks do not substitute for in-game testing or guarantee compatibility with every ERA version and plugin combination. Test editor save/reopen, acquisition, combat, save/load and BattleSave with your actual setup.

## Reporting a problem

Open an issue with your ERA/HD Mod versions, enabled mods, exact steps and the relevant crash/debug log. For map-specific problems, include a minimal test map if you can share it. Remove personal paths and other private information from logs before uploading them.

## Credits

ERA Spells is developed by Toxeos. You are welcome to modify the mod and share your own versions.
