#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "gm_characters_dk_characters"
        };
        author = "johnb43";
        url = "https://github.com/johnb432/Weapons-Balance-GM";
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        name = "Weapons Balance - Global Mobilization";
        author = "johnb43";
        tooltipOwned = "Weapons Balance - Global Mobilization";
        hideName = 0;
        hidePicture = 0;
        actionName = "Github";
        action = "https://github.com/johnb432/Weapons-Balance-GM";
        description = "A collection of balancing mods made by johnb43.";
        overview = "A collection of balancing mods made by johnb43.";
        picture = "\z\wb_gm\addons\main\ui\logo_weapons_balance.paa"; // http://getdrawings.com/get-drawing#gun-drawing-in-pencil-27.jpg, http://getdrawings.com/get-drawing#gun-drawing-in-pencil-17.png
        logo = "\z\wb_gm\addons\main\ui\logo_weapons_balance.paa";
        overviewPicture = "\z\wb_gm\addons\main\ui\logo_weapons_balance.paa";
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
