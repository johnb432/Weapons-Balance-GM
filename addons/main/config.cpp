#include "script_component.hpp"

// TODO: Rename launcher magazines

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "gm_core",
            "gm_weapons_ammo",
            "gm_weapons_rifles_ak47",
            "gm_weapons_rifles_ak74",
            "gm_weapons_rifles_g3",
            "gm_weapons_rifles_g36",
            "gm_weapons_rifles_m16",
            "gm_weapons_rifles_mp5",
            "gm_weapons_rifles_svd",
            "gm_weapons_machineguns_mg3",
            "gm_weapons_machineguns_pk",
            "gm_weapons_machinepistols_gm_mp2",
            "gm_weapons_machinepistols_gm_pm63",
            "gm_weapons_pistols_lp1",
            "gm_weapons_pistols_p1",
            "gm_weapons_pistols_p2a1",
            "gm_weapons_pistols_pm",
            "gm_weapons_launchers_carlgustaf",
            "gm_weapons_launchers_fim43",
            "gm_weapons_launchers_hk69",
            "gm_weapons_launchers_m72",
            "gm_weapons_launchers_pallad",
            "gm_weapons_launchers_pzf3",
            "gm_weapons_launchers_pzf44_2",
            "gm_weapons_launchers_rpg7",
            "gm_weapons_launchers_strela",
            "gm_characters_pl_characters"
        };
        author = "johnb43";
        authors[] = {"johnb43"};
        url = "https://github.com/johnb432/Weapons-Balance-GM";
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
#include "CfgAcc.hpp"
#include "CfgMagazineWells.hpp"

class asdg_MuzzleSlot_556;
class UK3CB_MuzzleSlot_762_G3;
class asdg_MuzzleSlot_9MM_SMG;
class PointerSlot_Rail;
class asdg_UnderSlot;

class CfgWeapons {
    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo {};
    };
    class Rifle_Long_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class gm_rifle_base: Rifle_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };

    #include "weapons\CfgWeapMisc.hpp"
    #include "weapons\CfgWeapAK.hpp"
    #include "weapons\CfgWeapAR15.hpp"
    #include "weapons\CfgWeapG3.hpp"
    #include "weapons\CfgWeapMG.hpp"
    #include "weapons\CfgWeapSMG.hpp"
};

class CfgMagazines {
    class gm_Magazine_Base;
    class gm_magazine_556x45mm_base;
    class gm_magazine_762x54mmR_base;

    #include "magazines\CfgMagAK.hpp"
    #include "magazines\CfgMagG3.hpp"
    #include "magazines\CfgMagMG.hpp"
    #include "magazines\CfgMagSMG.hpp"
    #include "magazines\CfgMagMisc.hpp"
};

class CBA_DisposableLaunchers {
    gm_m72a3_oli_ready[] = {"gm_m72a3_oli","gm_m72a3_spent_oli"};
};
