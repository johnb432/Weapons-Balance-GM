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
    class WeaponSlotsInfo;
};
class gm_svd_wud: gm_svd_base {
    displayName = "SVD";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 86;
        class Cowsslot: rhs_russian_svd_scopes_slot {};
    };
};

class gm_g36_base: gm_rifle_base {
    magazineWell[] += {"CBA_556x45_G36"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class MuzzleSlot: asdg_MuzzleSlot_556 {};
    };
};

class gm_g36a1_base;
class gm_g36a1_blk: gm_g36a1_base {
    displayName = "G36A1";
};
class gm_g36a1_des: gm_g36a1_base {
    displayName = "G36A1 (Tan)";
};

class gm_g36e_base: gm_g36_base {
    class WeaponSlotsInfo;
};
class gm_g36e_blk: gm_g36e_base {
    displayName = "G36E";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 79;
    };
};

class gm_grenadeLauncher_base;
class gm_pallad_muzzle: gm_grenadeLauncher_base {
    descriptionShort = "Grenadelauncher<br />Caliber: 40x46 mm";
    displayName = "GP-40";
    displaynameShort = "GP-40";
    magazineWell[] += {"CBA_40mm_M203"};
};
class gm_hk69_muzzle: gm_grenadeLauncher_base {
    displaynameShort = "GraPi";
    magazineWell[] += {"CBA_40mm_M203"};
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
    magazineWell[] += {"CBA_FLARE_265"};
};

class gm_p2a1_base;
class gm_p2a1_blk: gm_p2a1_base {
    displayName = "P2A1";
    magazineWell[] += {"CBA_FLARE_265"};
};

class gm_wz78_base;
class gm_wz78_blk: gm_wz78_base {
    displayName = "wz. 78";
    magazineWell[] += {"CBA_FLARE_265"};
};

class gm_hk69a1_base;
class gm_hk69a1_blk: gm_hk69a1_base {
    displayName = "GraPi";
};

class gm_pallad_d_base;
class gm_pallad_d_brn: gm_pallad_d_base {
    displayName = "GS-40";
    displaynameShort = "GS-40";
};

class gm_launcher_base;
class gm_carlgustaf_m2_base: gm_launcher_base {
    magazineWell[] += {"CBA_Carl_Gustaf"};
};

class gm_rpg7_base: gm_launcher_base {
    magazineWell[] += {"RPG7", "CBA_RPG7"};
};

class gm_m72_base: gm_launcher_base {
    magazineReloadTime = 0;
};

class gm_m72a3_base;
class gm_m72a3_oli: gm_m72a3_base {
    baseWeapon = "gm_m72a3_oli";
};
class gm_m72a3_oli_ready: gm_m72a3_oli {
    scope = 1;
    scopeArsenal = 1;

    class EventHandlers {
        fired = "_this call CBA_fnc_firedDisposable";
    };
};
class gm_m72a3_spent_oli: gm_m72a3_base {
    baseWeapon = "gm_m72a3_spent_oli";
};

class gm_strela_launcher_base: gm_launcher_base {
    magazineReloadTime = 0;
    magazineWell[] += {"CBA_STRELA"};
};

class gm_fim43_base: gm_launcher_base {
    magazineReloadTime = 0;
    magazineWell[] += {"CBA_FIM"};
};

class gm_vest_unarmored_base;
class gm_pl_army_vest_80_base: gm_vest_unarmored_base {
    class ItemInfo;
};
class gm_pl_army_vest_80_rig_gry: gm_pl_army_vest_80_base {
    class ItemInfo: ItemInfo {
        mass = 8;
    };
};
