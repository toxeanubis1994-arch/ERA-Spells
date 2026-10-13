# ERA Spells — release history

## 0.6 Beta

- Fixed custom buff/debuff icons in the creature window when Amethyst is installed. Standard spell icons remain unchanged.
- Fixed native physical-effect activation after loading an adventure save and entering battle with no saved timed effects. Heavenly Shield and status icons were checked in Complete with TUM/Amethyst and JS enabled.
- Fixed the initialization conflict with JS InstantAnim that could prevent native buffs and summons from loading.
- Updated native event registration for campaigns and round effects.
- Unified the live spell table used by ERA spell parameters and descriptions, addressing ACM tooltip updates. Full ACM Master/Grandmaster and campaign gameplay testing is still pending; this release does not add new Master/Grandmaster spell mechanics.
- Included Toxeos' new Invisibility animation: the supplied DEF resources and all 15 PNG frames.
- Shortened the Mod Browser description; older release notes now live in separate changelog files.

Validation: the author confirmed the current build works with Amethyst. The Complete test profile includes TUM, JS main module and GEM. Runtime logs record Heavenly Shield absorbing 9 and 6 damage and custom Shield/Dragon Wrath/Invisibility icon selection. Automated checks cover hook chaining, saved-state activation, spell-table access, acquisition and package integrity. This is not a claim that every combination of mods or every campaign has been tested.

## 0.5

- Removed the runtime ERM command/array update path associated with the map-loading crash.
- GEM research now reads the native spell availability table and the correct spell range. GEM files do not need modification; GEM is optional.
- Added custom-spell learning through the Conflux Grail, respecting map bans and the hero's Wisdom. Learned spells remain available after leaving the town.
- Added temporary custom spells from equipped elemental tomes. Removing a tome removes its temporary spells, while previously learned spells remain.
- Corrected small spell/status icons and restored original spell icons instead of replacing them with custom artwork.
- Included the current Desktop build, preserving its balance, English/Russian localization and map-editor support.

Validation: build, callback checks, executable signatures and package integrity checked. The latest changes have NOT yet been verified in a running game. To check the new GEM research catalog, start a new game on an existing map; research arrays already stored in old saves are not rebuilt. Maps do not need to be recreated.

Updating manually: replace the old **ERA Spells** folder with this version rather than merging files; obsolete icon overrides must be removed. Keep any personal configuration files separately if you want to retain customized settings.

## 0.4 beta

Fixes a division-by-zero crash during random map generation. The summon-only creatures (Phoenix 122, Ice Dragon 124 and Earth Bonds 126) are now excluded from both single-creature and multi-creature dwelling generator pools. Combat mechanics, resources and Spell IDs are unchanged.

The fix was checked with compiled callback tests and executable-byte validation on both ERA installations. The game was not launched for this update; a fresh random-map generation still needs in-game verification.

