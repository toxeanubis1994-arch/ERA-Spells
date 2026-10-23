#include "SpellRestrictions.h"

// Call from your existing in-game object-generation callback, after the spell
// core is ready. This function does not load the core or generate any objects.
bool mapAllowsEraSpell(int spellId) {
    EraSpellsIntegration::Restrictions api;
    if(!api.connect())return false;
    if(spellId<0 || spellId>=api.count())return false;
    return api.disabled(spellId)==0;
}

// Apply your own school, level, object type and rarity filters as well.
// A map ban is distinct from a manual-only or zero-guild-chance spell.
