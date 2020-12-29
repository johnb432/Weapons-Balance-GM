class gm_g3_base: gm_rifle_base {
    ACE_barrelLength = 450;
    ACE_barrelTwist = 305;
    magazineWell[] += {"CBA_762x51_G3","CBA_762x51_G3_L","CBA_762x51_G3_XL"};
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class gm_g3a3_base: gm_g3_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 96.9;
        class Cowsslot: asdg_OpticRail1913_3CB_G3 {};
        class MuzzleSlot: asdg_MuzzleSlot_762_3CB_G3 {};
    };
};
class gm_g3a3_blk: gm_g3a3_base {
    displayName = "G3A3 (Black)";
};
class gm_g3a3_des: gm_g3a3_base {
    displayName = "G3A3 (Tan)";
};
class gm_g3a3_grn: gm_g3a3_base {
    displayName = "G3A3 (Green)";
};
class gm_g3a3_oli: gm_g3a3_base {
    displayName = "G3A3";
};

class gm_g3a4_base: gm_g3_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 101.4;
        class Cowsslot: asdg_OpticRail1913_3CB_G3 {};
        class MuzzleSlot: asdg_MuzzleSlot_762_3CB_G3 {};
    };
};
class gm_g3a4_blk: gm_g3a4_base {
    displayName = "G3A4 (Black)";
};
class gm_g3a4_des: gm_g3a4_base {
    displayName = "G3A4 (Tan)";
};
class gm_g3a4_grn: gm_g3a4_base {
    displayName = "G3A4 (Green)";
};
class gm_g3a4_oli: gm_g3a4_base {
    displayName = "G3A4";
};

class gm_gvm75_base: gm_g3_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 96.9;
        class Cowsslot: asdg_OpticRail1913_3CB_G3 {};
        class MuzzleSlot: asdg_MuzzleSlot_762_3CB_G3 {};
    };
};
class gm_gvm75_blk: gm_gvm75_base {
    displayName = "GV M/75 (Black)";
};
class gm_gvm75_grn: gm_gvm75_base {
    displayName = "GV M/75 (Green)";
};
class gm_gvm75_oli: gm_gvm75_base {
    displayName = "GV M/75";
};

class gm_gvm75carb_base: gm_g3_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 101.4;
        class Cowsslot: asdg_OpticRail1913_3CB_G3 {};
        class MuzzleSlot: asdg_MuzzleSlot_762_3CB_G3 {};
    };
};
class gm_gvm75carb_blk: gm_gvm75carb_base {
    displayName = "GV M/75 Carbine (Black)";
};
class gm_gvm75carb_grn: gm_gvm75carb_base {
    displayName = "GV M/75 Carbine (Green)";
};
class gm_gvm75carb_oli: gm_gvm75carb_base {
    displayName = "GV M/75 Carbine";
};
