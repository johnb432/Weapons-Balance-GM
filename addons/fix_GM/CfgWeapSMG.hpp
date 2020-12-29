class gm_mp5_base: gm_rifle_base {
    ACE_barrelLength = 225;
    ACE_barrelTwist = 250;
    magazineWell[] += {"CBA_9x19_MP5"};
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class gm_mp5a2_base: gm_mp5_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class gm_mp5a2_blk: gm_mp5a2_base {
    displayName = "SG5A2";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 63.8;
        class Cowsslot: asdg_OpticRail1913_3CB_G3 {};
        class MuzzleSlot: asdg_MuzzleSlot_9MM_SMG {};
    };
};

class gm_mp5a3_base: gm_mp5_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class gm_mp5a3_blk: gm_mp5a3_base {
    displayName = "SG5A3";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 68.3;
        class Cowsslot: asdg_OpticRail1913_3CB_G3 {};
        class MuzzleSlot: asdg_MuzzleSlot_9MM_SMG {};
    };
};

class gm_mp5sd_base: gm_mp5_base {
    ACE_barrelLength = 146;
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class gm_mp5sd2_base: gm_mp5sd_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class gm_mp5sd2_blk: gm_mp5sd2_base {
    displayName = "SG5SD2";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 70.5;
        class Cowsslot: asdg_OpticRail1913_3CB_G3 {};
    };
};

class gm_mp5sd3_base: gm_mp5sd_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class gm_mp5sd3_blk: gm_mp5sd3_base {
    displayName = "SG5SD3";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 75;
        class Cowsslot: asdg_OpticRail1913_3CB_G3 {};
    };
};

class gm_pm63_base: gm_rifle_base {
    ACE_barrelLength = 152;
    ACE_barrelTwist = 250;
    magazineWell[] += {"CBA_9x18_PM63"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 35;
    };
};
class gm_pm63_blk: gm_pm63_base {
    displayName = "PM-63";
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};

class gm_mp2_base: gm_rifle_base {
    ACE_barrelLength = 260;
    ACE_barrelTwist = 250;
    magazineWell[] += {"CBA_9x19_UZI"};
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class gm_mp2a1_base: gm_mp2_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class gm_mp2a1_blk: gm_mp2a1_base {
    displayName = "MP2A1";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 77;
    };
};
