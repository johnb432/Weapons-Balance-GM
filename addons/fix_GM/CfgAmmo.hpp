class CfgAmmo {
    /* Example: .30-06
    ACE_barrelLengths[] = {n, m, o}; array of floats with typical barrel lengths
    ACE_bulletLength = 85 - 63 * 4/5 = 35; Overall length of round - length of cartridge * 4/5
    ACE_caliber = 7.8; Bullet diameter
    */

    class gm_bullet_base;
    class gm_bullet_9x18mm_base: gm_bullet_base { //rhs_B_9x18_57N181S, 250mm twist
        ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
        ACE_ballisticCoefficients[] = {0.125};
        ACE_barrelLengths[] = {96.52,127,228.6};
        ACE_bulletLength = 15.494;
        ACE_bulletMass = 6.00048;
        ACE_caliber = 9.271;
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {298,330,350};
        ACE_standardAtmosphere = "ICAO";
        ACE_velocityBoundaries[] = {};
    };

    class gm_bullet_9x19mm_base: gm_bullet_base { //HLC_9x19_Ball, https://en.wikipedia.org/wiki/9%C3%9719mm_Parabellum, 250mm twist
        ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
        ACE_ballisticCoefficients[] = {0.165};
        ACE_barrelLengths[] = {101.6,127,228.6};
        ACE_bulletLength = 15.494;
        ACE_bulletMass = 8.0352;
        ACE_caliber = 9.017;
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {340,370,400};
        ACE_standardAtmosphere = "ASM";
        ACE_velocityBoundaries[] = {};
    };
};
