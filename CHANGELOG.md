# ERA Spells — release history

## 0.7.1

- Replaced Vampirism artwork with the approved bat in the spellbook, spell scroll, combat status icon, and adventure scroll (SpellBon.def).
- Synchronized all four formats between the story profile and both standalone installations. Spell mechanics are unchanged.

## 0.7

- Added four spells: **Survey**, **Mobility**, **Strength**, and **Vampirism**; the catalog now contains 23 custom spells (IDs 81–103).
- Survey reveals a chosen area until the owner's next turn. Ordinary exploration remains visible. Mobility grants 300 movement points; a hero must win a battle before casting it again that day.
- Strength is a Water spell lasting 3 rounds. Its independent shield formula is 9 × Spell Power + 9/9/18/27.
- Vampirism drains 15/20/25/30% damage and reduces maximum Health by 25/20/15/10%, according to Fire Magic mastery. Cure removes it. Successful healing now plays the native Vampire Lord life-drain animation and sound on the attacker.
- Fury of the Elements uses its own formula: floor(97.5 × Spell Power +130/130/260/390). It does not read Implosion's parameters.
- Summon Phoenix is now **Summon Flame Spirit**; the creature itself is named **Flame Spirit**. The description explains the army contribution to its stats and mana scaling from hero level 20; the redundant base-cost sentence was removed.
- Updated the author's Vampirism book/scroll/status artwork and Survey scroll. Included the approved Survey status portrait with the thumb in front of the telescope and fingers behind it.
- Installed the author's selected Mobility scroll.
- Updated private spell sounds, including Strength's selected Magic Shell sound, and Incineration's small icon.
- Fixed the GEM right-click description path for IDs 100–103 without modifying GEM files. Improved custom status-icon compatibility with RK/Amethyst.
- Successful Counterstrike and Confusion applications cancel each other. Corrected a combat-hook overlap affecting Vampirism and quick battle.
- Shortened spell descriptions, clarified war-machine exclusions and Deep Freeze's 200/150/50% modifiers, and removed excessive popup spacing. Deep Freeze's damage and duration now share one compact value block.
- Added a read-only **spell-restrictions API v1**, C++ header and example for third-party object/spell generators in Developers/SpellIntegration.
- Updated screenshots with the author's current game captures.

Validation: 44,239 standalone callback checks, 44,132 story callback checks, 474 codec/state checks, 23 editor IDs, 129 EN/RU text keys, native resource lookup and package/resource hashes. The Survey miniature is approved by the author. The new drain presentation still needs an in-game check. Full ACM Master/Grandmaster mechanics and exhaustive replay/campaign/mod-combination testing remain outside this release's validation scope.

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

