class gm_svd_base: gm_rifle_base {
    ACE_barrelLength = 620;
    ACE_barrelTwist = 240;
    magazineWell[] += {"CBA_762x54R_SVD","SVD_762x54R"};
    rhs_1p29_type = "rhs_acc_1p29";
    rhs_pgo7v_type = "rhs_acc_pgo7v_ak";
    rhs_pgo7v2_type = "rhs_acc_pgo7v2_ak";
    rhs_pgo7v3_type = "rhs_acc_pgo7v3_ak";
    rhs_pkas_type = "rhs_acc_pkas";
    rhs_pso1m2_type = "rhs_acc_pso1m2_ak";
    rhs_pso1m21_type = "rhs_acc_pso1m21_ak";
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class gm_svd_wud: gm_svd_base {
    displayName = "SVD";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 86;
        class Cowsslot: rhs_russian_svd_scopes_slot {};
    };
};

class gm_pm_base;
class gm_pm_blk: gm_pm_base {
    displayName = "PM";
    magazineWell[] += {"CBA_9x18_PM"};
};
class gm_p1_base;
class gm_p1_blk: gm_p1_base {
    displayName = "P1";
    magazineWell[] += {"CBA_9x19_P38"};
};

class gm_lp1_base;
class gm_lp1_blk: gm_lp1_base {
    displayName = "LP1";
};

class gm_p2a1_base;
class gm_p2a1_blk: gm_p2a1_base {
    displayName = "P2A1";
};

class gm_wz78_base;
class gm_wz78_blk: gm_wz78_base {
    displayName = "wz. 78";
};

class gm_launcher_base;
class gm_carlgustaf_m2_base: gm_launcher_base {
    magazineWell[] += {"CBA_Carl_Gustaf"};
};

class gm_rpg7_base: gm_launcher_base {
    magazineWell[] += {"RPG7", "CBA_RPG7"};
};
