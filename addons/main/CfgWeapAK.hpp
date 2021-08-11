class gm_ak47_base: gm_rifle_base {
    ACE_barrelLength = 415;
    ACE_barrelTwist = 240;
    magazineWell[] += {"CBA_762x39_AK","CBA_762x39_RPK"};
    rhs_1p29_type = "rhs_acc_1p29";
    rhs_pgo7v_type = "rhs_acc_pgo7v_ak";
    rhs_pgo7v2_type = "rhs_acc_pgo7v2_ak";
    rhs_pgo7v3_type = "rhs_acc_pgo7v3_ak";
    rhs_pkas_type = "rhs_acc_pkas";
    rhs_pso1m2_type = "rhs_acc_pso1m2_ak";
    rhs_pso1m21_type = "rhs_acc_pso1m21_ak";
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class gm_akm_base: gm_ak47_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class gm_akm_wud: gm_akm_base {
    displayName = "AKM";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 69.1;
    };
};
class gm_akmn_base: gm_akm_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class gm_akmn_wud: gm_akmn_base {
    displayName = "AKMN";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 70.1;
        class Cowsslot: asdg_OpticSideRail_AK_GM {};
    };
};

class gm_akm_pallad_base: gm_akm_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class gm_akm_pallad_wud: gm_akm_pallad_base {
    displayName = "AKM (Pallad)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 102.1;
    };
};

class gm_km72_base: gm_akmn_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 70.1;
    };
};
class gm_mpikm72_base: gm_km72_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class gm_mpikm72_brn: gm_mpikm72_base {
    displayName = "MPi KM-72";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class Cowsslot: asdg_OpticSideRail_AK_GM {};
    };
};
class gm_mpikm72_prp: gm_mpikm72_base {
    displayName = "MPi KM-72 (Plum)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class Cowsslot: asdg_OpticSideRail_AK_GM {};
    };
};

class gm_kms72_base: gm_km72_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 72.6;
    };
};
class gm_mpikms72_base: gm_kms72_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class gm_mpikms72_brn: gm_mpikms72_base {
    displayName = "MPi KMS-72";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class Cowsslot: asdg_OpticSideRail_AK_GM {};
    };
};
class gm_mpikms72_prp: gm_mpikms72_base {
    displayName = "MPi KMS-72 (Plum)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class Cowsslot: asdg_OpticSideRail_AK_GM {};
    };
};

class gm_ak74_base: gm_rifle_base {
    ACE_barrelLength = 415;
    ACE_barrelTwist = 200;
    magazineWell[] += {"CBA_545x39_AK","CBA_545x39_RPK"};
    rhs_1p29_type = "rhs_acc_1p29";
    rhs_pgo7v_type = "rhs_acc_pgo7v_ak";
    rhs_pgo7v2_type = "rhs_acc_pgo7v2_ak";
    rhs_pgo7v3_type = "rhs_acc_pgo7v3_ak";
    rhs_pkas_type = "rhs_acc_pkas";
    rhs_pso1m2_type = "rhs_acc_pso1m2_ak";
    rhs_pso1m21_type = "rhs_acc_pso1m21_ak";
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class gm_ak74n_base: gm_ak74_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class gm_mpiak74n_base: gm_ak74n_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class gm_mpiak74n_brn: gm_mpiak74n_base {
    displayName = "MPi AK-74N";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 73;
        class Cowsslot: asdg_OpticSideRail_AK_GM {};
    };
};
class gm_mpiak74n_prp: gm_mpiak74n_base {
    displayName = "MPi AK-74N (Plum)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 73;
        class Cowsslot: asdg_OpticSideRail_AK_GM {};
    };
};
class gm_aks74n_base: gm_ak74n_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class gm_mpiaks74n_base: gm_aks74n_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class gm_mpiaks74n_brn: gm_mpiaks74n_base {
    displayName = "MPi AKS-74N";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class Cowsslot: asdg_OpticSideRail_AK_GM {};
    };
};
class gm_mpiaks74n_prp: gm_mpiaks74n_base {
    displayName = "MPi AKS-74N (Plum)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class Cowsslot: asdg_OpticSideRail_AK_GM {};
    };
};
class gm_aks74nk_base: gm_aks74n_base {
    ACE_barrelLength = 206.5;
    ACE_barrelTwist = 160;
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class gm_mpiaks74nk_base: gm_aks74nk_base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class gm_mpiaks74nk_brn: gm_mpiaks74nk_base {
    displayName = "MPi AKS-74NK";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class Cowsslot: asdg_OpticSideRail_AK_GM {};
    };
};
class gm_mpiaks74nk_prp: gm_mpiaks74nk_base {
    displayName = "MPi AKS-74NK (Plum)";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class Cowsslot: asdg_OpticSideRail_AK_GM {};
    };
};
