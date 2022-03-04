class gm_rpk_base: gm_ak47_base {
    ACE_barrelLength = 590;
    ACE_barrelTwist = 240;
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class gm_rpk_wud: gm_rpk_base {
    displayName = "RPKN (Wood)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 107;
        class Cowsslot: asdg_OpticSideRail_AK_GM {};
    };
};

class gm_lmgrpk_base: gm_rpk_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 107;
        class Cowsslot: asdg_OpticSideRail_AK_GM {};
    };
};
class gm_lmgrpk_brn: gm_lmgrpk_base {
    displayName = "RPKN";
};
class gm_lmgrpk_prp: gm_lmgrpk_base {
    displayName = "RPKN (Plum)";
};

class gm_rpk74_base: gm_ak74_base {
    ACE_barrelLength = 590;
    ACE_barrelTwist = 200;
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class gm_rpk74n_base: gm_rpk74_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class gm_lmgrpk74n_base: gm_rpk74n_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 101;
        class Cowsslot: asdg_OpticSideRail_AK_GM {};
    };
};
class gm_lmgrpk74n_brn: gm_lmgrpk74n_base {
    displayName = "RPK-74N";
};
class gm_lmgrpk74n_prp: gm_lmgrpk74n_base {
    displayName = "RPK-74N (Plum)";
};

class gm_machineGun_base: gm_rifle_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class gm_mg3_base: gm_machineGun_base {
    ACE_barrelLength = 565;
    ACE_barrelTwist = 305;
    magazineWell[] += {"CBA_762x51_MG3","CBA_762x51_LINKS","M240_762x51"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 253.5;
    };
};
class gm_mg3_blk: gm_mg3_base {
    displayName = "MG3";
};
class gm_mg3_des: gm_mg3_base {
    displayName = "MG3 (Tan)";
};

class gm_lmgm62_base;
class gm_lmgm62_blk: gm_lmgm62_base {
    displayName = "LMG M/62";
};

class gm_pk_base: gm_machineGun_base {
    ACE_barrelLength = 605;
    ACE_barrelTwist = 240;
    magazineWell[] += {"CBA_762x54R_LINKS","PK_762x54R"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 165;
    };
};
class gm_hmgpkm_base;
class gm_hmgpkm_prp: gm_hmgpkm_base {
    displayName = "PKM";
};
