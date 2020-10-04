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
    class gm_machineGun_base: gm_rifle_base {};
    class gm_ak47_base: gm_rifle_base {
        magazineWell[] += {"CBA_762x39_AK","CBA_762x39_RPK"};
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class gm_akm_base: gm_ak47_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };

    /*class gm_akm_wud: gm_akm_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {

        };
    };*/



    class gm_akmn_base: gm_akm_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class gm_akmn_wud: gm_akmn_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            //class Cowsslot: rhs_russian_scope {};
            mass = 70.1;
        };
    };

    class gm_ak74_base: gm_rifle_base {
        magazineWell[] += {"CBA_545x39_AK","CBA_545x39_RPK"};
        //class WeaponSlotsInfo: WeaponSlotsInfo {};
    };

    class gm_m16_base: gm_rifle_base {
        magazineWell[] += {"CBA_556x45_STANAG","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","STANAG_556x45_Large"};
        /*class WeaponSlotsInfo: WeaponSlotsInfo {

        };*/
    };

    class gm_g3_base: gm_rifle_base {
        magazineWell[] += {"CBA_762x51_G3","CBA_762x51_G3_L","CBA_762x51_G3_XL"};
        /*class WeaponSlotsInfo: WeaponSlotsInfo {

        };*/
    };

    class gm_mg3_base: gm_machineGun_base {
        magazineWell[] += {"CBA_762x51_MG3","CBA_762x51_LINKS","M240_762x51"};
        /*class WeaponSlotsInfo: WeaponSlotsInfo {

        };*/
    };


    class gm_pk_base: gm_machineGun_base {
        magazineWell[] += {"CBA_762x54R_LINKS","PK_762x54R"};
        /*class WeaponSlotsInfo: WeaponSlotsInfo {

        };*/
    };

    class gm_svd_base: gm_rifle_base {
        magazineWell[] += {"CBA_762x54R_SVD","SVD_762x54R"};
        /*class WeaponSlotsInfo: WeaponSlotsInfo {

        };*/
    };

    class gm_mp5_base: gm_rifle_base {
        magazineWell[] += {"CBA_9x19_MP5"};
        /*class WeaponSlotsInfo: WeaponSlotsInfo {

        };*/
    };
};
