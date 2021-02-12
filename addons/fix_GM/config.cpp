class CfgPatches {
    class WB_fix_GM {
        name = "Weapons balance - Global Mobilization";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.96;
        requiredAddons[] = {
            "cba_main"
        };
        author = "johnb43";
    };
};

#include "CfgAmmo.hpp"
#include "CfgAcc.hpp"
#include "CfgMagazineWells.hpp"

class asdg_MuzzleSlot_556;
class UK3CB_MuzzleSlot_762_G3;
class asdg_MuzzleSlot_9MM_SMG;

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

    #include "CfgWeapAK.hpp"
    #include "CfgWeapAR15.hpp"
    #include "CfgWeapG3.hpp"
    #include "CfgWeapMG.hpp"
    #include "CfgWeapSMG.hpp"
    #include "CfgWeapMisc.hpp"
};

class CfgMagazines {
    class gm_Magazine_Base;
    class gm_magazine_556x45mm_base;
    class gm_magazine_762x54mmR_base;

    #include "CfgMagAK.hpp"
    #include "CfgMagG3.hpp"
    #include "CfgMagMG.hpp"
    #include "CfgMagSMG.hpp"
    #include "CfgMagMisc.hpp"
};
