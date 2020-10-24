class CfgMagazines {
    class gm_Magazine_Base;
    class gm_magazine_545x39mm_base;
    class gm_magazine_556x45mm_base;
    class gm_magazine_762x39mm_base;
    class gm_magazine_762x51mm_base;
    class gm_magazine_762x51mm_belt_base;
    class gm_magazine_762x54mmR_base;
    class gm_magazine_762x54mmR_belt_base;

    class gm_30rnd_545x39mm_ak74_base: gm_magazine_545x39mm_base {
        mass = 9.1;
    };
    class gm_45rnd_545x39mm_ak74_base: gm_magazine_545x39mm_base {
        mass = 13.6;
    };

    class gm_20rnd_556x45mm_stanag_base: gm_magazine_556x45mm_base {
        mass = 6.25;
    };
    class gm_30rnd_556x45mm_stanag_base: gm_magazine_556x45mm_base {
        mass = 9.35;
    };

    class gm_30rnd_762x39mm_ak47_base: gm_magazine_762x39mm_base {
        mass = 13.5;
    };
    class gm_75rnd_762x39mm_ak47_base: gm_magazine_762x39mm_base {
        mass = 33.7;
    };

    class gm_20rnd_762x51mm_g3_base: gm_magazine_762x51mm_base {
        mass = 16.9;
    };
    class gm_30rnd_9x19mm_mp5_base: gm_magazine_762x51mm_base {
        mass = 10;
    };
    class gm_120rnd_762x51mm_mg3_base: gm_magazine_762x51mm_belt_base {
        mass = 40;
    };

    class gm_1rnd_67mm_heat_dm22a1_g3: gm_Magazine_Base {
        mass = 8;
    };

    class gm_10rnd_762x54mmR_svd_base: gm_magazine_762x54mmR_base {
        mass = 5.1;
    };
    class gm_100rnd_762x54mmR_pk_base: gm_magazine_762x54mmR_belt_base {
        mass = 43;
    };

    class gm_8rnd_9x19mm_p1_blk;
    class gm_8Rnd_9x19mm_B_DM11_p1_blk: gm_8rnd_9x19mm_p1_blk {
        mass = 4.5;
    };
    class gm_8Rnd_9x19mm_B_DM51_p1_blk: gm_8rnd_9x19mm_p1_blk {
        mass = 4.5;
    };

    class gm_8rnd_9x18mm_pm_blk;
    class gm_8Rnd_9x18mm_B_pst_pm_blk: gm_8rnd_9x18mm_pm_blk {
        mass = 4.5;
    };

    class gm_15rnd_9x18mm_pm63_blk;
    class gm_15Rnd_9x18mm_B_pst_pm63_blk: gm_15rnd_9x18mm_pm63_blk {
        mass = 3.5;
    };

    class gm_25rnd_9x18mm_pm63_blk;
    class gm_25Rnd_9x18mm_B_pst_pm63_blk: gm_25rnd_9x18mm_pm63_blk {
        mass = 6;
    };

    class gm_1rnd_40mmm_rpg7_base;
    class gm_1Rnd_40mm_heat_pg7v_rpg7: gm_1rnd_40mmm_rpg7_base {
        mass = 31.5;
    };
    class gm_1Rnd_40mm_heat_pg7vl_rpg7: gm_1rnd_40mmm_rpg7_base {
        mass = 37.2;
    };
};
