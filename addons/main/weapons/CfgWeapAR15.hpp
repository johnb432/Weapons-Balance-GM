class gm_m16_base: gm_rifle_base {
    ACE_barrelLength = 508;
    ACE_barrelTwist = 177.8;
    magazineWell[] += {"CBA_556x45_STANAG","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","STANAG_556x45_Large"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class MuzzleSlot: asdg_MuzzleSlot_556 {};
    };
};
class gm_m16a1_base: gm_m16_base {
    class WeaponSlotsInfo;
};
class gm_m16a1_blk: gm_m16a1_base {
    displayName = "M16A1";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 68.5;
    };
};
class gm_m16a2_base: gm_m16_base {
    class WeaponSlotsInfo;
};
class gm_m16a2_blk: gm_m16a2_base {
    displayName = "M16A2";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 77;
    };
};

class gm_c7a1_base: gm_m16_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 73;
    };
};

class gm_c7a1_blk: gm_c7a1_base {
    displayName = "C7A1 (Black)";
};
class gm_c7a1_oli: gm_c7a1_base {
    displayName = "C7A1";
};

class gm_gvm95_base;
class gm_gvm95_blk: gm_gvm95_base {
    displayName = "GV M/95";
};
