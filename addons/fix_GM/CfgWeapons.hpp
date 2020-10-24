class asdg_MuzzleSlot_556;
class asdg_MuzzleSlot_762_3CB_G3;

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

    class gm_ak47_base: gm_rifle_base {
        magazineWell[] += {"CBA_762x39_AK","CBA_762x39_RPK"};
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class gm_akm_base: gm_ak47_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class gm_akm_wud: gm_akm_base {
        displayName = "AKM";
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

    class gm_km72_base: gm_akmn_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
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
        class WeaponSlotsInfo: WeaponSlotsInfo {};
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
        magazineWell[] += {"CBA_545x39_AK","CBA_545x39_RPK"};
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

    class gm_rpk_base: gm_ak47_base {
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

    class gm_m16_base: gm_rifle_base {
        magazineWell[] += {"CBA_556x45_STANAG","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","STANAG_556x45_Large"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: asdg_MuzzleSlot_556 {};
        };
    };
    class gm_m16a1_base: gm_m16_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class gm_m16a1_blk: gm_m16a1_base {
        displayName = "M16A1";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 65;
        };
    };
    class gm_m16a2_base: gm_m16_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class gm_m16a2_blk: gm_m16a2_base {
        displayName = "M16A2";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 77;
        };
    };

    class gm_c7a1_base;
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

    class gm_g3_base: gm_rifle_base {
        magazineWell[] += {"CBA_762x51_G3","CBA_762x51_G3_L","CBA_762x51_G3_XL"};
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class gm_g3a3_base: gm_g3_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
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

    class gm_machineGun_base: gm_rifle_base {};
    class gm_mg3_base: gm_machineGun_base {
        magazineWell[] += {"CBA_762x51_MG3","CBA_762x51_LINKS","M240_762x51"};
    };
    class gm_mg3_blk: gm_mg3_base {
        displayName = "MG3";
    };
    class gm_mg3_des: gm_mg3_base {
        displayName = "MG3 (Tan)";
    };

    class gm_lmgm62_base;
    class gm_lmgm62_blk: gm_lmgm62_base {
        displayName = "M/62";
    };

    class gm_pk_base: gm_machineGun_base {
        magazineWell[] += {"CBA_762x54R_LINKS","PK_762x54R"};
    };
    class gm_hmgpkm_base;
    class gm_hmgpkm_prp: gm_hmgpkm_base {
        displayName = "PKM";
    };

    class gm_svd_base: gm_rifle_base {
        magazineWell[] += {"CBA_762x54R_SVD","SVD_762x54R"};
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class gm_svd_wud: gm_svd_base {
        displayName = "SVD";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 86;
            class Cowsslot: rhs_russian_svd_scopes_slot {};
        };
    };

    class gm_mp5_base: gm_rifle_base {
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
        };
    };

    class gm_mp5a3_base: gm_mp5_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class gm_mp5a3_blk: gm_mp5a3_base {
        displayName = "SG5A3";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 68.3;
        };
    };

    class gm_mp5sd_base: gm_mp5_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class gm_mp5sd2_base: gm_mp5sd_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class gm_mp5sd2_blk: gm_mp5sd2_base {
        displayName = "SG5SD2";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 70.5;
        };
    };

    class gm_mp5sd3_base: gm_mp5sd_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class gm_mp5sd3_blk: gm_mp5sd3_base {
        displayName = "SG5SD3";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 75;
        };
    };

    class gm_pm63_base;
    class gm_pm63_blk: gm_pm63_base {
        displayName = "PM-63";
    };

    class gm_mp2a1_base;
    class gm_mp2a1_blk: gm_mp2a1_base {
        displayName = "MP2A1";
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
        magazineWell[] += {"RPG7"};
    };
};
