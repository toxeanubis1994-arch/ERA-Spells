#pragma once
#include <windows.h>

// ERA Spells integration ABI v1, i686 Windows. No import library required.
// Count is highest spell ID+1, not the number of playable spells (holes70..80).
// Query:0=allowed,1=disabled,-1=not ready,-2=invalid/creature-only ID.
namespace EraSpellsIntegration {
using VersionFn=int (WINAPI*)();
using CountFn=int (WINAPI*)();
using DisabledFn=int (WINAPI*)(int);
struct Restrictions {
    VersionFn version=nullptr;
    CountFn count=nullptr;
    DisabledFn disabled=nullptr;
    bool connect() {
        HMODULE core=GetModuleHandleA("ToxeosBlizzard.era");
        if(!core)return false;
        version=reinterpret_cast<VersionFn>(GetProcAddress(core,"ToxeosBlizzard_GetSpellRestrictionsVersion"));
        count=reinterpret_cast<CountFn>(GetProcAddress(core,"ToxeosBlizzard_GetSpellCount"));
        disabled=reinterpret_cast<DisabledFn>(GetProcAddress(core,"ToxeosBlizzard_IsSpellDisabled"));
        return version && count && disabled && version()==1;
    }
};
}
