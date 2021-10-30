class gm_g3_base: gm_rifle_base {
    ACE_barrelLength = 450;
    ACE_barrelTwist = 305;
    magazineWell[] += {"CBA_762x51_G3","CBA_762x51_G3_L","CBA_762x51_G3_XL"};
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class gm_g3a3_base: gm_g3_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 96.9;
        class Cowsslot: UK3CB_OpticRail1913_G3 {};
        class MuzzleSlot: UK3CB_MuzzleSlot_762_G3 {};
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

class gm_g3_dmr_base: gm_g3_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class gm_g3a3_dmr_base: gm_g3_dmr_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 98.9;
        class Cowsslot: UK3CB_OpticRail1913_G3 {};
        class MuzzleSlot: UK3CB_MuzzleSlot_762_G3 {};
        class PointerSlot: PointerSlot_Rail {};
        class UnderBarrelSlot: asdg_UnderSlot {};
    };
};
class gm_g3a3_dmr_oli: gm_g3a3_dmr_base {
    displayName = "G3A3 DMR";
};
class gm_g3a3_dmr_blk: gm_g3a3_dmr_base {
    displayName = "G3A3 DMR (Black)";
};
class gm_g3a3_dmr_des: gm_g3a3_dmr_base {
    displayName = "G3A3 DMR (Tan)";
};

class gm_g3a4_base: gm_g3_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 101.4;
        class Cowsslot: UK3CB_OpticRail1913_G3 {};
        class MuzzleSlot: UK3CB_MuzzleSlot_762_G3 {};
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

class gm_g3_ebr_base: gm_g3_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class gm_g3a4_ebr_base: gm_g3_ebr_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 103.4;
        class Cowsslot: CowsSlot_Rail {};
        class MuzzleSlot: UK3CB_MuzzleSlot_762_G3 {};
        class PointerSlot: PointerSlot_Rail {};
        class UnderBarrelSlot: asdg_UnderSlot {};
    };
};
class gm_g3a4_ebr_oli: gm_g3a4_ebr_base {
    displayName = "G3A4 EBR";
};
class gm_g3a4_ebr_blk: gm_g3a4_ebr_base {
    displayName = "G3A4 EBR (Black)";
};
class gm_g3a4_ebr_des: gm_g3a4_ebr_base {
    displayName = "G3A4 EBR (Tan)";
};

class gm_gvm75_base: gm_g3_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 96.9;
        class Cowsslot: UK3CB_OpticRail1913_G3 {};
        class MuzzleSlot: UK3CB_MuzzleSlot_762_G3 {};
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
        class Cowsslot: UK3CB_OpticRail1913_G3 {};
        class MuzzleSlot: UK3CB_MuzzleSlot_762_G3 {};
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
