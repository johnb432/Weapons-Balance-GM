class asdg_SlotInfo;
class asdg_OpticRail: asdg_SlotInfo {
    class compatibleItems/* {}*/;
};
class asdg_OpticSideMount: asdg_OpticRail {
    class compatibleItems/* {}*/;
};
class asdg_OpticSideRail_AK: asdg_OpticSideMount {
    class compatibleItems: compatibleItems {
        gm_pgo7v_blk = 1;
        gm_zfk4x25_blk = 1;
    };
};
class asdg_OpticSideRail_AKSVD: asdg_OpticSideMount {
    class compatibleItems: compatibleItems {
        gm_pgo7v_blk = 1;
        gm_zfk4x25_blk = 1;
    };
};
class asdg_OpticSideRail_AK_GM: asdg_OpticSideRail_AKSVD {
    class compatibleItems: compatibleItems {
        gm_zvn64_rear_rpk = 1;
    };
};
class asdg_OpticSideRail_SVD: asdg_OpticSideMount {
    class compatibleItems: compatibleItems {
        gm_zfk4x25_blk = 1;
        gm_pso1_gry = 1;
    };
};
class rhs_russian_svd_scopes_slot: asdg_OpticSideRail_SVD {
    class compatibleItems {
        gm_zfk4x25_blk = 1;
        gm_pso1_gry = 1;
    };
};

class UK3CB_OpticRail1913_G3: asdg_OpticRail {
    class compatibleItems {
        gm_feroz24_blk = 1;
        gm_feroz24_des = 1;
    };
};

class asdg_OpticRail1913: asdg_OpticRail {
    class compatibleItems {
        gm_c79a1_blk = 1;
        gm_c79a1_oli = 1;
    };
};

class CowsSlot;
class CowsSlot_Rail: CowsSlot {
    class compatibleItems {
        gm_c79a1_blk = 1;
        gm_c79a1_oli = 1;
    };
};
