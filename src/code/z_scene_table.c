#define INTERNAL_SRC_CODE_Z_SCENE_TABLE_C
#include "global.h"
#include "z64scene.h"
#include "z64actor.h"
#include "z64bgcheck.h"
#include "z64save.h"
#include "z64global.h"
#include "z64player.h"
#include "z64item.h"
#include "z_kankyo.h"
#include "sfx.h"
#include "z_scene_table.h"

extern Gfx gEmptyDL[];


#include "segment_symbols.h"

#include "scenes/overworld/spot00/spot00_scene.h"
#include "scenes/overworld/spot00/spot00_room_0.h"
#include "scenes/overworld/spot01/spot01_scene.h"
#include "scenes/overworld/spot02/spot02_scene.h"
#include "scenes/overworld/spot03/spot03_scene.h"
#include "scenes/overworld/spot04/spot04_scene.h"
#include "scenes/overworld/spot05/spot05_scene.h"
#include "scenes/overworld/spot06/spot06_scene.h"
#include "scenes/overworld/spot07/spot07_scene.h"
#include "scenes/overworld/spot08/spot08_scene.h"
#include "scenes/overworld/spot09/spot09_scene.h"
#include "scenes/overworld/spot10/spot10_scene.h"
#include "scenes/overworld/spot11/spot11_scene.h"
#include "scenes/overworld/spot12/spot12_scene.h"
#include "scenes/overworld/spot13/spot13_scene.h"
#include "scenes/overworld/spot15/spot15_scene.h"
#include "scenes/overworld/spot16/spot16_scene.h"
#include "scenes/overworld/spot16/spot16_room_0.h"
#include "scenes/overworld/spot17/spot17_scene.h"
#include "scenes/overworld/spot18/spot18_scene.h"
#include "scenes/overworld/spot20/spot20_scene.h"
#include "scenes/overworld/souko/souko_scene.h"
#include "scenes/overworld/entra/entra_scene.h"

#include "scenes/indoors/takaraya/takaraya_scene.h"
#include "scenes/indoors/kokiri_home/kokiri_home_scene.h"
#include "scenes/indoors/kokiri_home3/kokiri_home3_scene.h"
#include "scenes/indoors/kokiri_home4/kokiri_home4_scene.h"
#include "scenes/indoors/kokiri_home5/kokiri_home5_scene.h"
#include "scenes/indoors/kakariko/kakariko_scene.h"
#include "scenes/indoors/link_home/link_home_scene.h"
#include "scenes/indoors/impa/impa_scene.h"
#include "scenes/indoors/malon_stable/malon_stable_scene.h"
#include "scenes/indoors/labo/labo_scene.h"
#include "scenes/indoors/hylia_labo/hylia_labo_scene.h"
#include "scenes/indoors/tent/tent_scene.h"
#include "scenes/indoors/hut/hut_scene.h"
#include "scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene.h"
#include "scenes/indoors/yousei_izumi_tate/yousei_izumi_tate_scene.h"
#include "scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene.h"
#include "scenes/indoors/syatekijyou/syatekijyou_scene.h"
#include "scenes/indoors/tokinoma/tokinoma_scene.h"
#include "scenes/indoors/kenjyanoma/kenjyanoma_scene.h"
#include "scenes/indoors/hairal_niwa/hairal_niwa_scene.h"
#include "scenes/indoors/hairal_niwa_n/hairal_niwa_n_scene.h"
#include "scenes/indoors/nakaniwa/nakaniwa_scene.h"
#include "scenes/indoors/bowling/bowling_scene.h"
#include "scenes/indoors/mahouya/mahouya_scene.h"
#include "scenes/indoors/hakasitarelay/hakasitarelay_scene.h"
#include "scenes/indoors/hairal_niwa2/hairal_niwa2_scene.h"

#include "scenes/misc/entra_n/entra_n_scene.h"
#include "scenes/misc/enrui/enrui_scene.h"
#include "scenes/misc/market_alley/market_alley_scene.h"
#include "scenes/misc/market_alley_n/market_alley_n_scene.h"
#include "scenes/misc/market_day/market_day_scene.h"
#include "scenes/misc/market_night/market_night_scene.h"
#include "scenes/misc/market_ruins/market_ruins_scene.h"
#include "scenes/misc/shrine/shrine_scene.h"
#include "scenes/misc/shrine_n/shrine_n_scene.h"
#include "scenes/misc/shrine_r/shrine_r_scene.h"
#include "scenes/misc/kakariko3/kakariko3_scene.h"
#include "scenes/misc/kakusiana/kakusiana_scene.h"
#include "scenes/misc/hakaana/hakaana_scene.h"
#include "scenes/misc/hakaana2/hakaana2_scene.h"
#include "scenes/misc/hakaana_ouke/hakaana_ouke_scene.h"
#include "scenes/misc/turibori/turibori_scene.h"
#include "scenes/misc/kinsuta/kinsuta_scene.h"
#include "scenes/misc/hiral_demo/hiral_demo_scene.h"

#include "scenes/dungeons/men/men_scene.h"
#include "scenes/dungeons/ddan/ddan_scene.h"
#include "scenes/dungeons/ydan/ydan_scene.h"
#include "scenes/dungeons/bdan/bdan_scene.h"
#include "scenes/dungeons/HIDAN/HIDAN_scene.h"
#include "scenes/dungeons/ganon/ganon_scene.h"

#include "scenes/shops/shop1/shop1_scene.h"
#include "scenes/shops/kokiri_shop/kokiri_shop_scene.h"
#include "scenes/shops/golon/golon_scene.h"
#include "scenes/shops/zoora/zoora_scene.h"
#include "scenes/shops/drag/drag_scene.h"
#include "scenes/shops/alley_shop/alley_shop_scene.h"
#include "scenes/shops/night_shop/night_shop_scene.h"
#include "scenes/shops/face_shop/face_shop_scene.h"

#include "scenes/dungeons/Bmori1/Bmori1_scene.h"
#include "scenes/dungeons/MIZUsin/MIZUsin_scene.h"
#include "scenes/dungeons/gerudoway/gerudoway_scene.h"
#include "scenes/dungeons/jyasinzou/jyasinzou_scene.h"
#include "scenes/indoors/miharigoya/miharigoya_scene.h"
#include "scenes/dungeons/ice_doukutu/ice_doukutu_scene.h"
#include "scenes/dungeons/HAKAdan/HAKAdan_scene.h"
#include "scenes/dungeons/HAKAdanCH/HAKAdanCH_scene.h"
#include "scenes/dungeons/ganontika/ganontika_scene.h"
#include "scenes/dungeons/ganon_sonogo/ganon_sonogo_scene.h"
#include "scenes/dungeons/ganontikasonogo/ganontikasonogo_scene.h"
#include "scenes/dungeons/ydan_boss/ydan_boss_scene.h"
#include "scenes/dungeons/ddan_boss/ddan_boss_scene.h"
#include "scenes/dungeons/bdan_boss/bdan_boss_scene.h"
#include "scenes/dungeons/moribossroom/moribossroom_scene.h"
#include "scenes/dungeons/FIRE_bs/FIRE_bs_scene.h"
#include "scenes/dungeons/MIZUsin_bs/MIZUsin_bs_scene.h"
#include "scenes/dungeons/jyasinboss/jyasinboss_scene.h"
#include "scenes/dungeons/HAKAdan_bs/HAKAdan_bs_scene.h"
#include "scenes/dungeons/ganon_boss/ganon_boss_scene.h"
#include "scenes/dungeons/ganon_final/ganon_final_scene.h"
#include "scenes/dungeons/ganon_demo/ganon_demo_scene.h"
#include "scenes/dungeons/ganon_tou/ganon_tou_scene.h"

#include "scenes/test_levels/test01/test01_scene.h"
#include "scenes/test_levels/besitu/besitu_scene.h"
#include "scenes/test_levels/depth_test/depth_test_scene.h"
#include "scenes/test_levels/syotes/syotes_scene.h"
#include "scenes/test_levels/syotes2/syotes2_scene.h"
#include "scenes/test_levels/sutaru/sutaru_scene.h"
#include "scenes/test_levels/sasatest/sasatest_scene.h"
#include "scenes/test_levels/testroom/testroom_scene.h"

#include "overlays/actors/ovl_Bg_Dodoago/z_bg_dodoago.h"
#include "z_scene_table_assets.h"
#include "def/code_800FD970.h"
#include "def/coss.h"
#include "def/graph.h"
#include "def/sinf.h"
#include "def/sys_matrix.h"
#include "def/z_actor.h"
#include "def/z_common_data.h"
#include "def/z_kankyo.h"
#include "def/z_lib.h"
#include "def/z_play.h"
#include "def/z_quake.h"
#include "def/z_rcp.h"
#include "def/z_scene_table.h"
#include "def/z_view.h"








#define ENTRANCE(scene, spawn, continueBgm, displayTitleCard, fadeIn, fadeOut)                                     \
    {                                                                                                              \
        scene, spawn,                                                                                              \
            ((continueBgm & 1) << 15) | ((displayTitleCard & 1) << 14) | ((fadeIn & 0x7F) << 7) | (fadeOut & 0x7F) \
    }

EntranceInfo gEntranceTable[] = {
    ENTRANCE(0x00, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x00, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x00, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x00, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x01, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x01, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x01, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x01, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x0B, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x0B, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x0B, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x0B, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x14, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x14, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x14, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x14, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x05, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x05, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x05, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x05, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x6E, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x6E, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x6E, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x6E, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x6C, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x6C, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x6C, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x6C, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x68, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x68, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x68, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x68, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x69, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x69, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x69, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x69, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x6D, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x6D, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x6D, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x6D, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x02, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x02, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x02, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x02, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x02, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x41, 0x00, 0, 1, 0x02, 0x26),
    ENTRANCE(0x41, 0x00, 0, 1, 0x02, 0x26), ENTRANCE(0x41, 0x00, 0, 1, 0x02, 0x26),
    ENTRANCE(0x41, 0x00, 0, 1, 0x02, 0x26), ENTRANCE(0x41, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x41, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x1B, 0x00, 1, 1, 0x03, 0x03),
    ENTRANCE(0x1C, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x1D, 0x00, 1, 1, 0x03, 0x03),
    ENTRANCE(0x1D, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x07, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x07, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x07, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x07, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x42, 0x00, 0, 1, 0x04, 0x20),
    ENTRANCE(0x42, 0x00, 0, 1, 0x04, 0x20), ENTRANCE(0x42, 0x00, 0, 1, 0x04, 0x20),
    ENTRANCE(0x42, 0x00, 0, 1, 0x04, 0x20), ENTRANCE(0x3E, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3E, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x3E, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3E, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x38, 0x00, 0, 1, 0x04, 0x20),
    ENTRANCE(0x38, 0x00, 0, 1, 0x04, 0x20), ENTRANCE(0x38, 0x00, 0, 1, 0x04, 0x20),
    ENTRANCE(0x38, 0x00, 0, 1, 0x04, 0x20), ENTRANCE(0x6A, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x6A, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x6A, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x6A, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x40, 0x00, 0, 1, 0x02, 0x26),
    ENTRANCE(0x40, 0x00, 0, 1, 0x02, 0x26), ENTRANCE(0x40, 0x00, 0, 1, 0x02, 0x26),
    ENTRANCE(0x40, 0x00, 0, 1, 0x02, 0x26), ENTRANCE(0x4C, 0x00, 0, 1, 0x04, 0x20),
    ENTRANCE(0x4C, 0x00, 0, 1, 0x04, 0x20), ENTRANCE(0x4C, 0x00, 0, 1, 0x04, 0x20),
    ENTRANCE(0x4C, 0x00, 0, 1, 0x04, 0x20), ENTRANCE(0x43, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x43, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x43, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x43, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x43, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x43, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x43, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x43, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x43, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x43, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x43, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x43, 0x00, 0, 1, 0x0B, 0x0B), ENTRANCE(0x43, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x43, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x43, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x43, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x10, 0x00, 0, 1, 0x04, 0x20),
    ENTRANCE(0x10, 0x00, 0, 1, 0x04, 0x20), ENTRANCE(0x10, 0x00, 0, 1, 0x04, 0x20),
    ENTRANCE(0x10, 0x00, 0, 1, 0x04, 0x20), ENTRANCE(0x1E, 0x03, 1, 1, 0x03, 0x03),
    ENTRANCE(0x1F, 0x03, 1, 1, 0x02, 0x02), ENTRANCE(0x1E, 0x03, 1, 1, 0x02, 0x02),
    ENTRANCE(0x1F, 0x03, 1, 1, 0x02, 0x02), ENTRANCE(0x44, 0x00, 0, 1, 0x07, 0x07),
    ENTRANCE(0x44, 0x00, 0, 1, 0x07, 0x07), ENTRANCE(0x44, 0x00, 0, 1, 0x07, 0x07),
    ENTRANCE(0x44, 0x00, 0, 1, 0x07, 0x07), ENTRANCE(0x44, 0x00, 0, 1, 0x0D, 0x02),
    ENTRANCE(0x44, 0x00, 0, 1, 0x0D, 0x02), ENTRANCE(0x44, 0x00, 0, 1, 0x03, 0x03),
    ENTRANCE(0x4E, 0x00, 0, 1, 0x04, 0x20), ENTRANCE(0x4E, 0x00, 0, 1, 0x04, 0x20),
    ENTRANCE(0x4E, 0x00, 0, 1, 0x04, 0x20), ENTRANCE(0x4E, 0x00, 0, 1, 0x04, 0x20),
    ENTRANCE(0x6B, 0x00, 0, 1, 0x22, 0x22), ENTRANCE(0x6B, 0x00, 0, 1, 0x22, 0x22),
    ENTRANCE(0x6B, 0x00, 0, 1, 0x22, 0x22), ENTRANCE(0x6B, 0x00, 0, 1, 0x22, 0x22),
    ENTRANCE(0x45, 0x00, 0, 1, 0x22, 0x04), ENTRANCE(0x46, 0x00, 0, 1, 0x22, 0x04),
    ENTRANCE(0x45, 0x00, 0, 1, 0x22, 0x04), ENTRANCE(0x46, 0x00, 0, 1, 0x22, 0x04),
    ENTRANCE(0x4D, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x4D, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x4D, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x4D, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x06, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x06, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x06, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x06, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x06, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x06, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x09, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x09, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x09, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x09, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x09, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x17, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x17, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x17, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x17, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x17, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x17, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x17, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x65, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x65, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x65, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x65, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x08, 0x00, 0, 1, 0x04, 0x04), ENTRANCE(0x08, 0x00, 0, 1, 0x04, 0x04),
    ENTRANCE(0x08, 0x00, 0, 1, 0x04, 0x04), ENTRANCE(0x08, 0x00, 0, 1, 0x04, 0x04),
    ENTRANCE(0x27, 0x00, 0, 1, 0x04, 0x04), ENTRANCE(0x27, 0x00, 0, 1, 0x04, 0x04),
    ENTRANCE(0x27, 0x00, 0, 1, 0x04, 0x04), ENTRANCE(0x27, 0x00, 0, 1, 0x04, 0x04),
    ENTRANCE(0x47, 0x00, 0, 1, 0x03, 0x03), ENTRANCE(0x47, 0x00, 0, 1, 0x03, 0x03),
    ENTRANCE(0x47, 0x00, 0, 1, 0x03, 0x03), ENTRANCE(0x47, 0x00, 0, 1, 0x03, 0x03),
    ENTRANCE(0x47, 0x00, 0, 1, 0x0A, 0x0A), ENTRANCE(0x47, 0x00, 0, 1, 0x02, 0x0A),
    ENTRANCE(0x47, 0x00, 1, 1, 0x0A, 0x0A), ENTRANCE(0x47, 0x00, 0, 1, 0x0B, 0x0B),
    ENTRANCE(0x47, 0x00, 0, 1, 0x03, 0x03), ENTRANCE(0x47, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x47, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x47, 0x00, 0, 1, 0x03, 0x03),
    ENTRANCE(0x47, 0x00, 0, 1, 0x03, 0x03), ENTRANCE(0x1E, 0x00, 1, 1, 0x03, 0x03),
    ENTRANCE(0x1F, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x1E, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x1F, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x20, 0x00, 1, 1, 0x03, 0x03),
    ENTRANCE(0x21, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x22, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x22, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x20, 0x00, 0, 1, 0x08, 0x08),
    ENTRANCE(0x67, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x2C, 0x00, 0, 1, 0x04, 0x20),
    ENTRANCE(0x2C, 0x00, 0, 1, 0x04, 0x20), ENTRANCE(0x2C, 0x00, 0, 1, 0x04, 0x20),
    ENTRANCE(0x2C, 0x00, 0, 1, 0x04, 0x20), ENTRANCE(0x34, 0x00, 0, 1, 0x04, 0x04),
    ENTRANCE(0x34, 0x00, 0, 1, 0x04, 0x04), ENTRANCE(0x34, 0x00, 0, 1, 0x04, 0x04),
    ENTRANCE(0x34, 0x00, 0, 1, 0x04, 0x04), ENTRANCE(0x34, 0x00, 0, 1, 0x04, 0x02),
    ENTRANCE(0x34, 0x00, 0, 1, 0x10, 0x10), ENTRANCE(0x2D, 0x00, 0, 1, 0x04, 0x04),
    ENTRANCE(0x2D, 0x00, 0, 1, 0x04, 0x04), ENTRANCE(0x2D, 0x00, 0, 1, 0x04, 0x04),
    ENTRANCE(0x2D, 0x00, 0, 1, 0x04, 0x04), ENTRANCE(0x01, 0x01, 1, 0, 0x02, 0x02),
    ENTRANCE(0x01, 0x01, 1, 0, 0x02, 0x02), ENTRANCE(0x01, 0x01, 1, 0, 0x02, 0x02),
    ENTRANCE(0x01, 0x01, 1, 0, 0x02, 0x02), ENTRANCE(0x26, 0x00, 0, 1, 0x04, 0x04),
    ENTRANCE(0x26, 0x00, 0, 1, 0x04, 0x04), ENTRANCE(0x26, 0x00, 0, 1, 0x04, 0x04),
    ENTRANCE(0x26, 0x00, 0, 1, 0x04, 0x04), ENTRANCE(0x51, 0x00, 0, 1, 0x03, 0x03),
    ENTRANCE(0x51, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x51, 0x00, 0, 1, 0x03, 0x03),
    ENTRANCE(0x51, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x51, 0x00, 0, 1, 0x04, 0x02),
    ENTRANCE(0x51, 0x00, 0, 1, 0x21, 0x21), ENTRANCE(0x51, 0x00, 0, 1, 0x21, 0x21),
    ENTRANCE(0x51, 0x00, 0, 1, 0x23, 0x23), ENTRANCE(0x51, 0x00, 0, 1, 0x03, 0x03),
    ENTRANCE(0x51, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x51, 0x00, 0, 1, 0x23, 0x23),
    ENTRANCE(0x51, 0x00, 0, 1, 0x03, 0x03), ENTRANCE(0x51, 0x00, 0, 1, 0x29, 0x29),
    ENTRANCE(0x51, 0x00, 1, 1, 0x03, 0x03), ENTRANCE(0x52, 0x00, 0, 1, 0x03, 0x03),
    ENTRANCE(0x52, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x52, 0x00, 0, 1, 0x03, 0x03),
    ENTRANCE(0x52, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x52, 0x00, 0, 1, 0x26, 0x26),
    ENTRANCE(0x52, 0x00, 0, 1, 0x21, 0x21), ENTRANCE(0x52, 0x00, 1, 1, 0x21, 0x21),
    ENTRANCE(0x52, 0x00, 0, 1, 0x21, 0x21), ENTRANCE(0x52, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x53, 0x00, 0, 1, 0x03, 0x03), ENTRANCE(0x53, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x53, 0x00, 0, 1, 0x03, 0x03), ENTRANCE(0x53, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x53, 0x00, 0, 1, 0x04, 0x02), ENTRANCE(0x53, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x54, 0x00, 1, 1, 0x03, 0x03), ENTRANCE(0x54, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x54, 0x00, 1, 1, 0x03, 0x03), ENTRANCE(0x54, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x55, 0x00, 0, 1, 0x03, 0x03), ENTRANCE(0x55, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x55, 0x00, 0, 1, 0x03, 0x03), ENTRANCE(0x55, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x55, 0x00, 1, 1, 0x0A, 0x0A), ENTRANCE(0x55, 0x00, 0, 1, 0x0A, 0x0A),
    ENTRANCE(0x55, 0x00, 1, 1, 0x0A, 0x0A), ENTRANCE(0x55, 0x00, 0, 1, 0x0D, 0x0A),
    ENTRANCE(0x55, 0x00, 0, 1, 0x0A, 0x0A), ENTRANCE(0x55, 0x00, 0, 1, 0x0A, 0x0A),
    ENTRANCE(0x55, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x55, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x55, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x55, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x56, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x56, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x56, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x56, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x56, 0x00, 0, 1, 0x03, 0x03), ENTRANCE(0x56, 0x00, 0, 1, 0x00, 0x00),
    ENTRANCE(0x57, 0x00, 1, 1, 0x03, 0x03), ENTRANCE(0x57, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x57, 0x00, 1, 1, 0x03, 0x03), ENTRANCE(0x57, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x57, 0x00, 0, 1, 0x03, 0x03), ENTRANCE(0x57, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x58, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x58, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x58, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x58, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x58, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x58, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x59, 0x00, 0, 1, 0x03, 0x03), ENTRANCE(0x59, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x59, 0x00, 0, 1, 0x03, 0x03), ENTRANCE(0x59, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x59, 0x00, 0, 1, 0x0D, 0x00), ENTRANCE(0x59, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x59, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x59, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x59, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x5A, 0x00, 0, 1, 0x03, 0x03),
    ENTRANCE(0x5A, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x5A, 0x00, 0, 1, 0x03, 0x03),
    ENTRANCE(0x5A, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x5A, 0x00, 1, 1, 0x0C, 0x0A),
    ENTRANCE(0x5A, 0x00, 1, 1, 0x0A, 0x0A), ENTRANCE(0x5A, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x5B, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x5B, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5B, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x5B, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5B, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x5C, 0x00, 1, 1, 0x0F, 0x0F),
    ENTRANCE(0x5C, 0x00, 1, 1, 0x0F, 0x0F), ENTRANCE(0x5C, 0x00, 1, 1, 0x0F, 0x0F),
    ENTRANCE(0x5C, 0x00, 1, 1, 0x0F, 0x0F), ENTRANCE(0x5C, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x5C, 0x00, 1, 1, 0x0F, 0x0F), ENTRANCE(0x5D, 0x00, 1, 1, 0x03, 0x03),
    ENTRANCE(0x5D, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x5D, 0x00, 1, 1, 0x03, 0x03),
    ENTRANCE(0x5D, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x5D, 0x00, 1, 1, 0x21, 0x21),
    ENTRANCE(0x5D, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x5D, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x5E, 0x00, 1, 1, 0x0E, 0x0E), ENTRANCE(0x5E, 0x00, 1, 1, 0x0E, 0x0E),
    ENTRANCE(0x5E, 0x00, 1, 1, 0x0E, 0x0E), ENTRANCE(0x5E, 0x00, 1, 1, 0x0E, 0x0E),
    ENTRANCE(0x0E, 0x01, 1, 1, 0x02, 0x02), ENTRANCE(0x0E, 0x01, 1, 1, 0x02, 0x02),
    ENTRANCE(0x0E, 0x01, 1, 1, 0x02, 0x02), ENTRANCE(0x0E, 0x01, 1, 1, 0x02, 0x02),
    ENTRANCE(0x5F, 0x00, 0, 1, 0x03, 0x03), ENTRANCE(0x5F, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x64, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x64, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x64, 0x00, 0, 1, 0x04, 0x02), ENTRANCE(0x60, 0x00, 0, 1, 0x03, 0x03),
    ENTRANCE(0x60, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x60, 0x00, 0, 1, 0x03, 0x03),
    ENTRANCE(0x60, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x60, 0x00, 1, 1, 0x0A, 0x0A),
    ENTRANCE(0x60, 0x00, 0, 1, 0x03, 0x03), ENTRANCE(0x60, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x60, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x60, 0x00, 1, 1, 0x03, 0x03),
    ENTRANCE(0x60, 0x00, 1, 1, 0x03, 0x03), ENTRANCE(0x61, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x61, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x61, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x61, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x61, 0x00, 0, 1, 0x03, 0x03),
    ENTRANCE(0x61, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x62, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x62, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x62, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x62, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x62, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x62, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x58, 0x03, 0, 1, 0x00, 0x00),
    ENTRANCE(0x58, 0x03, 0, 1, 0x00, 0x00), ENTRANCE(0x58, 0x03, 0, 1, 0x00, 0x00),
    ENTRANCE(0x58, 0x03, 0, 1, 0x00, 0x00), ENTRANCE(0x63, 0x00, 0, 1, 0x03, 0x03),
    ENTRANCE(0x63, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x63, 0x00, 0, 1, 0x03, 0x03),
    ENTRANCE(0x63, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x63, 0x00, 0, 1, 0x20, 0x20),
    ENTRANCE(0x63, 0x00, 0, 1, 0x2A, 0x2A), ENTRANCE(0x63, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x63, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x63, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x63, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x63, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x63, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x63, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x63, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x04, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x04, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x04, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x04, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x03, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x03, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x03, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x03, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x42, 0x01, 0, 1, 0x04, 0x20),
    ENTRANCE(0x42, 0x01, 0, 1, 0x04, 0x20), ENTRANCE(0x42, 0x01, 0, 1, 0x04, 0x20),
    ENTRANCE(0x42, 0x01, 0, 1, 0x04, 0x20), ENTRANCE(0x23, 0x00, 0, 1, 0x03, 0x03),
    ENTRANCE(0x24, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x25, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x25, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x04, 0x01, 1, 1, 0x02, 0x02),
    ENTRANCE(0x04, 0x01, 1, 1, 0x02, 0x02), ENTRANCE(0x04, 0x01, 1, 1, 0x02, 0x02),
    ENTRANCE(0x04, 0x01, 1, 1, 0x02, 0x02), ENTRANCE(0x0E, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x0E, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x0E, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x0E, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x51, 0x01, 0, 1, 0x03, 0x03),
    ENTRANCE(0x51, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x51, 0x01, 0, 1, 0x03, 0x03),
    ENTRANCE(0x51, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x51, 0x02, 1, 1, 0x03, 0x03),
    ENTRANCE(0x51, 0x02, 1, 1, 0x02, 0x02), ENTRANCE(0x51, 0x02, 1, 1, 0x03, 0x03),
    ENTRANCE(0x51, 0x02, 1, 1, 0x02, 0x02), ENTRANCE(0x51, 0x03, 0, 1, 0x02, 0x02),
    ENTRANCE(0x51, 0x03, 0, 1, 0x02, 0x02), ENTRANCE(0x51, 0x03, 0, 1, 0x02, 0x02),
    ENTRANCE(0x51, 0x03, 0, 1, 0x02, 0x02), ENTRANCE(0x51, 0x04, 1, 1, 0x03, 0x03),
    ENTRANCE(0x51, 0x04, 1, 1, 0x02, 0x02), ENTRANCE(0x51, 0x04, 1, 1, 0x03, 0x03),
    ENTRANCE(0x51, 0x04, 1, 1, 0x02, 0x02), ENTRANCE(0x51, 0x05, 0, 1, 0x03, 0x03),
    ENTRANCE(0x51, 0x05, 0, 1, 0x02, 0x02), ENTRANCE(0x51, 0x05, 0, 1, 0x03, 0x03),
    ENTRANCE(0x51, 0x05, 0, 1, 0x02, 0x02), ENTRANCE(0x52, 0x01, 0, 1, 0x03, 0x03),
    ENTRANCE(0x52, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x52, 0x01, 0, 1, 0x03, 0x03),
    ENTRANCE(0x52, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x52, 0x02, 0, 1, 0x03, 0x03),
    ENTRANCE(0x52, 0x02, 0, 1, 0x02, 0x02), ENTRANCE(0x52, 0x02, 0, 1, 0x03, 0x03),
    ENTRANCE(0x52, 0x02, 0, 1, 0x02, 0x02), ENTRANCE(0x54, 0x01, 1, 1, 0x03, 0x03),
    ENTRANCE(0x54, 0x01, 1, 1, 0x03, 0x03), ENTRANCE(0x54, 0x01, 1, 1, 0x03, 0x03),
    ENTRANCE(0x54, 0x01, 1, 1, 0x03, 0x03), ENTRANCE(0x54, 0x02, 0, 1, 0x03, 0x03),
    ENTRANCE(0x54, 0x02, 0, 1, 0x02, 0x02), ENTRANCE(0x54, 0x02, 0, 1, 0x03, 0x03),
    ENTRANCE(0x54, 0x02, 0, 1, 0x02, 0x02), ENTRANCE(0x58, 0x01, 0, 1, 0x02, 0x02),
    ENTRANCE(0x58, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x58, 0x01, 0, 1, 0x02, 0x02),
    ENTRANCE(0x58, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x5A, 0x01, 0, 1, 0x03, 0x03),
    ENTRANCE(0x5A, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x5A, 0x01, 0, 1, 0x03, 0x03),
    ENTRANCE(0x5A, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x5B, 0x01, 1, 1, 0x02, 0x02),
    ENTRANCE(0x5B, 0x01, 1, 1, 0x02, 0x02), ENTRANCE(0x5B, 0x01, 1, 1, 0x02, 0x02),
    ENTRANCE(0x5B, 0x01, 1, 1, 0x02, 0x02), ENTRANCE(0x5B, 0x02, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5B, 0x02, 0, 1, 0x02, 0x02), ENTRANCE(0x5B, 0x02, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5B, 0x02, 0, 1, 0x02, 0x02), ENTRANCE(0x5B, 0x03, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5B, 0x03, 0, 1, 0x02, 0x02), ENTRANCE(0x5B, 0x03, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5B, 0x03, 0, 1, 0x02, 0x02), ENTRANCE(0x0E, 0x02, 1, 1, 0x02, 0x02),
    ENTRANCE(0x0E, 0x02, 1, 1, 0x02, 0x02), ENTRANCE(0x0E, 0x02, 1, 1, 0x02, 0x02),
    ENTRANCE(0x0E, 0x02, 1, 1, 0x02, 0x02), ENTRANCE(0x60, 0x01, 0, 1, 0x03, 0x03),
    ENTRANCE(0x60, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x60, 0x01, 0, 1, 0x03, 0x03),
    ENTRANCE(0x60, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x60, 0x02, 0, 1, 0x03, 0x03),
    ENTRANCE(0x60, 0x02, 0, 1, 0x02, 0x02), ENTRANCE(0x60, 0x02, 0, 1, 0x03, 0x03),
    ENTRANCE(0x60, 0x02, 0, 1, 0x02, 0x02), ENTRANCE(0x62, 0x01, 0, 1, 0x02, 0x02),
    ENTRANCE(0x62, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x62, 0x01, 0, 1, 0x02, 0x02),
    ENTRANCE(0x62, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x38, 0x01, 0, 1, 0x04, 0x20),
    ENTRANCE(0x38, 0x01, 0, 1, 0x04, 0x20), ENTRANCE(0x38, 0x01, 0, 1, 0x04, 0x20),
    ENTRANCE(0x38, 0x01, 0, 1, 0x04, 0x20), ENTRANCE(0x1A, 0x05, 1, 1, 0x02, 0x02),
    ENTRANCE(0x1A, 0x05, 1, 1, 0x02, 0x02), ENTRANCE(0x1A, 0x05, 1, 1, 0x02, 0x02),
    ENTRANCE(0x1A, 0x05, 1, 1, 0x02, 0x02), ENTRANCE(0x20, 0x08, 0, 1, 0x04, 0x02),
    ENTRANCE(0x21, 0x08, 0, 1, 0x04, 0x02), ENTRANCE(0x22, 0x08, 0, 1, 0x04, 0x02),
    ENTRANCE(0x22, 0x08, 0, 1, 0x04, 0x02), ENTRANCE(0x20, 0x09, 0, 1, 0x04, 0x02),
    ENTRANCE(0x21, 0x09, 0, 1, 0x04, 0x02), ENTRANCE(0x22, 0x09, 0, 1, 0x04, 0x02),
    ENTRANCE(0x22, 0x09, 0, 1, 0x04, 0x02), ENTRANCE(0x20, 0x0A, 0, 1, 0x04, 0x02),
    ENTRANCE(0x21, 0x0A, 0, 1, 0x04, 0x02), ENTRANCE(0x22, 0x0A, 0, 1, 0x04, 0x02),
    ENTRANCE(0x22, 0x0A, 0, 1, 0x04, 0x02), ENTRANCE(0x54, 0x03, 1, 1, 0x03, 0x03),
    ENTRANCE(0x54, 0x03, 1, 1, 0x02, 0x02), ENTRANCE(0x54, 0x03, 1, 1, 0x03, 0x03),
    ENTRANCE(0x54, 0x03, 1, 1, 0x02, 0x02), ENTRANCE(0x54, 0x04, 0, 1, 0x2C, 0x2C),
    ENTRANCE(0x54, 0x04, 0, 1, 0x2C, 0x2C), ENTRANCE(0x54, 0x04, 0, 1, 0x2C, 0x2C),
    ENTRANCE(0x54, 0x04, 0, 1, 0x2C, 0x2C), ENTRANCE(0x5C, 0x01, 0, 1, 0x03, 0x03),
    ENTRANCE(0x5C, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x5C, 0x01, 0, 1, 0x03, 0x03),
    ENTRANCE(0x5C, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x5C, 0x02, 0, 0, 0x03, 0x03),
    ENTRANCE(0x5C, 0x02, 0, 0, 0x02, 0x02), ENTRANCE(0x5C, 0x02, 0, 0, 0x03, 0x03),
    ENTRANCE(0x5C, 0x02, 0, 0, 0x02, 0x02), ENTRANCE(0x5C, 0x03, 0, 0, 0x03, 0x03),
    ENTRANCE(0x5C, 0x03, 0, 0, 0x02, 0x02), ENTRANCE(0x5C, 0x03, 0, 0, 0x03, 0x03),
    ENTRANCE(0x5C, 0x03, 0, 0, 0x02, 0x02), ENTRANCE(0x5C, 0x04, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5C, 0x04, 0, 1, 0x02, 0x02), ENTRANCE(0x5C, 0x04, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5C, 0x04, 0, 1, 0x02, 0x02), ENTRANCE(0x5C, 0x05, 0, 1, 0x03, 0x03),
    ENTRANCE(0x5C, 0x05, 0, 1, 0x02, 0x02), ENTRANCE(0x5C, 0x05, 0, 1, 0x03, 0x03),
    ENTRANCE(0x5C, 0x05, 0, 1, 0x02, 0x02), ENTRANCE(0x5C, 0x06, 1, 0, 0x0F, 0x0F),
    ENTRANCE(0x5C, 0x06, 1, 0, 0x0F, 0x0F), ENTRANCE(0x5C, 0x06, 1, 0, 0x0F, 0x0F),
    ENTRANCE(0x5C, 0x06, 1, 0, 0x0F, 0x0F), ENTRANCE(0x51, 0x06, 0, 1, 0x03, 0x03),
    ENTRANCE(0x51, 0x06, 0, 1, 0x02, 0x02), ENTRANCE(0x51, 0x06, 0, 1, 0x03, 0x03),
    ENTRANCE(0x51, 0x06, 0, 1, 0x02, 0x02), ENTRANCE(0x51, 0x07, 0, 1, 0x03, 0x03),
    ENTRANCE(0x51, 0x07, 0, 1, 0x02, 0x02), ENTRANCE(0x51, 0x07, 0, 1, 0x03, 0x03),
    ENTRANCE(0x51, 0x07, 0, 1, 0x02, 0x02), ENTRANCE(0x52, 0x03, 0, 1, 0x04, 0x02),
    ENTRANCE(0x52, 0x03, 0, 1, 0x04, 0x02), ENTRANCE(0x52, 0x03, 0, 1, 0x04, 0x02),
    ENTRANCE(0x52, 0x03, 0, 1, 0x04, 0x02), ENTRANCE(0x53, 0x01, 0, 1, 0x02, 0x02),
    ENTRANCE(0x53, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x53, 0x01, 0, 1, 0x02, 0x02),
    ENTRANCE(0x53, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x55, 0x01, 0, 1, 0x03, 0x03),
    ENTRANCE(0x55, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x55, 0x01, 0, 1, 0x03, 0x03),
    ENTRANCE(0x55, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x55, 0x02, 0, 1, 0x02, 0x02),
    ENTRANCE(0x55, 0x02, 0, 1, 0x02, 0x02), ENTRANCE(0x55, 0x02, 0, 1, 0x02, 0x02),
    ENTRANCE(0x55, 0x02, 0, 1, 0x02, 0x02), ENTRANCE(0x55, 0x03, 0, 1, 0x04, 0x04),
    ENTRANCE(0x55, 0x03, 0, 1, 0x04, 0x04), ENTRANCE(0x55, 0x03, 0, 1, 0x04, 0x04),
    ENTRANCE(0x55, 0x03, 0, 1, 0x04, 0x04), ENTRANCE(0x56, 0x01, 0, 1, 0x12, 0x12),
    ENTRANCE(0x56, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x56, 0x01, 0, 1, 0x12, 0x12),
    ENTRANCE(0x56, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x57, 0x01, 0, 1, 0x03, 0x03),
    ENTRANCE(0x57, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x57, 0x01, 0, 1, 0x03, 0x03),
    ENTRANCE(0x57, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x57, 0x02, 0, 1, 0x13, 0x13),
    ENTRANCE(0x57, 0x02, 0, 1, 0x02, 0x02), ENTRANCE(0x57, 0x02, 0, 1, 0x13, 0x13),
    ENTRANCE(0x57, 0x02, 0, 1, 0x02, 0x02), ENTRANCE(0x59, 0x01, 0, 1, 0x02, 0x02),
    ENTRANCE(0x59, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x59, 0x01, 0, 1, 0x02, 0x02),
    ENTRANCE(0x59, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x59, 0x02, 0, 1, 0x03, 0x03),
    ENTRANCE(0x59, 0x02, 0, 1, 0x02, 0x02), ENTRANCE(0x59, 0x02, 0, 1, 0x03, 0x03),
    ENTRANCE(0x59, 0x02, 0, 1, 0x02, 0x02), ENTRANCE(0x5A, 0x02, 1, 1, 0x03, 0x03),
    ENTRANCE(0x5A, 0x02, 1, 1, 0x02, 0x02), ENTRANCE(0x5A, 0x02, 1, 1, 0x03, 0x03),
    ENTRANCE(0x5A, 0x02, 1, 1, 0x02, 0x02), ENTRANCE(0x5A, 0x03, 1, 1, 0x03, 0x03),
    ENTRANCE(0x5A, 0x03, 1, 1, 0x02, 0x02), ENTRANCE(0x5A, 0x03, 1, 1, 0x03, 0x03),
    ENTRANCE(0x5A, 0x03, 1, 1, 0x02, 0x02), ENTRANCE(0x5D, 0x01, 0, 1, 0x03, 0x03),
    ENTRANCE(0x5D, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x5D, 0x01, 0, 1, 0x03, 0x03),
    ENTRANCE(0x5D, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x5D, 0x02, 0, 1, 0x03, 0x03),
    ENTRANCE(0x5D, 0x02, 0, 1, 0x02, 0x02), ENTRANCE(0x5D, 0x02, 0, 1, 0x03, 0x03),
    ENTRANCE(0x5D, 0x02, 0, 1, 0x02, 0x02), ENTRANCE(0x5D, 0x03, 0, 1, 0x03, 0x03),
    ENTRANCE(0x5D, 0x03, 0, 1, 0x02, 0x02), ENTRANCE(0x5D, 0x03, 0, 1, 0x03, 0x03),
    ENTRANCE(0x5D, 0x03, 0, 1, 0x02, 0x02), ENTRANCE(0x5F, 0x01, 0, 1, 0x03, 0x03),
    ENTRANCE(0x5F, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x64, 0x01, 0, 1, 0x05, 0x05),
    ENTRANCE(0x64, 0x01, 0, 1, 0x05, 0x05), ENTRANCE(0x5F, 0x01, 0, 1, 0x00, 0x00),
    ENTRANCE(0x60, 0x03, 0, 1, 0x03, 0x03), ENTRANCE(0x60, 0x03, 0, 1, 0x02, 0x02),
    ENTRANCE(0x60, 0x03, 0, 1, 0x03, 0x03), ENTRANCE(0x60, 0x03, 0, 1, 0x02, 0x02),
    ENTRANCE(0x61, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x61, 0x01, 0, 1, 0x02, 0x02),
    ENTRANCE(0x61, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x61, 0x01, 0, 1, 0x02, 0x02),
    ENTRANCE(0x61, 0x02, 0, 1, 0x02, 0x02), ENTRANCE(0x61, 0x02, 0, 1, 0x02, 0x02),
    ENTRANCE(0x61, 0x02, 0, 1, 0x02, 0x02), ENTRANCE(0x61, 0x02, 0, 1, 0x02, 0x02),
    ENTRANCE(0x03, 0x01, 1, 1, 0x02, 0x02), ENTRANCE(0x03, 0x01, 1, 1, 0x02, 0x02),
    ENTRANCE(0x03, 0x01, 1, 1, 0x02, 0x02), ENTRANCE(0x03, 0x01, 1, 1, 0x02, 0x02),
    ENTRANCE(0x00, 0x01, 1, 0, 0x02, 0x02), ENTRANCE(0x00, 0x01, 1, 0, 0x02, 0x02),
    ENTRANCE(0x00, 0x01, 1, 0, 0x02, 0x02), ENTRANCE(0x00, 0x01, 1, 0, 0x02, 0x02),
    ENTRANCE(0x0E, 0x03, 1, 1, 0x02, 0x02), ENTRANCE(0x0E, 0x03, 1, 1, 0x02, 0x02),
    ENTRANCE(0x0E, 0x03, 1, 1, 0x02, 0x02), ENTRANCE(0x0E, 0x03, 1, 1, 0x02, 0x02),
    ENTRANCE(0x20, 0x01, 0, 1, 0x03, 0x03), ENTRANCE(0x21, 0x01, 0, 1, 0x02, 0x02),
    ENTRANCE(0x22, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x22, 0x01, 0, 1, 0x02, 0x02),
    ENTRANCE(0x20, 0x02, 0, 1, 0x03, 0x03), ENTRANCE(0x21, 0x02, 0, 1, 0x02, 0x02),
    ENTRANCE(0x22, 0x02, 0, 1, 0x02, 0x02), ENTRANCE(0x22, 0x02, 0, 1, 0x02, 0x02),
    ENTRANCE(0x20, 0x03, 1, 1, 0x03, 0x03), ENTRANCE(0x21, 0x03, 1, 1, 0x02, 0x02),
    ENTRANCE(0x22, 0x03, 1, 1, 0x02, 0x02), ENTRANCE(0x22, 0x03, 1, 1, 0x02, 0x02),
    ENTRANCE(0x55, 0x04, 0, 0, 0x04, 0x04), ENTRANCE(0x55, 0x04, 0, 0, 0x04, 0x04),
    ENTRANCE(0x55, 0x04, 0, 0, 0x04, 0x04), ENTRANCE(0x55, 0x04, 0, 0, 0x04, 0x04),
    ENTRANCE(0x55, 0x05, 0, 0, 0x04, 0x04), ENTRANCE(0x55, 0x05, 0, 0, 0x04, 0x04),
    ENTRANCE(0x55, 0x05, 0, 0, 0x04, 0x04), ENTRANCE(0x55, 0x05, 0, 0, 0x04, 0x04),
    ENTRANCE(0x1B, 0x02, 0, 0, 0x02, 0x02), ENTRANCE(0x1C, 0x02, 0, 0, 0x02, 0x02),
    ENTRANCE(0x1D, 0x02, 0, 0, 0x02, 0x02), ENTRANCE(0x1D, 0x02, 0, 0, 0x02, 0x02),
    ENTRANCE(0x34, 0x01, 0, 1, 0x04, 0x04), ENTRANCE(0x34, 0x01, 0, 1, 0x04, 0x04),
    ENTRANCE(0x34, 0x01, 0, 1, 0x04, 0x04), ENTRANCE(0x34, 0x01, 0, 1, 0x04, 0x04),
    ENTRANCE(0x1B, 0x01, 0, 1, 0x03, 0x03), ENTRANCE(0x1C, 0x01, 0, 1, 0x02, 0x02),
    ENTRANCE(0x1D, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x1D, 0x01, 0, 1, 0x02, 0x02),
    ENTRANCE(0x51, 0x08, 1, 1, 0x03, 0x03), ENTRANCE(0x51, 0x08, 1, 1, 0x02, 0x02),
    ENTRANCE(0x51, 0x08, 1, 1, 0x03, 0x03), ENTRANCE(0x51, 0x08, 1, 1, 0x02, 0x02),
    ENTRANCE(0x51, 0x09, 0, 1, 0x03, 0x03), ENTRANCE(0x51, 0x09, 0, 1, 0x03, 0x03),
    ENTRANCE(0x51, 0x09, 0, 1, 0x03, 0x03), ENTRANCE(0x51, 0x09, 0, 1, 0x03, 0x03),
    ENTRANCE(0x51, 0x0A, 0, 1, 0x03, 0x03), ENTRANCE(0x51, 0x0A, 0, 1, 0x03, 0x03),
    ENTRANCE(0x51, 0x0A, 0, 1, 0x03, 0x03), ENTRANCE(0x51, 0x0A, 0, 1, 0x03, 0x03),
    ENTRANCE(0x55, 0x06, 0, 1, 0x02, 0x02), ENTRANCE(0x55, 0x06, 0, 1, 0x02, 0x02),
    ENTRANCE(0x55, 0x06, 0, 1, 0x02, 0x02), ENTRANCE(0x55, 0x06, 0, 1, 0x02, 0x02),
    ENTRANCE(0x51, 0x0B, 0, 1, 0x05, 0x05), ENTRANCE(0x51, 0x0B, 0, 1, 0x04, 0x02),
    ENTRANCE(0x51, 0x0B, 0, 1, 0x05, 0x05), ENTRANCE(0x51, 0x0B, 0, 1, 0x04, 0x02),
    ENTRANCE(0x51, 0x0C, 0, 1, 0x05, 0x05), ENTRANCE(0x51, 0x0C, 0, 1, 0x04, 0x02),
    ENTRANCE(0x51, 0x0C, 0, 1, 0x05, 0x05), ENTRANCE(0x51, 0x0C, 0, 1, 0x04, 0x02),
    ENTRANCE(0x51, 0x0D, 0, 1, 0x05, 0x05), ENTRANCE(0x51, 0x0D, 0, 1, 0x04, 0x02),
    ENTRANCE(0x51, 0x0D, 0, 1, 0x05, 0x05), ENTRANCE(0x51, 0x0D, 0, 1, 0x04, 0x02),
    ENTRANCE(0x45, 0x01, 0, 1, 0x03, 0x03), ENTRANCE(0x46, 0x01, 0, 1, 0x02, 0x02),
    ENTRANCE(0x45, 0x01, 0, 1, 0x03, 0x03), ENTRANCE(0x46, 0x01, 0, 1, 0x02, 0x02),
    ENTRANCE(0x1E, 0x01, 1, 1, 0x03, 0x03), ENTRANCE(0x1F, 0x01, 1, 1, 0x02, 0x02),
    ENTRANCE(0x1E, 0x01, 1, 1, 0x02, 0x02), ENTRANCE(0x1F, 0x01, 1, 1, 0x02, 0x02),
    ENTRANCE(0x20, 0x04, 1, 1, 0x03, 0x03), ENTRANCE(0x21, 0x04, 1, 1, 0x02, 0x02),
    ENTRANCE(0x22, 0x04, 1, 1, 0x02, 0x02), ENTRANCE(0x22, 0x04, 1, 1, 0x02, 0x02),
    ENTRANCE(0x20, 0x05, 0, 1, 0x04, 0x02), ENTRANCE(0x21, 0x05, 0, 1, 0x04, 0x02),
    ENTRANCE(0x22, 0x05, 0, 1, 0x04, 0x02), ENTRANCE(0x22, 0x05, 0, 1, 0x04, 0x02),
    ENTRANCE(0x52, 0x04, 0, 1, 0x02, 0x02), ENTRANCE(0x52, 0x04, 0, 1, 0x02, 0x02),
    ENTRANCE(0x52, 0x04, 0, 1, 0x02, 0x02), ENTRANCE(0x52, 0x04, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5D, 0x04, 0, 1, 0x03, 0x03), ENTRANCE(0x5D, 0x04, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5D, 0x04, 0, 1, 0x03, 0x03), ENTRANCE(0x5D, 0x04, 0, 1, 0x02, 0x02),
    ENTRANCE(0x63, 0x01, 0, 0, 0x03, 0x03), ENTRANCE(0x63, 0x01, 0, 0, 0x02, 0x02),
    ENTRANCE(0x63, 0x01, 0, 0, 0x03, 0x03), ENTRANCE(0x63, 0x01, 0, 0, 0x02, 0x02),
    ENTRANCE(0x07, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x07, 0x01, 0, 1, 0x02, 0x02),
    ENTRANCE(0x07, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x07, 0x01, 0, 1, 0x02, 0x02),
    ENTRANCE(0x07, 0x02, 1, 1, 0x02, 0x02), ENTRANCE(0x07, 0x02, 1, 1, 0x02, 0x02),
    ENTRANCE(0x07, 0x02, 1, 1, 0x02, 0x02), ENTRANCE(0x07, 0x02, 1, 1, 0x02, 0x02),
    ENTRANCE(0x5D, 0x05, 0, 1, 0x03, 0x03), ENTRANCE(0x5D, 0x05, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5D, 0x05, 0, 1, 0x03, 0x03), ENTRANCE(0x5D, 0x05, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5D, 0x06, 0, 1, 0x03, 0x03), ENTRANCE(0x5D, 0x06, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5D, 0x06, 0, 1, 0x03, 0x03), ENTRANCE(0x5D, 0x06, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5D, 0x07, 0, 1, 0x03, 0x03), ENTRANCE(0x5D, 0x07, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5D, 0x07, 0, 1, 0x03, 0x03), ENTRANCE(0x5D, 0x07, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5D, 0x08, 0, 1, 0x03, 0x03), ENTRANCE(0x5D, 0x08, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5D, 0x08, 0, 1, 0x03, 0x03), ENTRANCE(0x5D, 0x08, 0, 1, 0x02, 0x02),
    ENTRANCE(0x43, 0x02, 0, 1, 0x0A, 0x0A), ENTRANCE(0x43, 0x02, 0, 1, 0x0A, 0x0A),
    ENTRANCE(0x43, 0x02, 0, 1, 0x0A, 0x0A), ENTRANCE(0x43, 0x02, 0, 1, 0x0A, 0x0A),
    ENTRANCE(0x44, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x44, 0x01, 0, 1, 0x02, 0x02),
    ENTRANCE(0x44, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x44, 0x01, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5D, 0x09, 0, 1, 0x03, 0x03), ENTRANCE(0x5D, 0x09, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5D, 0x09, 0, 1, 0x03, 0x03), ENTRANCE(0x5D, 0x09, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5D, 0x0A, 0, 1, 0x03, 0x03), ENTRANCE(0x5D, 0x0A, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5D, 0x0A, 0, 1, 0x03, 0x03), ENTRANCE(0x5D, 0x0A, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5D, 0x0B, 0, 1, 0x03, 0x03), ENTRANCE(0x5D, 0x0B, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5D, 0x0B, 0, 1, 0x03, 0x03), ENTRANCE(0x5D, 0x0B, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5D, 0x0C, 0, 1, 0x03, 0x03), ENTRANCE(0x5D, 0x0C, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5D, 0x0C, 0, 1, 0x03, 0x03), ENTRANCE(0x5D, 0x0C, 0, 1, 0x02, 0x02),
    ENTRANCE(0x63, 0x02, 0, 1, 0x03, 0x03), ENTRANCE(0x63, 0x02, 0, 1, 0x02, 0x02),
    ENTRANCE(0x63, 0x02, 0, 1, 0x03, 0x03), ENTRANCE(0x63, 0x02, 0, 1, 0x02, 0x02),
    ENTRANCE(0x63, 0x03, 0, 1, 0x03, 0x03), ENTRANCE(0x63, 0x03, 0, 1, 0x02, 0x02),
    ENTRANCE(0x63, 0x03, 0, 1, 0x03, 0x03), ENTRANCE(0x63, 0x03, 0, 1, 0x02, 0x02),
    ENTRANCE(0x42, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x42, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x42, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x42, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x56, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x47, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x42, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x42, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x42, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x42, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x42, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x06, 0x01, 1, 1, 0x02, 0x02),
    ENTRANCE(0x06, 0x01, 1, 1, 0x02, 0x02), ENTRANCE(0x06, 0x01, 1, 1, 0x02, 0x02),
    ENTRANCE(0x06, 0x01, 1, 1, 0x02, 0x02), ENTRANCE(0x36, 0x00, 0, 1, 0x04, 0x20),
    ENTRANCE(0x36, 0x00, 0, 1, 0x04, 0x20), ENTRANCE(0x36, 0x00, 0, 1, 0x04, 0x20),
    ENTRANCE(0x36, 0x00, 0, 1, 0x04, 0x20), ENTRANCE(0x2A, 0x00, 0, 1, 0x04, 0x20),
    ENTRANCE(0x2A, 0x00, 0, 1, 0x04, 0x20), ENTRANCE(0x2A, 0x00, 0, 1, 0x04, 0x20),
    ENTRANCE(0x2A, 0x00, 0, 1, 0x04, 0x20), ENTRANCE(0x13, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x13, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x13, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x13, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x15, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x15, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x15, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x15, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x57, 0x06, 0, 1, 0x04, 0x02),
    ENTRANCE(0x57, 0x06, 0, 1, 0x04, 0x02), ENTRANCE(0x57, 0x06, 0, 1, 0x04, 0x02),
    ENTRANCE(0x57, 0x06, 0, 1, 0x04, 0x02), ENTRANCE(0x3A, 0x00, 0, 1, 0x02, 0x20),
    ENTRANCE(0x3A, 0x00, 0, 1, 0x02, 0x20), ENTRANCE(0x3A, 0x00, 0, 1, 0x02, 0x20),
    ENTRANCE(0x3A, 0x00, 0, 1, 0x02, 0x20), ENTRANCE(0x51, 0x0E, 1, 1, 0x03, 0x03),
    ENTRANCE(0x51, 0x0E, 1, 1, 0x03, 0x03), ENTRANCE(0x51, 0x0E, 1, 1, 0x03, 0x03),
    ENTRANCE(0x51, 0x0E, 1, 1, 0x03, 0x03), ENTRANCE(0x3B, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3B, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x3B, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3B, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x3B, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3B, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x3B, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3F, 0x00, 0, 1, 0x02, 0x26), ENTRANCE(0x3F, 0x00, 0, 1, 0x02, 0x26),
    ENTRANCE(0x3F, 0x00, 0, 1, 0x02, 0x26), ENTRANCE(0x3F, 0x00, 0, 1, 0x02, 0x26),
    ENTRANCE(0x43, 0x03, 0, 1, 0x02, 0x02), ENTRANCE(0x43, 0x03, 0, 1, 0x02, 0x02),
    ENTRANCE(0x43, 0x03, 0, 1, 0x02, 0x02), ENTRANCE(0x43, 0x03, 0, 1, 0x02, 0x02),
    ENTRANCE(0x43, 0x04, 0, 1, 0x02, 0x02), ENTRANCE(0x43, 0x04, 0, 1, 0x02, 0x02),
    ENTRANCE(0x43, 0x04, 0, 1, 0x02, 0x02), ENTRANCE(0x43, 0x04, 0, 1, 0x02, 0x02),
    ENTRANCE(0x58, 0x04, 0, 1, 0x2C, 0x2C), ENTRANCE(0x58, 0x04, 0, 1, 0x2C, 0x2C),
    ENTRANCE(0x58, 0x04, 0, 1, 0x2C, 0x2C), ENTRANCE(0x58, 0x04, 0, 1, 0x2C, 0x2C),
    ENTRANCE(0x1A, 0x02, 1, 1, 0x02, 0x02), ENTRANCE(0x1A, 0x02, 1, 1, 0x02, 0x02),
    ENTRANCE(0x1A, 0x02, 1, 1, 0x02, 0x02), ENTRANCE(0x1A, 0x02, 1, 1, 0x02, 0x02),
    ENTRANCE(0x1A, 0x03, 1, 1, 0x02, 0x02), ENTRANCE(0x1A, 0x03, 1, 1, 0x02, 0x02),
    ENTRANCE(0x1A, 0x03, 1, 1, 0x02, 0x02), ENTRANCE(0x1A, 0x03, 1, 1, 0x02, 0x02),
    ENTRANCE(0x1A, 0x04, 1, 1, 0x02, 0x02), ENTRANCE(0x1A, 0x04, 1, 1, 0x02, 0x02),
    ENTRANCE(0x1A, 0x04, 1, 1, 0x02, 0x02), ENTRANCE(0x1A, 0x04, 1, 1, 0x02, 0x02),
    ENTRANCE(0x55, 0x07, 0, 0, 0x04, 0x04), ENTRANCE(0x55, 0x07, 0, 0, 0x04, 0x04),
    ENTRANCE(0x55, 0x07, 0, 0, 0x04, 0x04), ENTRANCE(0x55, 0x07, 0, 0, 0x04, 0x04),
    ENTRANCE(0x55, 0x08, 0, 0, 0x04, 0x04), ENTRANCE(0x55, 0x08, 0, 0, 0x04, 0x04),
    ENTRANCE(0x55, 0x08, 0, 0, 0x04, 0x04), ENTRANCE(0x55, 0x08, 0, 0, 0x04, 0x04),
    ENTRANCE(0x5F, 0x02, 0, 1, 0x02, 0x02), ENTRANCE(0x5F, 0x02, 0, 1, 0x02, 0x02),
    ENTRANCE(0x64, 0x02, 0, 1, 0x02, 0x02), ENTRANCE(0x64, 0x02, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5F, 0x02, 0, 1, 0x00, 0x00), ENTRANCE(0x52, 0x05, 0, 1, 0x04, 0x02),
    ENTRANCE(0x52, 0x05, 0, 1, 0x04, 0x02), ENTRANCE(0x52, 0x05, 0, 1, 0x04, 0x02),
    ENTRANCE(0x52, 0x05, 0, 1, 0x04, 0x02), ENTRANCE(0x52, 0x06, 0, 1, 0x04, 0x02),
    ENTRANCE(0x52, 0x06, 0, 1, 0x04, 0x02), ENTRANCE(0x52, 0x06, 0, 1, 0x04, 0x02),
    ENTRANCE(0x52, 0x06, 0, 1, 0x04, 0x02), ENTRANCE(0x52, 0x07, 0, 1, 0x04, 0x02),
    ENTRANCE(0x52, 0x07, 0, 1, 0x04, 0x02), ENTRANCE(0x52, 0x07, 0, 1, 0x04, 0x02),
    ENTRANCE(0x52, 0x07, 0, 1, 0x04, 0x02), ENTRANCE(0x52, 0x08, 0, 1, 0x04, 0x02),
    ENTRANCE(0x52, 0x08, 0, 1, 0x04, 0x02), ENTRANCE(0x52, 0x08, 0, 1, 0x04, 0x02),
    ENTRANCE(0x52, 0x08, 0, 1, 0x04, 0x02), ENTRANCE(0x53, 0x02, 0, 1, 0x04, 0x02),
    ENTRANCE(0x53, 0x02, 0, 1, 0x04, 0x02), ENTRANCE(0x53, 0x02, 0, 1, 0x04, 0x02),
    ENTRANCE(0x53, 0x02, 0, 1, 0x04, 0x02), ENTRANCE(0x53, 0x03, 0, 1, 0x03, 0x03),
    ENTRANCE(0x53, 0x03, 0, 1, 0x03, 0x03), ENTRANCE(0x53, 0x03, 0, 1, 0x03, 0x03),
    ENTRANCE(0x53, 0x03, 0, 1, 0x03, 0x03), ENTRANCE(0x53, 0x04, 0, 1, 0x03, 0x03),
    ENTRANCE(0x53, 0x04, 0, 1, 0x03, 0x03), ENTRANCE(0x53, 0x04, 0, 1, 0x03, 0x03),
    ENTRANCE(0x53, 0x04, 0, 1, 0x03, 0x03), ENTRANCE(0x53, 0x05, 0, 1, 0x03, 0x03),
    ENTRANCE(0x53, 0x05, 0, 1, 0x03, 0x03), ENTRANCE(0x53, 0x05, 0, 1, 0x03, 0x03),
    ENTRANCE(0x53, 0x05, 0, 1, 0x03, 0x03), ENTRANCE(0x5E, 0x01, 1, 1, 0x0E, 0x0E),
    ENTRANCE(0x5E, 0x01, 1, 1, 0x0E, 0x0E), ENTRANCE(0x5E, 0x01, 1, 1, 0x0E, 0x0E),
    ENTRANCE(0x5E, 0x01, 1, 1, 0x0E, 0x0E), ENTRANCE(0x5E, 0x02, 0, 1, 0x0E, 0x0E),
    ENTRANCE(0x5E, 0x02, 0, 1, 0x0E, 0x0E), ENTRANCE(0x5E, 0x02, 0, 1, 0x0E, 0x0E),
    ENTRANCE(0x5E, 0x02, 0, 1, 0x0E, 0x0E), ENTRANCE(0x3C, 0x00, 0, 1, 0x03, 0x03),
    ENTRANCE(0x3C, 0x00, 0, 1, 0x03, 0x03), ENTRANCE(0x3C, 0x00, 0, 1, 0x03, 0x03),
    ENTRANCE(0x3C, 0x00, 0, 1, 0x03, 0x03), ENTRANCE(0x3D, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3D, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x3D, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3D, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x3D, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3D, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x3D, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x63, 0x04, 0, 1, 0x04, 0x02), ENTRANCE(0x63, 0x04, 0, 1, 0x04, 0x02),
    ENTRANCE(0x63, 0x04, 0, 1, 0x04, 0x02), ENTRANCE(0x63, 0x04, 0, 1, 0x04, 0x02),
    ENTRANCE(0x2E, 0x00, 0, 1, 0x04, 0x20), ENTRANCE(0x2E, 0x00, 0, 1, 0x04, 0x20),
    ENTRANCE(0x2E, 0x00, 0, 1, 0x04, 0x20), ENTRANCE(0x2E, 0x00, 0, 1, 0x04, 0x20),
    ENTRANCE(0x2F, 0x00, 0, 1, 0x04, 0x04), ENTRANCE(0x2F, 0x00, 0, 1, 0x04, 0x04),
    ENTRANCE(0x2F, 0x00, 0, 1, 0x04, 0x04), ENTRANCE(0x2F, 0x00, 0, 1, 0x04, 0x04),
    ENTRANCE(0x30, 0x00, 0, 0, 0x04, 0x20), ENTRANCE(0x30, 0x00, 0, 0, 0x04, 0x20),
    ENTRANCE(0x30, 0x00, 0, 1, 0x04, 0x20), ENTRANCE(0x30, 0x00, 0, 1, 0x04, 0x20),
    ENTRANCE(0x31, 0x00, 0, 1, 0x04, 0x20), ENTRANCE(0x31, 0x00, 0, 1, 0x04, 0x20),
    ENTRANCE(0x31, 0x00, 0, 1, 0x04, 0x20), ENTRANCE(0x31, 0x00, 0, 1, 0x04, 0x20),
    ENTRANCE(0x1E, 0x04, 0, 1, 0x04, 0x02), ENTRANCE(0x1F, 0x04, 0, 1, 0x04, 0x02),
    ENTRANCE(0x1E, 0x04, 0, 1, 0x04, 0x02), ENTRANCE(0x1F, 0x04, 0, 1, 0x04, 0x02),
    ENTRANCE(0x32, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x32, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x32, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x32, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x59, 0x05, 0, 1, 0x03, 0x03), ENTRANCE(0x59, 0x05, 0, 1, 0x03, 0x03),
    ENTRANCE(0x59, 0x05, 0, 1, 0x03, 0x03), ENTRANCE(0x59, 0x05, 0, 1, 0x03, 0x03),
    ENTRANCE(0x35, 0x00, 0, 1, 0x04, 0x02), ENTRANCE(0x35, 0x00, 0, 1, 0x04, 0x02),
    ENTRANCE(0x35, 0x00, 0, 1, 0x04, 0x02), ENTRANCE(0x35, 0x00, 0, 1, 0x04, 0x02),
    ENTRANCE(0x37, 0x00, 0, 1, 0x04, 0x20), ENTRANCE(0x37, 0x00, 0, 1, 0x04, 0x20),
    ENTRANCE(0x37, 0x00, 0, 1, 0x04, 0x20), ENTRANCE(0x37, 0x00, 0, 1, 0x04, 0x20),
    ENTRANCE(0x39, 0x00, 0, 1, 0x04, 0x04), ENTRANCE(0x39, 0x00, 0, 1, 0x04, 0x04),
    ENTRANCE(0x39, 0x00, 0, 1, 0x04, 0x04), ENTRANCE(0x39, 0x00, 0, 1, 0x04, 0x04),
    ENTRANCE(0x5D, 0x0D, 0, 1, 0x03, 0x03), ENTRANCE(0x5D, 0x0D, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5D, 0x0D, 0, 1, 0x03, 0x03), ENTRANCE(0x5D, 0x0D, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5D, 0x0E, 0, 1, 0x03, 0x05), ENTRANCE(0x5D, 0x0E, 0, 1, 0x02, 0x04),
    ENTRANCE(0x5D, 0x0E, 0, 1, 0x03, 0x05), ENTRANCE(0x5D, 0x0E, 0, 1, 0x02, 0x04),
    ENTRANCE(0x5D, 0x0F, 1, 1, 0x0F, 0x0F), ENTRANCE(0x5D, 0x0F, 1, 1, 0x0F, 0x0F),
    ENTRANCE(0x5D, 0x0F, 1, 1, 0x0F, 0x0F), ENTRANCE(0x5D, 0x0F, 1, 1, 0x0F, 0x0F),
    ENTRANCE(0x5D, 0x10, 0, 1, 0x02, 0x02), ENTRANCE(0x5D, 0x10, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5D, 0x10, 0, 1, 0x02, 0x02), ENTRANCE(0x5D, 0x10, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5D, 0x11, 0, 1, 0x02, 0x02), ENTRANCE(0x5D, 0x11, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5D, 0x11, 0, 1, 0x02, 0x02), ENTRANCE(0x5D, 0x11, 0, 1, 0x02, 0x02),
    ENTRANCE(0x20, 0x06, 0, 1, 0x04, 0x02), ENTRANCE(0x21, 0x06, 0, 1, 0x04, 0x02),
    ENTRANCE(0x22, 0x06, 0, 1, 0x04, 0x02), ENTRANCE(0x22, 0x06, 0, 1, 0x04, 0x02),
    ENTRANCE(0x20, 0x07, 0, 1, 0x04, 0x02), ENTRANCE(0x21, 0x07, 0, 1, 0x04, 0x02),
    ENTRANCE(0x22, 0x07, 0, 1, 0x04, 0x02), ENTRANCE(0x22, 0x07, 0, 1, 0x04, 0x02),
    ENTRANCE(0x1E, 0x02, 0, 1, 0x04, 0x02), ENTRANCE(0x1F, 0x02, 0, 1, 0x04, 0x02),
    ENTRANCE(0x1E, 0x02, 0, 1, 0x03, 0x03), ENTRANCE(0x1F, 0x02, 0, 1, 0x02, 0x02),
    ENTRANCE(0x58, 0x02, 0, 1, 0x02, 0x02), ENTRANCE(0x58, 0x02, 0, 1, 0x02, 0x02),
    ENTRANCE(0x58, 0x02, 0, 1, 0x02, 0x02), ENTRANCE(0x58, 0x02, 0, 1, 0x02, 0x02),
    ENTRANCE(0x57, 0x03, 0, 1, 0x03, 0x03), ENTRANCE(0x57, 0x03, 0, 1, 0x03, 0x03),
    ENTRANCE(0x57, 0x03, 0, 1, 0x03, 0x03), ENTRANCE(0x57, 0x03, 0, 1, 0x03, 0x03),
    ENTRANCE(0x57, 0x04, 0, 1, 0x04, 0x02), ENTRANCE(0x57, 0x04, 0, 1, 0x04, 0x02),
    ENTRANCE(0x57, 0x04, 0, 1, 0x04, 0x02), ENTRANCE(0x57, 0x04, 0, 1, 0x04, 0x02),
    ENTRANCE(0x5A, 0x04, 0, 1, 0x04, 0x02), ENTRANCE(0x5A, 0x04, 0, 1, 0x04, 0x02),
    ENTRANCE(0x5A, 0x04, 0, 1, 0x04, 0x02), ENTRANCE(0x5A, 0x04, 0, 1, 0x04, 0x02),
    ENTRANCE(0x59, 0x03, 0, 1, 0x03, 0x03), ENTRANCE(0x59, 0x03, 0, 1, 0x02, 0x02),
    ENTRANCE(0x59, 0x03, 0, 1, 0x03, 0x03), ENTRANCE(0x59, 0x03, 0, 1, 0x02, 0x02),
    ENTRANCE(0x59, 0x04, 0, 1, 0x02, 0x02), ENTRANCE(0x59, 0x04, 0, 1, 0x02, 0x02),
    ENTRANCE(0x59, 0x04, 0, 1, 0x02, 0x02), ENTRANCE(0x59, 0x04, 0, 1, 0x02, 0x02),
    ENTRANCE(0x0E, 0x04, 1, 1, 0x02, 0x02), ENTRANCE(0x0E, 0x04, 1, 1, 0x02, 0x02),
    ENTRANCE(0x0E, 0x04, 1, 1, 0x02, 0x02), ENTRANCE(0x0E, 0x04, 1, 1, 0x02, 0x02),
    ENTRANCE(0x0E, 0x05, 1, 1, 0x02, 0x02), ENTRANCE(0x0E, 0x05, 1, 1, 0x02, 0x02),
    ENTRANCE(0x0E, 0x05, 1, 1, 0x02, 0x02), ENTRANCE(0x0E, 0x05, 1, 1, 0x02, 0x02),
    ENTRANCE(0x0E, 0x06, 1, 1, 0x02, 0x02), ENTRANCE(0x0E, 0x06, 1, 1, 0x02, 0x02),
    ENTRANCE(0x0E, 0x06, 1, 1, 0x02, 0x02), ENTRANCE(0x0E, 0x06, 1, 1, 0x02, 0x02),
    ENTRANCE(0x30, 0x01, 0, 0, 0x04, 0x20), ENTRANCE(0x30, 0x01, 0, 0, 0x04, 0x20),
    ENTRANCE(0x30, 0x01, 0, 1, 0x04, 0x20), ENTRANCE(0x30, 0x01, 0, 1, 0x04, 0x20),
    ENTRANCE(0x30, 0x02, 0, 0, 0x04, 0x20), ENTRANCE(0x30, 0x02, 0, 0, 0x04, 0x20),
    ENTRANCE(0x30, 0x02, 0, 1, 0x04, 0x20), ENTRANCE(0x30, 0x02, 0, 1, 0x04, 0x20),
    ENTRANCE(0x06, 0x02, 0, 0, 0x02, 0x02), ENTRANCE(0x06, 0x02, 0, 0, 0x02, 0x02),
    ENTRANCE(0x06, 0x02, 0, 0, 0x02, 0x02), ENTRANCE(0x06, 0x02, 0, 0, 0x02, 0x02),
    ENTRANCE(0x06, 0x03, 0, 0, 0x02, 0x02), ENTRANCE(0x06, 0x03, 0, 0, 0x02, 0x02),
    ENTRANCE(0x06, 0x03, 0, 0, 0x02, 0x02), ENTRANCE(0x06, 0x03, 0, 0, 0x02, 0x02),
    ENTRANCE(0x06, 0x04, 0, 1, 0x02, 0x02), ENTRANCE(0x06, 0x04, 0, 1, 0x02, 0x02),
    ENTRANCE(0x06, 0x04, 0, 1, 0x02, 0x02), ENTRANCE(0x06, 0x04, 0, 1, 0x02, 0x02),
    ENTRANCE(0x62, 0x02, 0, 1, 0x04, 0x02), ENTRANCE(0x62, 0x02, 0, 1, 0x04, 0x02),
    ENTRANCE(0x62, 0x02, 0, 1, 0x04, 0x02), ENTRANCE(0x62, 0x02, 0, 1, 0x04, 0x02),
    ENTRANCE(0x4A, 0x00, 0, 1, 0x03, 0x03), ENTRANCE(0x4A, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x4A, 0x00, 0, 1, 0x03, 0x03), ENTRANCE(0x4A, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x4A, 0x00, 0, 1, 0x03, 0x03), ENTRANCE(0x4A, 0x00, 0, 1, 0x03, 0x03),
    ENTRANCE(0x4A, 0x00, 0, 1, 0x03, 0x03), ENTRANCE(0x02, 0x01, 1, 1, 0x02, 0x02),
    ENTRANCE(0x02, 0x01, 1, 1, 0x02, 0x02), ENTRANCE(0x02, 0x01, 1, 1, 0x02, 0x02),
    ENTRANCE(0x02, 0x01, 1, 1, 0x02, 0x02), ENTRANCE(0x12, 0x00, 1, 0, 0x02, 0x02),
    ENTRANCE(0x12, 0x00, 1, 0, 0x02, 0x02), ENTRANCE(0x12, 0x00, 1, 0, 0x02, 0x02),
    ENTRANCE(0x12, 0x00, 1, 0, 0x02, 0x02), ENTRANCE(0x11, 0x00, 1, 0, 0x02, 0x02),
    ENTRANCE(0x11, 0x00, 1, 0, 0x02, 0x02), ENTRANCE(0x11, 0x00, 1, 0, 0x02, 0x02),
    ENTRANCE(0x11, 0x00, 1, 0, 0x02, 0x02), ENTRANCE(0x18, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x18, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x18, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x18, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x16, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x16, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x16, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x16, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x0A, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x0A, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x0A, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x0A, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x19, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x19, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x19, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x19, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x05, 0x01, 1, 1, 0x03, 0x02),
    ENTRANCE(0x05, 0x01, 1, 1, 0x02, 0x02), ENTRANCE(0x05, 0x01, 1, 1, 0x03, 0x02),
    ENTRANCE(0x05, 0x01, 1, 1, 0x02, 0x02), ENTRANCE(0x0A, 0x01, 1, 1, 0x02, 0x02),
    ENTRANCE(0x0A, 0x01, 1, 1, 0x02, 0x02), ENTRANCE(0x0A, 0x01, 1, 1, 0x02, 0x02),
    ENTRANCE(0x0A, 0x01, 1, 1, 0x02, 0x02), ENTRANCE(0x0A, 0x02, 0, 1, 0x02, 0x02),
    ENTRANCE(0x0A, 0x02, 0, 1, 0x02, 0x02), ENTRANCE(0x0A, 0x02, 0, 1, 0x02, 0x02),
    ENTRANCE(0x0A, 0x02, 0, 1, 0x02, 0x02), ENTRANCE(0x63, 0x05, 0, 1, 0x04, 0x02),
    ENTRANCE(0x63, 0x05, 0, 1, 0x04, 0x02), ENTRANCE(0x63, 0x05, 0, 1, 0x04, 0x02),
    ENTRANCE(0x63, 0x05, 0, 1, 0x04, 0x02), ENTRANCE(0x28, 0x00, 0, 1, 0x04, 0x04),
    ENTRANCE(0x28, 0x00, 0, 1, 0x04, 0x04), ENTRANCE(0x28, 0x00, 0, 1, 0x04, 0x04),
    ENTRANCE(0x28, 0x00, 0, 1, 0x04, 0x04), ENTRANCE(0x29, 0x00, 0, 1, 0x04, 0x04),
    ENTRANCE(0x29, 0x00, 0, 1, 0x04, 0x04), ENTRANCE(0x29, 0x00, 0, 1, 0x04, 0x04),
    ENTRANCE(0x29, 0x00, 0, 1, 0x04, 0x04), ENTRANCE(0x2B, 0x00, 0, 1, 0x04, 0x20),
    ENTRANCE(0x2B, 0x00, 0, 1, 0x04, 0x20), ENTRANCE(0x2B, 0x00, 0, 1, 0x04, 0x20),
    ENTRANCE(0x2B, 0x00, 0, 1, 0x04, 0x20), ENTRANCE(0x1A, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x1A, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x1A, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x1A, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x55, 0x09, 0, 0, 0x04, 0x04),
    ENTRANCE(0x55, 0x09, 0, 0, 0x04, 0x04), ENTRANCE(0x55, 0x09, 0, 0, 0x04, 0x04),
    ENTRANCE(0x55, 0x09, 0, 0, 0x04, 0x04), ENTRANCE(0x55, 0x0A, 0, 0, 0x04, 0x04),
    ENTRANCE(0x55, 0x0A, 0, 0, 0x04, 0x04), ENTRANCE(0x55, 0x0A, 0, 0, 0x04, 0x04),
    ENTRANCE(0x55, 0x0A, 0, 0, 0x04, 0x04), ENTRANCE(0x52, 0x09, 0, 1, 0x04, 0x04),
    ENTRANCE(0x52, 0x09, 0, 1, 0x04, 0x04), ENTRANCE(0x52, 0x09, 0, 1, 0x04, 0x04),
    ENTRANCE(0x52, 0x09, 0, 1, 0x04, 0x04), ENTRANCE(0x48, 0x00, 0, 1, 0x02, 0x26),
    ENTRANCE(0x48, 0x00, 0, 1, 0x02, 0x26), ENTRANCE(0x48, 0x00, 0, 1, 0x02, 0x26),
    ENTRANCE(0x48, 0x00, 0, 1, 0x02, 0x26), ENTRANCE(0x48, 0x01, 0, 1, 0x04, 0x20),
    ENTRANCE(0x48, 0x01, 0, 1, 0x04, 0x20), ENTRANCE(0x48, 0x01, 0, 1, 0x04, 0x20),
    ENTRANCE(0x48, 0x01, 0, 1, 0x04, 0x20), ENTRANCE(0x55, 0x0B, 0, 1, 0x04, 0x02),
    ENTRANCE(0x55, 0x0B, 0, 1, 0x04, 0x02), ENTRANCE(0x55, 0x0B, 0, 1, 0x04, 0x02),
    ENTRANCE(0x55, 0x0B, 0, 1, 0x04, 0x02), ENTRANCE(0x60, 0x04, 0, 1, 0x02, 0x02),
    ENTRANCE(0x60, 0x04, 0, 1, 0x02, 0x02), ENTRANCE(0x60, 0x04, 0, 1, 0x02, 0x02),
    ENTRANCE(0x60, 0x04, 0, 1, 0x02, 0x02), ENTRANCE(0x49, 0x00, 0, 1, 0x02, 0x20),
    ENTRANCE(0x49, 0x00, 0, 1, 0x02, 0x20), ENTRANCE(0x49, 0x00, 0, 1, 0x02, 0x20),
    ENTRANCE(0x49, 0x00, 0, 1, 0x02, 0x20), ENTRANCE(0x52, 0x0A, 0, 1, 0x04, 0x02),
    ENTRANCE(0x52, 0x0A, 0, 1, 0x04, 0x02), ENTRANCE(0x52, 0x0A, 0, 1, 0x04, 0x02),
    ENTRANCE(0x52, 0x0A, 0, 1, 0x04, 0x02), ENTRANCE(0x0D, 0x00, 0, 1, 0x04, 0x02),
    ENTRANCE(0x0D, 0x00, 0, 1, 0x04, 0x02), ENTRANCE(0x0D, 0x00, 0, 1, 0x04, 0x02),
    ENTRANCE(0x0D, 0x00, 0, 1, 0x04, 0x02), ENTRANCE(0x0D, 0x00, 0, 1, 0x04, 0x02),
    ENTRANCE(0x0D, 0x00, 0, 1, 0x04, 0x02), ENTRANCE(0x0D, 0x00, 0, 1, 0x04, 0x02),
    ENTRANCE(0x0D, 0x00, 0, 1, 0x04, 0x02), ENTRANCE(0x0D, 0x00, 0, 1, 0x04, 0x02),
    ENTRANCE(0x0D, 0x00, 0, 1, 0x04, 0x02), ENTRANCE(0x0D, 0x00, 0, 1, 0x04, 0x02),
    ENTRANCE(0x23, 0x01, 0, 1, 0x04, 0x02), ENTRANCE(0x24, 0x01, 0, 1, 0x04, 0x02),
    ENTRANCE(0x25, 0x01, 0, 1, 0x04, 0x02), ENTRANCE(0x25, 0x01, 0, 1, 0x04, 0x02),
    ENTRANCE(0x51, 0x0F, 0, 1, 0x05, 0x05), ENTRANCE(0x51, 0x0F, 0, 1, 0x04, 0x02),
    ENTRANCE(0x51, 0x0F, 0, 1, 0x05, 0x05), ENTRANCE(0x51, 0x0F, 0, 1, 0x04, 0x02),
    ENTRANCE(0x60, 0x05, 0, 1, 0x04, 0x02), ENTRANCE(0x60, 0x05, 0, 1, 0x04, 0x02),
    ENTRANCE(0x60, 0x05, 0, 1, 0x04, 0x02), ENTRANCE(0x60, 0x05, 0, 1, 0x04, 0x02),
    ENTRANCE(0x5F, 0x04, 0, 1, 0x03, 0x03), ENTRANCE(0x5F, 0x04, 0, 1, 0x02, 0x02),
    ENTRANCE(0x64, 0x04, 0, 1, 0x02, 0x02), ENTRANCE(0x64, 0x04, 0, 1, 0x02, 0x02),
    ENTRANCE(0x61, 0x03, 0, 1, 0x02, 0x02), ENTRANCE(0x61, 0x03, 0, 1, 0x02, 0x02),
    ENTRANCE(0x61, 0x03, 0, 1, 0x02, 0x02), ENTRANCE(0x61, 0x03, 0, 1, 0x02, 0x02),
    ENTRANCE(0x0C, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x0C, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x0C, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x0C, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x0C, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x0C, 0x01, 0, 1, 0x02, 0x02),
    ENTRANCE(0x0C, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x0C, 0x01, 0, 1, 0x02, 0x02),
    ENTRANCE(0x0C, 0x02, 0, 1, 0x02, 0x02), ENTRANCE(0x0C, 0x02, 0, 1, 0x02, 0x02),
    ENTRANCE(0x0C, 0x02, 0, 1, 0x02, 0x02), ENTRANCE(0x0C, 0x02, 0, 1, 0x02, 0x02),
    ENTRANCE(0x0C, 0x03, 0, 1, 0x02, 0x02), ENTRANCE(0x0C, 0x03, 0, 1, 0x02, 0x02),
    ENTRANCE(0x0C, 0x03, 0, 1, 0x02, 0x02), ENTRANCE(0x0C, 0x03, 0, 1, 0x02, 0x02),
    ENTRANCE(0x0C, 0x04, 0, 1, 0x02, 0x02), ENTRANCE(0x0C, 0x04, 0, 1, 0x02, 0x02),
    ENTRANCE(0x0C, 0x04, 0, 1, 0x02, 0x02), ENTRANCE(0x0C, 0x04, 0, 1, 0x02, 0x02),
    ENTRANCE(0x0C, 0x05, 0, 1, 0x02, 0x02), ENTRANCE(0x0C, 0x05, 0, 1, 0x02, 0x02),
    ENTRANCE(0x0C, 0x05, 0, 1, 0x02, 0x02), ENTRANCE(0x0C, 0x05, 0, 1, 0x02, 0x02),
    ENTRANCE(0x0C, 0x06, 0, 1, 0x02, 0x02), ENTRANCE(0x0C, 0x06, 0, 1, 0x02, 0x02),
    ENTRANCE(0x0C, 0x06, 0, 1, 0x02, 0x02), ENTRANCE(0x0C, 0x06, 0, 1, 0x02, 0x02),
    ENTRANCE(0x0C, 0x07, 0, 1, 0x02, 0x02), ENTRANCE(0x0C, 0x07, 0, 1, 0x02, 0x02),
    ENTRANCE(0x0C, 0x07, 0, 1, 0x02, 0x02), ENTRANCE(0x0C, 0x07, 0, 1, 0x02, 0x02),
    ENTRANCE(0x0C, 0x08, 0, 1, 0x02, 0x02), ENTRANCE(0x0C, 0x08, 0, 1, 0x02, 0x02),
    ENTRANCE(0x0C, 0x08, 0, 1, 0x02, 0x02), ENTRANCE(0x0C, 0x08, 0, 1, 0x02, 0x02),
    ENTRANCE(0x0C, 0x09, 0, 1, 0x02, 0x02), ENTRANCE(0x0C, 0x09, 0, 1, 0x02, 0x02),
    ENTRANCE(0x0C, 0x09, 0, 1, 0x02, 0x02), ENTRANCE(0x0C, 0x09, 0, 1, 0x02, 0x02),
    ENTRANCE(0x0C, 0x0A, 0, 1, 0x02, 0x02), ENTRANCE(0x0C, 0x0A, 0, 1, 0x02, 0x02),
    ENTRANCE(0x0C, 0x0A, 0, 1, 0x02, 0x02), ENTRANCE(0x0C, 0x0A, 0, 1, 0x02, 0x02),
    ENTRANCE(0x0C, 0x0B, 0, 1, 0x02, 0x02), ENTRANCE(0x0C, 0x0B, 0, 1, 0x02, 0x02),
    ENTRANCE(0x0C, 0x0B, 0, 1, 0x02, 0x02), ENTRANCE(0x0C, 0x0B, 0, 1, 0x02, 0x02),
    ENTRANCE(0x0E, 0x07, 1, 1, 0x02, 0x02), ENTRANCE(0x0E, 0x07, 1, 1, 0x02, 0x02),
    ENTRANCE(0x0E, 0x07, 1, 1, 0x02, 0x02), ENTRANCE(0x0E, 0x07, 1, 1, 0x02, 0x02),
    ENTRANCE(0x1A, 0x01, 1, 1, 0x02, 0x02), ENTRANCE(0x1A, 0x01, 1, 1, 0x02, 0x02),
    ENTRANCE(0x1A, 0x01, 1, 1, 0x02, 0x02), ENTRANCE(0x1A, 0x01, 1, 1, 0x02, 0x02),
    ENTRANCE(0x3B, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x3B, 0x01, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3B, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x3B, 0x01, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3B, 0x02, 0, 1, 0x02, 0x02), ENTRANCE(0x3B, 0x02, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3B, 0x02, 0, 1, 0x02, 0x02), ENTRANCE(0x3B, 0x02, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5B, 0x04, 0, 1, 0x02, 0x02), ENTRANCE(0x5B, 0x04, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5B, 0x04, 0, 1, 0x02, 0x02), ENTRANCE(0x5B, 0x04, 0, 1, 0x02, 0x02),
    ENTRANCE(0x63, 0x06, 0, 0, 0x02, 0x26), ENTRANCE(0x63, 0x06, 0, 0, 0x02, 0x26),
    ENTRANCE(0x63, 0x06, 0, 0, 0x02, 0x26), ENTRANCE(0x63, 0x06, 0, 0, 0x02, 0x26),
    ENTRANCE(0x63, 0x07, 0, 0, 0x2E, 0x2E), ENTRANCE(0x63, 0x07, 0, 0, 0x2E, 0x2E),
    ENTRANCE(0x63, 0x07, 0, 0, 0x2E, 0x2E), ENTRANCE(0x63, 0x07, 0, 0, 0x2E, 0x2E),
    ENTRANCE(0x5B, 0x05, 0, 1, 0x02, 0x02), ENTRANCE(0x5B, 0x05, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5B, 0x05, 0, 1, 0x02, 0x02), ENTRANCE(0x5B, 0x05, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5B, 0x06, 0, 1, 0x2C, 0x2C), ENTRANCE(0x5B, 0x06, 0, 1, 0x2C, 0x2C),
    ENTRANCE(0x5B, 0x06, 0, 1, 0x2C, 0x2C), ENTRANCE(0x5B, 0x06, 0, 1, 0x2C, 0x2C),
    ENTRANCE(0x5B, 0x07, 0, 1, 0x2C, 0x2C), ENTRANCE(0x5B, 0x07, 0, 1, 0x2C, 0x2C),
    ENTRANCE(0x5B, 0x07, 0, 1, 0x2C, 0x2C), ENTRANCE(0x5B, 0x07, 0, 1, 0x2C, 0x2C),
    ENTRANCE(0x5B, 0x08, 0, 0, 0x02, 0x02), ENTRANCE(0x5B, 0x08, 0, 0, 0x02, 0x02),
    ENTRANCE(0x5B, 0x08, 0, 0, 0x02, 0x02), ENTRANCE(0x5B, 0x08, 0, 0, 0x02, 0x02),
    ENTRANCE(0x62, 0x03, 0, 1, 0x2C, 0x2C), ENTRANCE(0x62, 0x03, 0, 1, 0x2C, 0x2C),
    ENTRANCE(0x62, 0x03, 0, 1, 0x2C, 0x2C), ENTRANCE(0x62, 0x03, 0, 1, 0x2C, 0x2C),
    ENTRANCE(0x57, 0x05, 0, 1, 0x02, 0x02), ENTRANCE(0x57, 0x05, 0, 1, 0x02, 0x02),
    ENTRANCE(0x57, 0x05, 0, 1, 0x02, 0x02), ENTRANCE(0x57, 0x05, 0, 1, 0x02, 0x02),
    ENTRANCE(0x07, 0x03, 0, 1, 0x02, 0x02), ENTRANCE(0x07, 0x03, 0, 1, 0x02, 0x02),
    ENTRANCE(0x07, 0x03, 0, 1, 0x02, 0x02), ENTRANCE(0x07, 0x03, 0, 1, 0x02, 0x02),
    ENTRANCE(0x52, 0x0B, 0, 1, 0x04, 0x02), ENTRANCE(0x52, 0x0B, 0, 1, 0x04, 0x02),
    ENTRANCE(0x52, 0x0B, 0, 1, 0x04, 0x02), ENTRANCE(0x52, 0x0B, 0, 1, 0x04, 0x02),
    ENTRANCE(0x3B, 0x03, 0, 1, 0x02, 0x02), ENTRANCE(0x3B, 0x03, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3B, 0x03, 0, 1, 0x02, 0x02), ENTRANCE(0x3B, 0x03, 0, 1, 0x02, 0x02),
    ENTRANCE(0x61, 0x04, 0, 1, 0x02, 0x02), ENTRANCE(0x61, 0x04, 0, 1, 0x02, 0x02),
    ENTRANCE(0x61, 0x04, 0, 1, 0x02, 0x02), ENTRANCE(0x61, 0x04, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5F, 0x03, 0, 1, 0x03, 0x03), ENTRANCE(0x5F, 0x03, 0, 1, 0x02, 0x02),
    ENTRANCE(0x64, 0x03, 0, 1, 0x02, 0x02), ENTRANCE(0x64, 0x03, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5F, 0x03, 0, 1, 0x00, 0x00), ENTRANCE(0x52, 0x0C, 0, 1, 0x04, 0x02),
    ENTRANCE(0x52, 0x0C, 0, 1, 0x04, 0x02), ENTRANCE(0x52, 0x0C, 0, 1, 0x04, 0x02),
    ENTRANCE(0x52, 0x0C, 0, 1, 0x04, 0x02), ENTRANCE(0x48, 0x02, 1, 1, 0x04, 0x20),
    ENTRANCE(0x48, 0x02, 1, 1, 0x04, 0x20), ENTRANCE(0x48, 0x02, 1, 1, 0x04, 0x20),
    ENTRANCE(0x48, 0x02, 1, 1, 0x04, 0x20), ENTRANCE(0x4B, 0x00, 0, 1, 0x04, 0x20),
    ENTRANCE(0x4B, 0x00, 0, 1, 0x04, 0x20), ENTRANCE(0x4B, 0x00, 0, 1, 0x04, 0x20),
    ENTRANCE(0x4B, 0x00, 0, 1, 0x04, 0x20), ENTRANCE(0x53, 0x06, 0, 1, 0x03, 0x03),
    ENTRANCE(0x53, 0x06, 0, 1, 0x03, 0x03), ENTRANCE(0x53, 0x06, 0, 1, 0x03, 0x03),
    ENTRANCE(0x53, 0x06, 0, 1, 0x03, 0x03), ENTRANCE(0x51, 0x10, 0, 1, 0x0B, 0x0B),
    ENTRANCE(0x51, 0x10, 0, 1, 0x0B, 0x0B), ENTRANCE(0x51, 0x10, 0, 1, 0x0B, 0x0B),
    ENTRANCE(0x51, 0x10, 0, 1, 0x0B, 0x0B), ENTRANCE(0x52, 0x0D, 0, 1, 0x03, 0x03),
    ENTRANCE(0x52, 0x0D, 0, 1, 0x02, 0x02), ENTRANCE(0x52, 0x0D, 0, 1, 0x03, 0x03),
    ENTRANCE(0x52, 0x0D, 0, 1, 0x02, 0x02), ENTRANCE(0x4F, 0x00, 0, 1, 0x03, 0x03),
    ENTRANCE(0x4F, 0x00, 0, 1, 0x03, 0x03), ENTRANCE(0x4F, 0x00, 0, 1, 0x03, 0x03),
    ENTRANCE(0x4F, 0x00, 0, 1, 0x03, 0x03), ENTRANCE(0x4F, 0x00, 0, 1, 0x03, 0x03),
    ENTRANCE(0x1A, 0x06, 1, 1, 0x02, 0x02), ENTRANCE(0x1A, 0x06, 1, 1, 0x02, 0x02),
    ENTRANCE(0x1A, 0x06, 1, 1, 0x02, 0x02), ENTRANCE(0x1A, 0x06, 1, 1, 0x02, 0x02),
    ENTRANCE(0x66, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x66, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x66, 0x00, 0, 1, 0x02, 0x02), ENTRANCE(0x66, 0x00, 0, 1, 0x02, 0x02),
    ENTRANCE(0x1A, 0x07, 1, 1, 0x02, 0x02), ENTRANCE(0x1A, 0x07, 1, 1, 0x02, 0x02),
    ENTRANCE(0x1A, 0x07, 1, 1, 0x02, 0x02), ENTRANCE(0x1A, 0x07, 1, 1, 0x02, 0x02),
    ENTRANCE(0x32, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x32, 0x01, 0, 1, 0x02, 0x02),
    ENTRANCE(0x32, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x32, 0x01, 0, 1, 0x02, 0x02),
    ENTRANCE(0x2C, 0x01, 0, 1, 0x04, 0x20), ENTRANCE(0x2C, 0x01, 0, 1, 0x04, 0x20),
    ENTRANCE(0x2C, 0x01, 0, 1, 0x04, 0x20), ENTRANCE(0x2C, 0x01, 0, 1, 0x04, 0x20),
    ENTRANCE(0x33, 0x00, 0, 1, 0x04, 0x20), ENTRANCE(0x33, 0x00, 0, 1, 0x04, 0x20),
    ENTRANCE(0x33, 0x00, 0, 1, 0x04, 0x20), ENTRANCE(0x33, 0x00, 0, 1, 0x04, 0x20),
    ENTRANCE(0x0D, 0x01, 0, 0, 0x04, 0x02), ENTRANCE(0x0D, 0x01, 0, 0, 0x04, 0x02),
    ENTRANCE(0x0D, 0x01, 0, 0, 0x04, 0x02), ENTRANCE(0x0D, 0x01, 0, 0, 0x04, 0x02),
    ENTRANCE(0x0D, 0x02, 0, 1, 0x04, 0x02), ENTRANCE(0x0D, 0x02, 0, 1, 0x04, 0x02),
    ENTRANCE(0x0D, 0x02, 0, 1, 0x04, 0x02), ENTRANCE(0x0D, 0x02, 0, 1, 0x04, 0x02),
    ENTRANCE(0x0D, 0x03, 0, 1, 0x04, 0x02), ENTRANCE(0x0D, 0x03, 0, 1, 0x04, 0x02),
    ENTRANCE(0x0D, 0x03, 0, 1, 0x04, 0x02), ENTRANCE(0x0D, 0x03, 0, 1, 0x04, 0x02),
    ENTRANCE(0x0D, 0x04, 0, 1, 0x04, 0x02), ENTRANCE(0x0D, 0x04, 0, 1, 0x04, 0x02),
    ENTRANCE(0x0D, 0x04, 0, 1, 0x04, 0x02), ENTRANCE(0x0D, 0x04, 0, 1, 0x04, 0x02),
    ENTRANCE(0x0D, 0x05, 0, 1, 0x04, 0x02), ENTRANCE(0x0D, 0x05, 0, 1, 0x04, 0x02),
    ENTRANCE(0x0D, 0x05, 0, 1, 0x04, 0x02), ENTRANCE(0x0D, 0x05, 0, 1, 0x04, 0x02),
    ENTRANCE(0x0D, 0x06, 0, 1, 0x04, 0x02), ENTRANCE(0x0D, 0x06, 0, 1, 0x04, 0x02),
    ENTRANCE(0x0D, 0x06, 0, 1, 0x04, 0x02), ENTRANCE(0x0D, 0x06, 0, 1, 0x04, 0x02),
    ENTRANCE(0x0D, 0x07, 0, 1, 0x04, 0x02), ENTRANCE(0x0D, 0x07, 0, 1, 0x04, 0x02),
    ENTRANCE(0x0D, 0x07, 0, 1, 0x04, 0x02), ENTRANCE(0x0D, 0x07, 0, 1, 0x04, 0x02),
    ENTRANCE(0x50, 0x00, 0, 1, 0x04, 0x20), ENTRANCE(0x50, 0x00, 0, 1, 0x04, 0x20),
    ENTRANCE(0x50, 0x00, 0, 1, 0x04, 0x20), ENTRANCE(0x50, 0x00, 0, 1, 0x04, 0x20),
    ENTRANCE(0x52, 0x0E, 0, 1, 0x03, 0x03), ENTRANCE(0x52, 0x0E, 0, 1, 0x02, 0x02),
    ENTRANCE(0x52, 0x0E, 0, 1, 0x03, 0x03), ENTRANCE(0x52, 0x0E, 0, 1, 0x02, 0x02),
    ENTRANCE(0x63, 0x08, 0, 0, 0x20, 0x20), ENTRANCE(0x63, 0x08, 0, 0, 0x20, 0x20),
    ENTRANCE(0x63, 0x08, 0, 0, 0x20, 0x20), ENTRANCE(0x63, 0x08, 0, 0, 0x20, 0x20),
    ENTRANCE(0x63, 0x09, 0, 0, 0x02, 0x02), ENTRANCE(0x63, 0x09, 0, 0, 0x02, 0x02),
    ENTRANCE(0x63, 0x09, 0, 0, 0x02, 0x02), ENTRANCE(0x63, 0x09, 0, 0, 0x02, 0x02),
    ENTRANCE(0x57, 0x07, 0, 1, 0x2C, 0x2C), ENTRANCE(0x57, 0x07, 0, 1, 0x2C, 0x2C),
    ENTRANCE(0x57, 0x07, 0, 1, 0x2C, 0x2C), ENTRANCE(0x57, 0x07, 0, 1, 0x2C, 0x2C),
    ENTRANCE(0x61, 0x05, 0, 1, 0x02, 0x02), ENTRANCE(0x61, 0x05, 0, 1, 0x02, 0x02),
    ENTRANCE(0x61, 0x05, 0, 1, 0x02, 0x02), ENTRANCE(0x61, 0x05, 0, 1, 0x02, 0x02),
    ENTRANCE(0x53, 0x07, 0, 1, 0x03, 0x03), ENTRANCE(0x53, 0x07, 0, 1, 0x03, 0x03),
    ENTRANCE(0x53, 0x07, 0, 1, 0x03, 0x03), ENTRANCE(0x53, 0x07, 0, 1, 0x03, 0x03),
    ENTRANCE(0x0F, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x0F, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x0F, 0x00, 1, 1, 0x02, 0x02), ENTRANCE(0x0F, 0x00, 1, 1, 0x02, 0x02),
    ENTRANCE(0x0C, 0x0C, 0, 1, 0x02, 0x02), ENTRANCE(0x0C, 0x0C, 0, 1, 0x02, 0x02),
    ENTRANCE(0x0C, 0x0C, 0, 1, 0x02, 0x02), ENTRANCE(0x0C, 0x0C, 0, 1, 0x02, 0x02),
    ENTRANCE(0x41, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x41, 0x01, 0, 1, 0x02, 0x02),
    ENTRANCE(0x41, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x41, 0x01, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3D, 0x01, 0, 1, 0x04, 0x04), ENTRANCE(0x3D, 0x01, 0, 1, 0x04, 0x04),
    ENTRANCE(0x3D, 0x01, 0, 1, 0x04, 0x04), ENTRANCE(0x3D, 0x01, 0, 1, 0x04, 0x04),
    ENTRANCE(0x5C, 0x07, 0, 1, 0x03, 0x03), ENTRANCE(0x5C, 0x07, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5C, 0x07, 0, 1, 0x03, 0x03), ENTRANCE(0x5C, 0x07, 0, 1, 0x02, 0x02),
    ENTRANCE(0x53, 0x08, 0, 1, 0x03, 0x03), ENTRANCE(0x53, 0x08, 0, 1, 0x03, 0x03),
    ENTRANCE(0x53, 0x08, 0, 1, 0x03, 0x03), ENTRANCE(0x53, 0x08, 0, 1, 0x03, 0x03),
    ENTRANCE(0x03, 0x02, 0, 1, 0x02, 0x02), ENTRANCE(0x03, 0x02, 0, 1, 0x02, 0x02),
    ENTRANCE(0x03, 0x02, 0, 1, 0x02, 0x02), ENTRANCE(0x03, 0x02, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3D, 0x02, 0, 1, 0x02, 0x02), ENTRANCE(0x3D, 0x02, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3D, 0x02, 0, 1, 0x02, 0x02), ENTRANCE(0x3D, 0x02, 0, 1, 0x02, 0x02),
    ENTRANCE(0x43, 0x05, 0, 1, 0x02, 0x02), ENTRANCE(0x43, 0x05, 0, 1, 0x02, 0x02),
    ENTRANCE(0x43, 0x05, 0, 1, 0x02, 0x02), ENTRANCE(0x43, 0x05, 0, 1, 0x02, 0x02),
    ENTRANCE(0x43, 0x06, 0, 1, 0x02, 0x02), ENTRANCE(0x43, 0x06, 0, 1, 0x02, 0x02),
    ENTRANCE(0x43, 0x06, 0, 1, 0x02, 0x02), ENTRANCE(0x43, 0x06, 0, 1, 0x02, 0x02),
    ENTRANCE(0x51, 0x11, 0, 1, 0x03, 0x03), ENTRANCE(0x51, 0x11, 0, 1, 0x02, 0x02),
    ENTRANCE(0x51, 0x11, 0, 1, 0x03, 0x03), ENTRANCE(0x51, 0x11, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3E, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x3E, 0x01, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3E, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x3E, 0x01, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3E, 0x02, 0, 1, 0x02, 0x02), ENTRANCE(0x3E, 0x02, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3E, 0x02, 0, 1, 0x02, 0x02), ENTRANCE(0x3E, 0x02, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3E, 0x03, 0, 1, 0x02, 0x02), ENTRANCE(0x3E, 0x03, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3E, 0x03, 0, 1, 0x02, 0x02), ENTRANCE(0x3E, 0x03, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3E, 0x04, 0, 1, 0x02, 0x02), ENTRANCE(0x3E, 0x04, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3E, 0x04, 0, 1, 0x02, 0x02), ENTRANCE(0x3E, 0x04, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3E, 0x05, 0, 1, 0x02, 0x03), ENTRANCE(0x3E, 0x05, 0, 1, 0x02, 0x03),
    ENTRANCE(0x3E, 0x05, 0, 1, 0x02, 0x03), ENTRANCE(0x3E, 0x05, 0, 1, 0x02, 0x03),
    ENTRANCE(0x3E, 0x06, 0, 1, 0x02, 0x02), ENTRANCE(0x3E, 0x06, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3E, 0x06, 0, 1, 0x02, 0x02), ENTRANCE(0x3E, 0x06, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3E, 0x07, 0, 1, 0x02, 0x02), ENTRANCE(0x3E, 0x07, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3E, 0x07, 0, 1, 0x02, 0x02), ENTRANCE(0x3E, 0x07, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3E, 0x08, 0, 1, 0x02, 0x02), ENTRANCE(0x3E, 0x08, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3E, 0x08, 0, 1, 0x02, 0x02), ENTRANCE(0x3E, 0x08, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3E, 0x09, 0, 1, 0x02, 0x02), ENTRANCE(0x3E, 0x09, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3E, 0x09, 0, 1, 0x02, 0x02), ENTRANCE(0x3E, 0x09, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3E, 0x0A, 0, 1, 0x02, 0x02), ENTRANCE(0x3E, 0x0A, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3E, 0x0A, 0, 1, 0x02, 0x02), ENTRANCE(0x3E, 0x0A, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3E, 0x0B, 0, 1, 0x02, 0x02), ENTRANCE(0x3E, 0x0B, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3E, 0x0B, 0, 1, 0x02, 0x02), ENTRANCE(0x3E, 0x0B, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3E, 0x0C, 0, 1, 0x02, 0x02), ENTRANCE(0x3E, 0x0C, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3E, 0x0C, 0, 1, 0x02, 0x02), ENTRANCE(0x3E, 0x0C, 0, 1, 0x02, 0x02),
    ENTRANCE(0x37, 0x01, 0, 1, 0x04, 0x20), ENTRANCE(0x37, 0x01, 0, 1, 0x04, 0x20),
    ENTRANCE(0x37, 0x01, 0, 1, 0x04, 0x20), ENTRANCE(0x37, 0x01, 0, 1, 0x04, 0x20),
    ENTRANCE(0x08, 0x01, 0, 1, 0x04, 0x04), ENTRANCE(0x08, 0x01, 0, 1, 0x04, 0x04),
    ENTRANCE(0x08, 0x01, 0, 1, 0x04, 0x04), ENTRANCE(0x08, 0x01, 0, 1, 0x04, 0x04),
    ENTRANCE(0x4C, 0x01, 0, 1, 0x04, 0x20), ENTRANCE(0x4C, 0x01, 0, 1, 0x04, 0x20),
    ENTRANCE(0x4C, 0x01, 0, 1, 0x04, 0x20), ENTRANCE(0x4C, 0x01, 0, 1, 0x04, 0x20),
    ENTRANCE(0x63, 0x0A, 0, 1, 0x04, 0x02), ENTRANCE(0x63, 0x0A, 0, 1, 0x04, 0x02),
    ENTRANCE(0x63, 0x0A, 0, 1, 0x04, 0x02), ENTRANCE(0x63, 0x0A, 0, 1, 0x04, 0x02),
    ENTRANCE(0x09, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x09, 0x01, 0, 1, 0x02, 0x02),
    ENTRANCE(0x09, 0x01, 0, 1, 0x02, 0x02), ENTRANCE(0x09, 0x01, 0, 1, 0x02, 0x02),
    ENTRANCE(0x52, 0x0F, 0, 1, 0x03, 0x03), ENTRANCE(0x52, 0x0F, 0, 1, 0x02, 0x02),
    ENTRANCE(0x52, 0x0F, 0, 1, 0x03, 0x03), ENTRANCE(0x52, 0x0F, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5B, 0x09, 0, 0, 0x02, 0x02), ENTRANCE(0x5B, 0x09, 0, 0, 0x02, 0x02),
    ENTRANCE(0x5B, 0x09, 0, 0, 0x02, 0x02), ENTRANCE(0x5B, 0x09, 0, 0, 0x02, 0x02),
    ENTRANCE(0x4C, 0x02, 0, 1, 0x04, 0x20), ENTRANCE(0x4C, 0x02, 0, 1, 0x04, 0x20),
    ENTRANCE(0x4C, 0x02, 0, 1, 0x04, 0x20), ENTRANCE(0x4C, 0x02, 0, 1, 0x04, 0x20),
    ENTRANCE(0x55, 0x0C, 0, 1, 0x04, 0x02), ENTRANCE(0x55, 0x0C, 0, 1, 0x04, 0x02),
    ENTRANCE(0x55, 0x0C, 0, 1, 0x04, 0x02), ENTRANCE(0x55, 0x0C, 0, 1, 0x04, 0x02),
    ENTRANCE(0x17, 0x02, 1, 1, 0x02, 0x02), ENTRANCE(0x17, 0x02, 1, 1, 0x02, 0x02),
    ENTRANCE(0x17, 0x02, 1, 1, 0x02, 0x02), ENTRANCE(0x17, 0x02, 1, 1, 0x02, 0x02),
    ENTRANCE(0x4A, 0x01, 0, 0, 0x03, 0x03), ENTRANCE(0x4A, 0x01, 0, 0, 0x02, 0x02),
    ENTRANCE(0x4A, 0x01, 0, 0, 0x03, 0x03), ENTRANCE(0x4A, 0x01, 0, 0, 0x02, 0x02),
    ENTRANCE(0x43, 0x07, 0, 1, 0x02, 0x02), ENTRANCE(0x43, 0x07, 0, 1, 0x02, 0x02),
    ENTRANCE(0x43, 0x07, 0, 1, 0x02, 0x02), ENTRANCE(0x43, 0x07, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5D, 0x12, 0, 1, 0x02, 0x02), ENTRANCE(0x5D, 0x12, 0, 1, 0x02, 0x02),
    ENTRANCE(0x5D, 0x12, 0, 1, 0x02, 0x02), ENTRANCE(0x5D, 0x12, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3E, 0x0D, 0, 1, 0x02, 0x02), ENTRANCE(0x3E, 0x0D, 0, 1, 0x02, 0x02),
    ENTRANCE(0x3E, 0x0D, 0, 1, 0x02, 0x02), ENTRANCE(0x3E, 0x0D, 0, 1, 0x02, 0x02),
    ENTRANCE(0x56, 0x02, 0, 1, 0x12, 0x12), ENTRANCE(0x56, 0x02, 0, 1, 0x02, 0x02),
    ENTRANCE(0x56, 0x02, 0, 1, 0x12, 0x12), ENTRANCE(0x56, 0x02, 0, 1, 0x02, 0x02),
    ENTRANCE(0x57, 0x08, 0, 1, 0x02, 0x02), ENTRANCE(0x57, 0x08, 0, 1, 0x02, 0x02),
    ENTRANCE(0x57, 0x08, 0, 1, 0x02, 0x02), ENTRANCE(0x57, 0x08, 0, 1, 0x02, 0x02),
    ENTRANCE(0x56, 0x03, 0, 1, 0x03, 0x03), ENTRANCE(0x56, 0x03, 0, 1, 0x03, 0x03),
    ENTRANCE(0x56, 0x03, 0, 1, 0x03, 0x03), ENTRANCE(0x56, 0x03, 0, 1, 0x03, 0x03),
    ENTRANCE(0x57, 0x09, 0, 1, 0x03, 0x03), ENTRANCE(0x57, 0x09, 0, 1, 0x03, 0x03),
    ENTRANCE(0x57, 0x09, 0, 1, 0x03, 0x03), ENTRANCE(0x57, 0x09, 0, 1, 0x03, 0x03),
    ENTRANCE(0x5C, 0x08, 0, 1, 0x03, 0x03), ENTRANCE(0x5C, 0x08, 0, 1, 0x03, 0x03),
    ENTRANCE(0x5C, 0x08, 0, 1, 0x03, 0x03), ENTRANCE(0x5C, 0x08, 0, 1, 0x03, 0x03),
};

#define TITLED_SCENE(name, title, unk_10, config, unk_12)                                            \
    {                                                                                                \
        (uintptr_t) _##name##SegmentRomStart, (uintptr_t)_##name##SegmentRomEnd, (uintptr_t)title, \
            (uintptr_t)title + sizeof(title), unk_10, config, unk_12, 0, name##Commands                                  \
    }

#define TITLED_SCENE2(name, title, unk_10, config, unk_12)                                            \
    {                                                                                                \
        (uintptr_t) name, (uintptr_t)name + sizeof(name), (uintptr_t)title, \
            (uintptr_t)title + sizeof(title), unk_10, config, unk_12, 0, name##Commands                                  \
    }

#define UNTITLED_SCENE(name, unk_10, config, unk_12) \
    { (uintptr_t) _##name##SegmentRomStart, (uintptr_t)_##name##SegmentRomEnd, 0, 0, unk_10, config, unk_12, 0, name##Commands }

#define SCENE_EXTERN(name) extern SceneCmd name##Commands[]

SCENE_EXTERN(ydan_scene);
SCENE_EXTERN(ddan_scene);
SCENE_EXTERN(bdan_scene);
SCENE_EXTERN(Bmori1_scene);
SCENE_EXTERN(HIDAN_scene);
SCENE_EXTERN(MIZUsin_scene);
SCENE_EXTERN(jyasinzou_scene);
SCENE_EXTERN(HAKAdan_scene);
SCENE_EXTERN(HAKAdanCH_scene);
SCENE_EXTERN(ice_doukutu_scene);
SCENE_EXTERN(ganon_scene);
SCENE_EXTERN(men_scene);
SCENE_EXTERN(gerudoway_scene);
SCENE_EXTERN(ganontika_scene);
SCENE_EXTERN(ganon_sonogo_scene);
SCENE_EXTERN(ganontikasonogo_scene);
SCENE_EXTERN(takaraya_scene);
SCENE_EXTERN(ydan_boss_scene);
SCENE_EXTERN(ddan_boss_scene);
SCENE_EXTERN(bdan_boss_scene);
SCENE_EXTERN(moribossroom_scene);
SCENE_EXTERN(FIRE_bs_scene);
SCENE_EXTERN(MIZUsin_bs_scene);
SCENE_EXTERN(jyasinboss_scene);
SCENE_EXTERN(HAKAdan_bs_scene);
SCENE_EXTERN(ganon_boss_scene);
SCENE_EXTERN(ganon_final_scene);
SCENE_EXTERN(entra_scene);
SCENE_EXTERN(entra_n_scene);
SCENE_EXTERN(enrui_scene);
SCENE_EXTERN(market_alley_scene);
SCENE_EXTERN(market_alley_n_scene);
SCENE_EXTERN(market_day_scene);
SCENE_EXTERN(market_night_scene);
SCENE_EXTERN(market_ruins_scene);
SCENE_EXTERN(shrine_scene);
SCENE_EXTERN(shrine_n_scene);
SCENE_EXTERN(shrine_r_scene);
SCENE_EXTERN(kokiri_home_scene);
SCENE_EXTERN(kokiri_home3_scene);
SCENE_EXTERN(kokiri_home4_scene);
SCENE_EXTERN(kokiri_home5_scene);
SCENE_EXTERN(kakariko_scene);
SCENE_EXTERN(kakariko3_scene);
SCENE_EXTERN(shop1_scene);
SCENE_EXTERN(kokiri_shop_scene);
SCENE_EXTERN(golon_scene);
SCENE_EXTERN(zoora_scene);
SCENE_EXTERN(drag_scene);
SCENE_EXTERN(alley_shop_scene);
SCENE_EXTERN(night_shop_scene);
SCENE_EXTERN(face_shop_scene);
SCENE_EXTERN(link_home_scene);
SCENE_EXTERN(impa_scene);
SCENE_EXTERN(malon_stable_scene);
SCENE_EXTERN(labo_scene);
SCENE_EXTERN(hylia_labo_scene);
SCENE_EXTERN(tent_scene);
SCENE_EXTERN(hut_scene);
SCENE_EXTERN(daiyousei_izumi_scene);
SCENE_EXTERN(yousei_izumi_tate_scene);
SCENE_EXTERN(yousei_izumi_yoko_scene);
SCENE_EXTERN(kakusiana_scene);
SCENE_EXTERN(hakaana_scene);
SCENE_EXTERN(hakaana2_scene);
SCENE_EXTERN(hakaana_ouke_scene);
SCENE_EXTERN(syatekijyou_scene);
SCENE_EXTERN(tokinoma_scene);
SCENE_EXTERN(kenjyanoma_scene);
SCENE_EXTERN(hairal_niwa_scene);
SCENE_EXTERN(hairal_niwa_n_scene);
SCENE_EXTERN(hiral_demo_scene);
SCENE_EXTERN(hakasitarelay_scene);
SCENE_EXTERN(turibori_scene);
SCENE_EXTERN(nakaniwa_scene);
SCENE_EXTERN(bowling_scene);
SCENE_EXTERN(souko_scene);
SCENE_EXTERN(miharigoya_scene);
SCENE_EXTERN(mahouya_scene);
SCENE_EXTERN(ganon_demo_scene);
SCENE_EXTERN(kinsuta_scene);
SCENE_EXTERN(spot00_scene);
SCENE_EXTERN(spot01_scene);
SCENE_EXTERN(spot02_scene);
SCENE_EXTERN(spot03_scene);
SCENE_EXTERN(spot04_scene);
SCENE_EXTERN(spot05_scene);
SCENE_EXTERN(spot06_scene);
SCENE_EXTERN(spot07_scene);
SCENE_EXTERN(spot08_scene);
SCENE_EXTERN(spot09_scene);
SCENE_EXTERN(spot10_scene);
SCENE_EXTERN(spot11_scene);
SCENE_EXTERN(spot12_scene);
SCENE_EXTERN(spot13_scene);
SCENE_EXTERN(spot15_scene);
SCENE_EXTERN(spot16_scene);
SCENE_EXTERN(spot17_scene);
SCENE_EXTERN(spot18_scene);
SCENE_EXTERN(spot20_scene);
SCENE_EXTERN(ganon_tou_scene);
SCENE_EXTERN(test01_scene);
SCENE_EXTERN(besitu_scene);
SCENE_EXTERN(depth_test_scene);
SCENE_EXTERN(syotes_scene);
SCENE_EXTERN(syotes2_scene);
SCENE_EXTERN(sutaru_scene);
SCENE_EXTERN(hairal_niwa2_scene);
SCENE_EXTERN(sasatest_scene);
SCENE_EXTERN(testroom_scene);

SceneTableEntry gSceneTable[] = {
    TITLED_SCENE(ydan_scene, g_pn_06, 1, 19, 2),
    TITLED_SCENE(ddan_scene, g_pn_08, 1, 20, 3),
    TITLED_SCENE(bdan_scene, g_pn_07, 1, 21, 4),
    TITLED_SCENE(Bmori1_scene, g_pn_01, 2, 22, 5),
    TITLED_SCENE(HIDAN_scene, g_pn_03, 2, 18, 6),
    TITLED_SCENE(MIZUsin_scene, g_pn_04, 1, 23, 7),
    TITLED_SCENE(jyasinzou_scene, g_pn_05, 1, 25, 8),
    TITLED_SCENE(HAKAdan_scene, g_pn_02, 2, 24, 9),
    TITLED_SCENE(HAKAdanCH_scene, g_pn_54, 2, 24, 10),
    TITLED_SCENE(ice_doukutu_scene, g_pn_10, 0, 37, 0),
    UNTITLED_SCENE(ganon_scene, 2, 0, 0),
    TITLED_SCENE(men_scene, g_pn_11, 0, 27, 0),
    TITLED_SCENE(gerudoway_scene, g_pn_49, 0, 40, 0),
    TITLED_SCENE(ganontika_scene, g_pn_09, 0, 26, 0),
    UNTITLED_SCENE(ganon_sonogo_scene, 0, 51, 0),
    UNTITLED_SCENE(ganontikasonogo_scene, 0, 52, 0),
    TITLED_SCENE(takaraya_scene, g_pn_51, 0, 0, 0),
    UNTITLED_SCENE(ydan_boss_scene, 0, 28, 0),
    UNTITLED_SCENE(ddan_boss_scene, 0, 0, 0),
    UNTITLED_SCENE(bdan_boss_scene, 0, 21, 0),
    UNTITLED_SCENE(moribossroom_scene, 1, 0, 0),
    UNTITLED_SCENE(FIRE_bs_scene, 0, 18, 0),
    UNTITLED_SCENE(MIZUsin_bs_scene, 0, 29, 0),
    UNTITLED_SCENE(jyasinboss_scene, 0, 0, 0),
    UNTITLED_SCENE(HAKAdan_bs_scene, 0, 24, 0),
    UNTITLED_SCENE(ganon_boss_scene, 0, 0, 0),
    UNTITLED_SCENE(ganon_final_scene, 0, 38, 0),
    UNTITLED_SCENE(entra_scene, 0, 0, 0),
    UNTITLED_SCENE(entra_n_scene, 0, 0, 0),
    UNTITLED_SCENE(enrui_scene, 0, 0, 0),
    TITLED_SCENE(market_alley_scene, g_pn_18, 0, 0, 0),
    TITLED_SCENE(market_alley_n_scene, g_pn_18, 0, 0, 0),
    TITLED_SCENE(market_day_scene, g_pn_17, 0, 0, 0),
    TITLED_SCENE(market_night_scene, g_pn_17, 0, 0, 0),
    TITLED_SCENE(market_ruins_scene, g_pn_17, 0, 0, 0),
    UNTITLED_SCENE(shrine_scene, 0, 0, 0),
    UNTITLED_SCENE(shrine_n_scene, 0, 0, 0),
    UNTITLED_SCENE(shrine_r_scene, 0, 0, 0),
    UNTITLED_SCENE(kokiri_home_scene, 0, 0, 0),
    UNTITLED_SCENE(kokiri_home3_scene, 0, 0, 0),
    UNTITLED_SCENE(kokiri_home4_scene, 0, 0, 0),
    UNTITLED_SCENE(kokiri_home5_scene, 0, 0, 0),
    UNTITLED_SCENE(kakariko_scene, 0, 0, 0),
    UNTITLED_SCENE(kakariko3_scene, 0, 0, 0),
    TITLED_SCENE(shop1_scene, g_pn_23, 0, 0, 0),
    TITLED_SCENE(kokiri_shop_scene, g_pn_19, 0, 0, 0),
    TITLED_SCENE(golon_scene, g_pn_20, 0, 0, 0),
    TITLED_SCENE(zoora_scene, g_pn_21, 0, 0, 0),
    TITLED_SCENE(drag_scene, g_pn_24, 0, 0, 0),
    TITLED_SCENE(alley_shop_scene, g_pn_24, 0, 0, 0),
    TITLED_SCENE(night_shop_scene, g_pn_56, 0, 0, 0),
    TITLED_SCENE(face_shop_scene, g_pn_50, 0, 0, 0),
    UNTITLED_SCENE(link_home_scene, 0, 0, 0),
    UNTITLED_SCENE(impa_scene, 0, 0, 0),
    TITLED_SCENE(malon_stable_scene, g_pn_48, 0, 0, 0),
    UNTITLED_SCENE(labo_scene, 0, 0, 0),
    TITLED_SCENE(hylia_labo_scene, g_pn_26, 0, 43, 0),
    UNTITLED_SCENE(tent_scene, 0, 0, 0),
    TITLED_SCENE(hut_scene, g_pn_25, 0, 0, 0),
    TITLED_SCENE(daiyousei_izumi_scene, g_pn_13, 0, 33, 0),
    TITLED_SCENE(yousei_izumi_tate_scene, g_pn_45, 0, 39, 0),
    TITLED_SCENE(yousei_izumi_yoko_scene, g_pn_13, 0, 33, 0),
    UNTITLED_SCENE(kakusiana_scene, 0, 31, 0),
    UNTITLED_SCENE(hakaana_scene, 0, 48, 0),
    UNTITLED_SCENE(hakaana2_scene, 0, 39, 0),
    TITLED_SCENE(hakaana_ouke_scene, g_pn_44, 0, 42, 0),
    TITLED_SCENE(syatekijyou_scene, g_pn_15, 0, 34, 0),
    TITLED_SCENE(tokinoma_scene, g_pn_16, 0, 30, 0),
    TITLED_SCENE(kenjyanoma_scene, g_pn_14, 0, 32, 0),
    TITLED_SCENE(hairal_niwa_scene, g_pn_12, 0, 35, 0),
    TITLED_SCENE(hairal_niwa_n_scene, g_pn_12, 0, 35, 0),
    UNTITLED_SCENE(hiral_demo_scene, 0, 0, 0),
    TITLED_SCENE(hakasitarelay_scene, g_pn_57, 0, 48, 0),
    TITLED_SCENE(turibori_scene, g_pn_46, 0, 50, 0),
    TITLED_SCENE(nakaniwa_scene, g_pn_12, 0, 47, 0),
    TITLED_SCENE(bowling_scene, g_pn_47, 0, 41, 0),
    UNTITLED_SCENE(souko_scene, 0, 44, 0),
    UNTITLED_SCENE(miharigoya_scene, 0, 45, 0),
    TITLED_SCENE(mahouya_scene, g_pn_24, 0, 46, 0),
    UNTITLED_SCENE(ganon_demo_scene, 0, 36, 0),
    TITLED_SCENE(kinsuta_scene, g_pn_22, 0, 0, 0),
    TITLED_SCENE(spot00_scene, g_pn_27, 0, 1, 0),
    TITLED_SCENE(spot01_scene, g_pn_28, 0, 2, 0),
    TITLED_SCENE(spot02_scene, g_pn_29, 0, 0, 0),
    TITLED_SCENE(spot03_scene, g_pn_30, 0, 3, 0),
    TITLED_SCENE(spot04_scene, g_pn_31, 0, 4, 0),
    TITLED_SCENE(spot05_scene, g_pn_52, 0, 47, 0),
    TITLED_SCENE(spot06_scene, g_pn_32, 0, 5, 0),
    TITLED_SCENE(spot07_scene, g_pn_33, 0, 6, 0),
    TITLED_SCENE(spot08_scene, g_pn_34, 0, 7, 0),
    TITLED_SCENE(spot09_scene, g_pn_35, 0, 8, 0),
    TITLED_SCENE(spot10_scene, g_pn_36, 0, 9, 0),
    TITLED_SCENE(spot11_scene, g_pn_55, 0, 10, 0),
    TITLED_SCENE(spot12_scene, g_pn_53, 0, 11, 0),
    TITLED_SCENE(spot13_scene, g_pn_37, 0, 12, 0),
    TITLED_SCENE(spot15_scene, g_pn_38, 0, 13, 0),
    TITLED_SCENE(spot16_scene, g_pn_39, 0, 14, 0),
    TITLED_SCENE(spot17_scene, g_pn_40, 0, 15, 0),
    TITLED_SCENE(spot18_scene, g_pn_41, 0, 16, 0),
    TITLED_SCENE(spot20_scene, g_pn_42, 0, 17, 0),
    TITLED_SCENE(ganon_tou_scene, g_pn_43, 0, 36, 0),
    UNTITLED_SCENE(test01_scene, 0, 47, 0),
    UNTITLED_SCENE(besitu_scene, 0, 49, 0),
    UNTITLED_SCENE(depth_test_scene, 0, 0, 0),
    UNTITLED_SCENE(syotes_scene, 0, 0, 0),
    UNTITLED_SCENE(syotes2_scene, 0, 0, 0),
    UNTITLED_SCENE(sutaru_scene, 0, 0, 0),
    TITLED_SCENE(hairal_niwa2_scene, g_pn_12, 0, 35, 0),
    UNTITLED_SCENE(sasatest_scene, 0, 0, 0),
    UNTITLED_SCENE(testroom_scene, 0, 0, 0),
};

Gfx sDefaultDisplayList[] = {
    gsSPSegment(0x08, gEmptyDL),
    gsSPSegment(0x09, gEmptyDL),
    gsSPSegment(0x0A, gEmptyDL),
    gsSPSegment(0x0B, gEmptyDL),
    gsSPSegment(0x0C, gEmptyDL),
    gsSPSegment(0x0D, gEmptyDL),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 128, 128, 128, 128),
    gsDPSetEnvColor(128, 128, 128, 128),
    gsSPEndDisplayList(),
};

// Computes next entrance index based on age and day time to set the fade out transition
void func_800994A0(GlobalContext* globalCtx) {
    s16 computedEntranceIndex;

    if (!IS_DAY) {
        if (!LINK_IS_ADULT) {
            computedEntranceIndex = globalCtx->nextEntranceIndex + 1;
        } else {
            computedEntranceIndex = globalCtx->nextEntranceIndex + 3;
        }
    } else {
        if (!LINK_IS_ADULT) {
            computedEntranceIndex = globalCtx->nextEntranceIndex;
        } else {
            computedEntranceIndex = globalCtx->nextEntranceIndex + 2;
        }
    }

    globalCtx->fadeTransition = gEntranceTable[computedEntranceIndex].field & 0x7F; // Fade out
}

// Scene Draw Config 0
void func_80099550(GlobalContext* globalCtx) {
    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 4725);

    gSPDisplayList(POLY_OPA_DISP++, sDefaultDisplayList);
    gSPDisplayList(POLY_XLU_DISP++, sDefaultDisplayList);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 4735);
}

void* D_8012A2F8[] = {
    gYdanTex_00BA18,
    gYdanTex_00CA18,
};

// Scene Draw Config 19
void func_800995DC(GlobalContext* globalCtx) {
    u32 gameplayFrames = globalCtx->gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 4763);

    gSPSegment(POLY_XLU_DISP++, 0x09,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 127 - (gameplayFrames % 128), (gameplayFrames * 1) % 128,
                                32, 32, 1, gameplayFrames % 128, (gameplayFrames * 1) % 128, 32, 32));

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    { s32 pad; }

    gSPSegment(POLY_OPA_DISP++, 0x08, SEGMENTED_TO_VIRTUAL(D_8012A2F8[gSaveContext.nightFlag]));

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 4783);
}

// Scene Draw Config 28
void func_80099760(GlobalContext* globalCtx) {
    u32 gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 4845);

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_XLU_DISP++, 0x08,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, (gameplayFrames * 2) % 256, 0, 64, 32, 1, 0,
                                (gameplayFrames * 2) % 128, 64, 32));

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 4859);
}

void* gDCEntranceTextures[] = {
    gDCDayEntranceTex,
    gDCNightEntranceTex,
};
void* sDCLavaFloorTextures[] = {
    gDCLavaFloor1Tex, gDCLavaFloor2Tex, gDCLavaFloor3Tex, gDCLavaFloor4Tex,
    gDCLavaFloor5Tex, gDCLavaFloor6Tex, gDCLavaFloor7Tex, gDCLavaFloor8Tex,
};

// Scene Draw Config 20 - Dodongo's Cavern
void func_80099878(GlobalContext* globalCtx) {
    u32 gameplayFrames;
    s32 pad;
    Gfx* displayListHead = Graph_Alloc(globalCtx->state.gfxCtx, 2 * sizeof(Gfx[3]));

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 4905);

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_OPA_DISP++, 0x08, SEGMENTED_TO_VIRTUAL(gDCEntranceTextures[gSaveContext.nightFlag]));
    gSPSegment(POLY_OPA_DISP++, 0x09, SEGMENTED_TO_VIRTUAL(sDCLavaFloorTextures[(s32)(gameplayFrames & 14) >> 1]));
    gSPSegment(POLY_XLU_DISP++, 0x09,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, (gameplayFrames * 1) % 256, 0, 64, 32, 1, 0,
                                (gameplayFrames * 1) % 128, 64, 32));
    gSPSegment(POLY_OPA_DISP++, 0x0A,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, (gameplayFrames * 1) % 128, 32, 32, 1, 0,
                                (gameplayFrames * 2) % 128, 32, 32));

    { s32 pad2[2]; }

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    gSPSegment(POLY_OPA_DISP++, 0x0B, displayListHead);
    gDPPipeSync(displayListHead++);
    gDPSetEnvColor(displayListHead++, 255, 255, 255, globalCtx->roomCtx.unk_74[BGDODOAGO_EYE_LEFT]);
    gSPEndDisplayList(displayListHead++);

    gSPSegment(POLY_OPA_DISP++, 0x0C, displayListHead);
    gDPPipeSync(displayListHead++);
    gDPSetEnvColor(displayListHead++, 255, 255, 255, globalCtx->roomCtx.unk_74[BGDODOAGO_EYE_RIGHT]);
    gSPEndDisplayList(displayListHead);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 4956);
}

// Scene Draw Config 30
void func_80099BD8(GlobalContext* globalCtx) {
    f32 temp;
    Gfx* displayListHead = Graph_Alloc(globalCtx->state.gfxCtx, 18 * sizeof(Gfx));

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 5069);

    temp = globalCtx->roomCtx.unk_74[0] / 255.0f;

    gSPSegment(POLY_XLU_DISP++, 0x08, displayListHead);
    gSPSegment(POLY_OPA_DISP++, 0x08, displayListHead);
    gDPSetPrimColor(displayListHead++, 0, 0, 255 - (u8)(185.0f * temp), 255 - (u8)(145.0f * temp),
                    255 - (u8)(105.0f * temp), 255);
    gSPEndDisplayList(displayListHead++);

    gSPSegment(POLY_XLU_DISP++, 0x09, displayListHead);
    gSPSegment(POLY_OPA_DISP++, 0x09, displayListHead);
    gDPSetPrimColor(displayListHead++, 0, 0, 76 + (u8)(6.0f * temp), 76 + (u8)(34.0f * temp), 76 + (u8)(74.0f * temp),
                    255);
    gSPEndDisplayList(displayListHead++);

    gSPSegment(POLY_OPA_DISP++, 0x0A, displayListHead);
    gSPSegment(POLY_XLU_DISP++, 0x0A, displayListHead);
    gDPPipeSync(displayListHead++);
    gDPSetEnvColor(displayListHead++, 0, 0, 0, globalCtx->roomCtx.unk_74[0]);
    gSPEndDisplayList(displayListHead++);

    gSPSegment(POLY_OPA_DISP++, 0x0B, displayListHead);
    gSPSegment(POLY_XLU_DISP++, 0x0B, displayListHead);
    gDPSetPrimColor(displayListHead++, 0, 0, 89 + (u8)(166.0f * temp), 89 + (u8)(166.0f * temp),
                    89 + (u8)(166.0f * temp), 255);
    gDPPipeSync(displayListHead++);
    gDPSetEnvColor(displayListHead++, 0, 0, 0, globalCtx->roomCtx.unk_74[0]);
    gSPEndDisplayList(displayListHead++);

    gSPSegment(POLY_OPA_DISP++, 0x0C, displayListHead);
    gSPSegment(POLY_XLU_DISP++, 0x0C, displayListHead);
    gDPSetPrimColor(displayListHead++, 0, 0, 255 + (u8)(179.0f * temp), 255 + (u8)(179.0f * temp),
                    255 + (u8)(179.0f * temp), 255);
    gDPPipeSync(displayListHead++);
    gDPSetEnvColor(displayListHead++, 0, 0, 0, globalCtx->roomCtx.unk_74[0]);
    gSPEndDisplayList(displayListHead++);

    gSPSegment(POLY_OPA_DISP++, 0x0D, displayListHead);
    gSPSegment(POLY_XLU_DISP++, 0x0D, displayListHead);
    gDPPipeSync(displayListHead++);
    gDPSetEnvColor(displayListHead++, 0, 0, 0, globalCtx->roomCtx.unk_74[1]);
    gSPEndDisplayList(displayListHead);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 5145);

    if (gSaveContext.sceneSetupIndex == 5) {
        gCustomLensFlareOn = true;
        gCustomLensFlarePos.x = -20.0f;
        gCustomLensFlarePos.y = 1220.0f;
        gCustomLensFlarePos.z = -684.0f;
        gLensFlareScale = 10;
        gLensFlareColorIntensity = 8.0f;
        gLensFlareScreenFillAlpha = 200;
    }
}

// Scene Draw Config 31
void func_8009A45C(GlobalContext* globalCtx) {
    u32 gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 5171);

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_XLU_DISP++, 0x08, Gfx_TexScroll(globalCtx->state.gfxCtx, 0, (gameplayFrames * 1) % 64, 256, 16));
    gSPSegment(POLY_XLU_DISP++, 0x09,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 127 - (gameplayFrames % 128), (gameplayFrames * 1) % 128,
                                32, 32, 1, gameplayFrames % 128, (gameplayFrames * 1) % 128, 32, 32));
    gSPSegment(
        POLY_OPA_DISP++, 0x0A,
        Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, 0, 32, 32, 1, 0, 127 - (gameplayFrames * 1) % 128, 32, 32));
    gSPSegment(POLY_OPA_DISP++, 0x0B, Gfx_TexScroll(globalCtx->state.gfxCtx, 0, (gameplayFrames * 1) % 128, 32, 32));
    gSPSegment(POLY_XLU_DISP++, 0x0C,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, (gameplayFrames * 50) % 2048, 8, 512, 1, 0,
                                (gameplayFrames * 60) % 2048, 8, 512));
    gSPSegment(POLY_OPA_DISP++, 0x0D,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, 0, 32, 64, 1, 0, (gameplayFrames * 1) % 128, 32, 32));

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 5212);
}

// Scene Draw Config 32
void func_8009A798(GlobalContext* globalCtx) {
    u32 gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 5226);

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_XLU_DISP++, 0x08, Gfx_TexScroll(globalCtx->state.gfxCtx, 0, (gameplayFrames * 2) % 256, 64, 64));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gSPSegment(POLY_OPA_DISP++, 0x0A,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 127 - gameplayFrames % 128, (gameplayFrames * 1) % 128, 32,
                                32, 1, gameplayFrames % 128, (gameplayFrames * 1) % 128, 32, 32));
    gSPSegment(POLY_XLU_DISP++, 0x09,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 127 - (gameplayFrames * 1) % 128,
                                (gameplayFrames * 1) % 256, 32, 64, 1, 0, 0, 32, 128));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 5264);
}

// Scene Draw Config 33
void func_8009A9DC(GlobalContext* globalCtx) {
    u32 gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 5278);

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_XLU_DISP++, 0x08,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 127 - gameplayFrames % 128, (gameplayFrames * 3) % 256, 32,
                                64, 1, gameplayFrames % 128, (gameplayFrames * 3) % 256, 32, 64));
    gSPSegment(POLY_XLU_DISP++, 0x09,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 127 - gameplayFrames % 128, (gameplayFrames * 3) % 128, 32,
                                32, 1, gameplayFrames % 128, (gameplayFrames * 3) % 128, 32, 32));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 5301);
}

// Scene Draw Config 48
void func_8009AB98(GlobalContext* globalCtx) {
    u32 gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 5317);

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_XLU_DISP++, 0x08, Gfx_TexScroll(globalCtx->state.gfxCtx, 0, gameplayFrames % 64, 256, 16));

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 5330);
}

// Scene Draw Config 39
void func_8009ACA8(GlobalContext* globalCtx) {
    u32 gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 5346);

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_XLU_DISP++, 0x08,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 127 - gameplayFrames % 128, (gameplayFrames * 3) % 128, 32,
                                32, 1, gameplayFrames % 128, (gameplayFrames * 3) % 128, 32, 32));
    gSPSegment(POLY_XLU_DISP++, 0x09, Gfx_TexScroll(globalCtx->state.gfxCtx, 0, gameplayFrames % 64, 256, 16));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 5367);
}

// Scene Draw Config 24
void func_8009AE30(GlobalContext* globalCtx) {
    u32 gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 5384);

    gameplayFrames = globalCtx->gameplayFrames;

    if (globalCtx->sceneNum == SCENE_HAKADAN_BS) {
        gSPSegment(POLY_OPA_DISP++, 0x08,
                   Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, (gameplayFrames * 2) % 128, 0, 32, 32, 1,
                                    (gameplayFrames * 2) % 128, 0, 32, 32));
    } else {
        gSPSegment(POLY_XLU_DISP++, 0x08,
                   Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, (gameplayFrames * 2) % 128, 0, 32, 32, 1,
                                    (gameplayFrames * 2) % 128, 0, 32, 32));
    }

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 5416);
}

void* sThievesHideoutEntranceTextures[] = {
    gThievesHideoutDayEntranceTex,
    gThievesHideoutNightEntranceTex,
};

// Scene Draw Config 40
void func_8009AFE0(GlobalContext* globalCtx) {
    u32 gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 5490);

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_OPA_DISP++, 0x09, Gfx_TexScroll(globalCtx->state.gfxCtx, 0, (gameplayFrames * 3) % 128, 32, 32));

    { s32 pad[2]; }

    gSPSegment(POLY_XLU_DISP++, 0x08, SEGMENTED_TO_VIRTUAL(sThievesHideoutEntranceTextures[gSaveContext.nightFlag]));

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 5507);
}

void* D_8012A330[] = {
    gWaterTempleDayEntranceTex,
    gWaterTempleNightEntranceTex,
};

// Scene Draw Config 23 (Water Temple)
void func_8009B0FC(GlobalContext* globalCtx) {
    u32 gameplayFrames;
    s32 spB0;
    s32 spAC;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 5535);

    if (1) {} // Necessary to match

    spB0 = (globalCtx->roomCtx.unk_74[1] >> 8) & 0xFF;
    spAC = globalCtx->roomCtx.unk_74[1] & 0xFF;
    gameplayFrames = globalCtx->gameplayFrames;

    gSPSegment(POLY_XLU_DISP++, 0x08, SEGMENTED_TO_VIRTUAL(D_8012A330[gSaveContext.nightFlag]));

    if (spB0 == 1) {
        gSPSegment(POLY_OPA_DISP++, 0x08,
                   Gfx_TwoTexScrollEnvColor(globalCtx->state.gfxCtx, 0, gameplayFrames * 1, 0, 32, 32, 1, 0, 0, 32, 32,
                                            0, 0, 0, spAC));
    } else if (spB0 < 1) {
        gSPSegment(POLY_OPA_DISP++, 0x08,
                   Gfx_TwoTexScrollEnvColor(globalCtx->state.gfxCtx, 0, gameplayFrames * 1, 0, 32, 32, 1, 0, 0, 32, 32,
                                            0, 0, 0, 255));
    } else {
        gSPSegment(POLY_OPA_DISP++, 0x08,
                   Gfx_TwoTexScrollEnvColor(globalCtx->state.gfxCtx, 0, gameplayFrames * 1, 0, 32, 32, 1, 0, 0, 32, 32,
                                            0, 0, 0, 160));
    }

    if (spB0 == 2) {
        gSPSegment(POLY_OPA_DISP++, 0x09,
                   Gfx_TwoTexScrollEnvColor(globalCtx->state.gfxCtx, 0, gameplayFrames * 1, 0, 32, 32, 1, 0, 0, 32, 32,
                                            0, 0, 0, spAC));
    } else if (spB0 < 2) {
        gSPSegment(POLY_OPA_DISP++, 0x09,
                   Gfx_TwoTexScrollEnvColor(globalCtx->state.gfxCtx, 0, gameplayFrames * 1, 0, 32, 32, 1, 0, 0, 32, 32,
                                            0, 0, 0, 255));
    } else {
        gSPSegment(POLY_OPA_DISP++, 0x09,
                   Gfx_TwoTexScrollEnvColor(globalCtx->state.gfxCtx, 0, gameplayFrames * 1, 0, 32, 32, 1, 0, 0, 32, 32,
                                            0, 0, 0, 160));
    }

    if (spB0 != 0) {
        gSPSegment(POLY_OPA_DISP++, 0x0A,
                   Gfx_TwoTexScrollEnvColor(globalCtx->state.gfxCtx, 0, gameplayFrames * 1, 0, 32, 32, 1, 0, 0, 32, 32,
                                            0, 0, 0, 160));
        gSPSegment(POLY_OPA_DISP++, 0x0B,
                   Gfx_TwoTexScrollEnvColor(globalCtx->state.gfxCtx, 0, gameplayFrames * 3, 0, 32, 32, 1, 0, 0, 32, 32,
                                            0, 0, 0, 180));
    } else {
        gSPSegment(POLY_OPA_DISP++, 0x0A,
                   Gfx_TwoTexScrollEnvColor(globalCtx->state.gfxCtx, 0, (gameplayFrames * 1) % 128, 0, 32, 32, 1, 0, 0,
                                            32, 32, 0, 0, 0, 160 + (s32)((spAC / 200.0f) * 95.0f)));
        gSPSegment(POLY_OPA_DISP++, 0x0B,
                   Gfx_TwoTexScrollEnvColor(globalCtx->state.gfxCtx, 0, gameplayFrames * 3, 0, 32, 32, 1, 0, 0, 32, 32,
                                            0, 0, 0, 185 + (s32)((spAC / 200.0f) * 70.0f)));
    }

    gSPSegment(POLY_XLU_DISP++, 0x0C,
               Gfx_TwoTexScrollEnvColor(globalCtx->state.gfxCtx, 0, gameplayFrames * 1, gameplayFrames * 1, 32, 32, 1,
                                        0, 127 - (gameplayFrames * 1), 32, 32, 0, 0, 0, 128));
    gSPSegment(POLY_XLU_DISP++, 0x0D,
               Gfx_TwoTexScrollEnvColor(globalCtx->state.gfxCtx, 0, gameplayFrames * 4, 0, 32, 32, 1,
                                        gameplayFrames * 4, 0, 32, 32, 0, 0, 0, 128));

    { s32 pad[2]; }

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 5644);
}

// Scene Draw Config 29
void func_8009B86C(GlobalContext* globalCtx) {
    u32 gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 5791);

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_OPA_DISP++, 0x08,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, gameplayFrames * 1, 0, 32, 32, 1, 0, 0, 32, 32));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, globalCtx->roomCtx.unk_74[0]);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 145);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 5808);
}

// Scene Draw Config 34
void func_8009B9BC(GlobalContext* globalCtx) {
    u32 gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 5822);

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_OPA_DISP++, 0x08, Gfx_TexScroll(globalCtx->state.gfxCtx, 0, gameplayFrames % 64, 4, 16));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 5836);
}

// Scene Draw Config 35
void func_8009BAA4(GlobalContext* globalCtx) {
    u32 gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 5850);

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_XLU_DISP++, 0x08,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 127 - gameplayFrames % 128, (gameplayFrames * 3) % 128, 32,
                                32, 1, gameplayFrames % 128, (gameplayFrames * 3) % 128, 32, 32));

    if (globalCtx->sceneNum == SCENE_HAIRAL_NIWA) {
        gSPSegment(POLY_XLU_DISP++, 0x09,
                   Gfx_TexScroll(globalCtx->state.gfxCtx, 0, (gameplayFrames * 10) % 256, 32, 64));
    }

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 5876);
}

// Scene Draw Config 36
void func_8009BC44(GlobalContext* globalCtx) {
    u32 gameplayFrames;
    s8 sp83;

    if (1) {} // Necessary to match

    sp83 = coss((globalCtx->gameplayFrames * 1500) & 0xFFFF) >> 8;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 5894);

    gameplayFrames = globalCtx->gameplayFrames;

    if (globalCtx->sceneNum == SCENE_GANON_TOU) {
        gSPSegment(POLY_XLU_DISP++, 0x09,
                   Gfx_TexScroll(globalCtx->state.gfxCtx, 0, (gameplayFrames * 1) % 256, 64, 64));
        gSPSegment(POLY_XLU_DISP++, 0x08,
                   Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, 255 - (gameplayFrames * 1) % 256, 64, 64, 1, 0,
                                    (gameplayFrames * 1) % 256, 64, 64));
    }

    gSPSegment(POLY_OPA_DISP++, 0x0B,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 255 - (gameplayFrames * 1) % 128,
                                (gameplayFrames * 1) % 128, 32, 32, 1, (gameplayFrames * 1) % 128,
                                (gameplayFrames * 1) % 128, 32, 32));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    sp83 = (sp83 >> 1) + 192;
    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, sp83, sp83, sp83, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 5930);
}

// Screen Shake for Ganon's Tower Collapse
void func_8009BEEC(GlobalContext* globalCtx) {
    s32 var;

    if (globalCtx->gameplayFrames % 128 == 13) {
        var = Quake_Add(GET_ACTIVE_CAM(globalCtx), 2);
        Quake_SetSpeed(var, 10000);
        Quake_SetQuakeValues(var, 4, 0, 0, 0);
        Quake_SetCountdown(var, 127);
    }

    if ((globalCtx->gameplayFrames % 64 == 0) && (Rand_ZeroOne() > 0.6f)) {
        var = Quake_Add(GET_ACTIVE_CAM(globalCtx), 3);
        Quake_SetSpeed(var, 32000.0f + (Rand_ZeroOne() * 3000.0f));
        Quake_SetQuakeValues(var, 10.0f - (Rand_ZeroOne() * 9.0f), 0, 0, 0);
        Quake_SetCountdown(var, 48.0f - (Rand_ZeroOne() * 15.0f));
    }
}

// Scene Draw Config 38
void func_8009C0AC(GlobalContext* globalCtx) {
    u32 gameplayFrames;
    s8 sp7B;

    if (1) {} // Necessary to match

    sp7B = coss((globalCtx->gameplayFrames * 1500) & 0xFFFF) >> 8;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 5968);

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_OPA_DISP++, 0x08,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, (gameplayFrames * 1) % 512, 64, 128, 1, 0,
                                511 - (gameplayFrames * 1) % 512, 64, 128));
    gSPSegment(POLY_OPA_DISP++, 0x09,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, (gameplayFrames * 1) % 256, 32, 64, 1, 0,
                                255 - (gameplayFrames * 1) % 256, 32, 64));
    gSPSegment(POLY_XLU_DISP++, 0x0A,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, (gameplayFrames * 20) % 2048, 16, 512, 1, 0,
                                (gameplayFrames * 30) % 2048, 16, 512));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    sp7B = (sp7B >> 1) + 192;
    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, sp7B, sp7B, sp7B, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 6004);

    if (Flags_GetSwitch(globalCtx, 0x37)) {
        if ((globalCtx->sceneNum == SCENE_GANON_DEMO) || (globalCtx->sceneNum == SCENE_GANON_FINAL) ||
            (globalCtx->sceneNum == SCENE_GANON_SONOGO) || (globalCtx->sceneNum == SCENE_GANONTIKA_SONOGO)) {
            func_8009BEEC(globalCtx);
        }
    }
}

void* sIceCavernEntranceTextures[] = {
    gIceCavernDayEntranceTex,
    gIceCavernNightEntranceTex,
};

// Scene Draw Config 37
void func_8009C3EC(GlobalContext* globalCtx) {
    u32 gameplayFrames;

    if (0) {} // Necessary to match

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 6042);

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_XLU_DISP++, 0x08, SEGMENTED_TO_VIRTUAL(sIceCavernEntranceTextures[gSaveContext.nightFlag]));
    gSPSegment(POLY_OPA_DISP++, 0x09,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 127 - gameplayFrames % 128, (gameplayFrames * 1) % 128, 32,
                                32, 1, gameplayFrames % 128, (gameplayFrames * 1) % 128, 32, 32));
    gSPSegment(POLY_XLU_DISP++, 0x0A,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 127 - gameplayFrames % 128, (gameplayFrames * 1) % 128, 32,
                                32, 1, gameplayFrames % 128, (gameplayFrames * 1) % 128, 32, 32));

    { s32 pad[2]; }

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 6076);
}

// Scene Draw Config 42
void func_8009C608(GlobalContext* globalCtx) {
    u32 gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 6151);

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_XLU_DISP++, 0x08, Gfx_TexScroll(globalCtx->state.gfxCtx, 0, (gameplayFrames * 1) % 64, 256, 16));
    gSPSegment(POLY_XLU_DISP++, 0x09,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, (gameplayFrames * 60) % 2048, 8, 512, 1, 0,
                                (gameplayFrames * 50) % 2048, 8, 512));
    gSPSegment(POLY_OPA_DISP++, 0x0A,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 127 - (gameplayFrames * 1) % 128, 0, 32, 32, 1,
                                (gameplayFrames * 1) % 128, 0, 32, 32));
    gSPSegment(POLY_XLU_DISP++, 0x0B,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, 1023 - (gameplayFrames * 6) % 1024, 16, 256, 1, 0,
                                1023 - (gameplayFrames * 3) % 1024, 16, 256));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 6187);
}

// Scene Draw Config 43
void func_8009C8B8(GlobalContext* globalCtx) {
    u32 gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 6201);

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_OPA_DISP++, 0x08,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, 0, 32, 32, 1, 0, (gameplayFrames * 1) % 128, 32, 32));
    gSPSegment(POLY_XLU_DISP++, 0x0A,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 127 - gameplayFrames % 128, (gameplayFrames * 1) % 128, 32,
                                32, 1, gameplayFrames % 128, (gameplayFrames * 1) % 128, 32, 32));
    gSPSegment(POLY_XLU_DISP++, 0x09,
               Gfx_TexScroll(globalCtx->state.gfxCtx, 0, 255 - (gameplayFrames * 10) % 256, 32, 64));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 6232);
}

// Scene Draw Config 47
void func_8009CAC0(GlobalContext* globalCtx) {
    u32 gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 6249);

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_XLU_DISP++, 0x08,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 127 - gameplayFrames % 128, (gameplayFrames * 1) % 128, 32,
                                32, 1, gameplayFrames % 128, (gameplayFrames * 1) % 128, 32, 32));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 6264);
}

void* sGTGEntranceTextures[] = {
    gGTGDayEntranceTex,
    gGTGNightEntranceTex,
};

// Scene Draw Config 27
void func_8009CC00(GlobalContext* globalCtx) {
    u32 gameplayFrames;

    if (0) {} // Necessary to match

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 6290);

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_XLU_DISP++, 0x08, SEGMENTED_TO_VIRTUAL(sGTGEntranceTextures[gSaveContext.nightFlag]));
    gSPSegment(POLY_OPA_DISP++, 0x09,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 127 - gameplayFrames % 128, (gameplayFrames * 1) % 128, 32,
                                32, 1, gameplayFrames % 128, (gameplayFrames * 1) % 128, 32, 32));
    gSPSegment(POLY_XLU_DISP++, 0x0A,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 127 - gameplayFrames % 128, (gameplayFrames * 1) % 128, 32,
                                32, 1, gameplayFrames % 128, (gameplayFrames * 1) % 128, 32, 32));

    { s32 pad[2]; }

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 6320);
}

Gfx* Gfx_TwoTexScrollPrimColor(GraphicsContext* gfxCtx, s32 tile1, u32 x1, u32 y1, s32 width1, s32 height1, s32 tile2,
                               u32 x2, u32 y2, s32 width2, s32 height2, s32 r, s32 g, s32 b, s32 a) {
    Gfx* displayList = Graph_Alloc(gfxCtx, 10 * sizeof(Gfx));

    x1 %= 2048;
    y1 %= 2048;
    x2 %= 2048;
    y2 %= 2048;

    gDPTileSync(displayList);
    gDPSetTileSize(displayList + 1, tile1, x1, y1, (x1 + ((width1 - 1) << 2)), (y1 + ((height1 - 1) << 2)));
    gDPTileSync(displayList + 2);
    gDPSetTileSize(displayList + 3, tile2, x2, y2, (x2 + ((width2 - 1) << 2)), (y2 + ((height2 - 1) << 2)));
    gDPSetPrimColor(displayList + 4, 0, 0, r, g, b, a);
    gSPEndDisplayList(displayList + 5);

    return displayList;
}

// Scene Draw Config 50
void func_8009CF84(GlobalContext* globalCtx) {
    u32 gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 6433);

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_XLU_DISP++, 0x08,
               Gfx_TwoTexScrollPrimColor(globalCtx->state.gfxCtx, 0, 127 - gameplayFrames % 128,
                                         (gameplayFrames * 1) % 128, 32, 32, 1, gameplayFrames % 128,
                                         (gameplayFrames * 1) % 128, 32, 32, 255, 255, 255,
                                         globalCtx->roomCtx.unk_74[0] + 127));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 6449);
}

// Scene Draw Config 41
void func_8009D0E8(GlobalContext* globalCtx) {
    u32 gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 6463);

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_XLU_DISP++, 0x08,
               Gfx_TexScroll(globalCtx->state.gfxCtx, 127 - (gameplayFrames * 4) % 128, 0, 32, 32));
    gSPSegment(POLY_OPA_DISP++, 0x09, Gfx_TexScroll(globalCtx->state.gfxCtx, 0, (gameplayFrames * 5) % 64, 16, 16));
    gSPSegment(POLY_OPA_DISP++, 0x0A,
               Gfx_TexScroll(globalCtx->state.gfxCtx, 0, 63 - (gameplayFrames * 2) % 64, 16, 16));
    gSPSegment(
        POLY_XLU_DISP++, 0x0B,
        Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, 127 - (gameplayFrames * 3) % 128, 32, 32, 1, 0, 0, 32, 32));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 6491);
}

void* sLonLonHouseEntranceTextures[] = {
    gLonLonHouseDayEntranceTex,
    gLonLonHouseNightEntranceTex,
};

// Scene Draw Config 44
void func_8009D31C(GlobalContext* globalCtx) {
    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 6515);

    { s32 pad[2]; }

    gSPSegment(POLY_XLU_DISP++, 0x08, SEGMENTED_TO_VIRTUAL(sLonLonHouseEntranceTextures[gSaveContext.nightFlag]));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 6528);
}

void* sGuardHouseView2Textures[] = {
    gGuardHouseOutSideView1DayTex,
    gGuardHouseOutSideView1NightTex,
};
void* sGuardHouseView1Textures[] = {
    gGuardHouseOutSideView2DayTex,
    gGuardHouseOutSideView2NightTex,
};

// Scene Draw Config 45
void func_8009D438(GlobalContext* globalCtx) {
    s32 var;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 6560);

    if (LINK_IS_ADULT) {
        var = 1;
    } else {
        var = gSaveContext.nightFlag;
    }

    gSPSegment(POLY_OPA_DISP++, 0x08, SEGMENTED_TO_VIRTUAL(sGuardHouseView1Textures[var]));
    gSPSegment(POLY_OPA_DISP++, 0x09, SEGMENTED_TO_VIRTUAL(sGuardHouseView2Textures[var]));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 6581);
}

// Scene Draw Config 46
void func_8009D5B4(GlobalContext* globalCtx) {
    u32 gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 6595);

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_OPA_DISP++, 0x08, Gfx_TexScroll(globalCtx->state.gfxCtx, 0, (gameplayFrames * 3) % 128, 32, 32));
    gSPSegment(POLY_XLU_DISP++, 0x09,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, 1023 - (gameplayFrames * 3) % 1024, 16, 256, 1, 0,
                                1023 - (gameplayFrames * 6) % 1024, 16, 256));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 6615);
}

void* sForestTempleEntranceTextures[] = {
    gForestTempleDayEntranceTex,
    gForestTempleNightEntranceTex,
};

// Scene Draw Config 22
void func_8009D758(GlobalContext* globalCtx) {
    u32 gameplayFrames;

    if (0) {} // Necessary to match

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 6640);

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_XLU_DISP++, 0x08, SEGMENTED_TO_VIRTUAL(sForestTempleEntranceTextures[gSaveContext.nightFlag]));
    gSPSegment(POLY_XLU_DISP++, 0x09,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 127 - gameplayFrames % 128, (gameplayFrames * 1) % 128, 32,
                                32, 1, gameplayFrames % 128, (gameplayFrames * 1) % 128, 32, 32));
    gSPSegment(POLY_OPA_DISP++, 0x0A,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 127 - gameplayFrames % 128, (gameplayFrames * 1) % 128, 32,
                                32, 1, gameplayFrames % 128, (gameplayFrames * 1) % 128, 32, 32));

    { s32 pad[2]; }

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 6671);
}

void* sSpiritTempleEntranceTextures[] = {
    gSpiritTempleDayEntranceTex,
    gSpiritTempleNightEntranceTex,
};

// Scene Draw Config 25
void func_8009D974(GlobalContext* globalCtx) {
    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 6752);

    { s32 pad[2]; }

    gSPSegment(POLY_XLU_DISP++, 0x08, SEGMENTED_TO_VIRTUAL(sSpiritTempleEntranceTextures[gSaveContext.nightFlag]));

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 6762);
}

// Scene Draw Config 1
void func_8009DA30(GlobalContext* globalCtx) {
    u32 gameplayFrames;
    Gfx* displayListHead;

    displayListHead = Graph_Alloc(globalCtx->state.gfxCtx, 3 * sizeof(Gfx));

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 6814);

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_XLU_DISP++, 0x08,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 127 - gameplayFrames % 128, (gameplayFrames * 3) % 128, 32,
                                32, 1, gameplayFrames % 128, (gameplayFrames * 3) % 128, 32, 32));
    gSPSegment(POLY_XLU_DISP++, 0x09,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 127 - gameplayFrames % 128, (gameplayFrames * 10) % 128, 32,
                                32, 1, gameplayFrames % 128, (gameplayFrames * 10) % 128, 32, 32));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    gSPSegment(POLY_XLU_DISP++, 0x0A, displayListHead);

    if ((gSaveContext.dayTime >= 0x4AAC) && (gSaveContext.dayTime <= 0xC555)) {
        gSPEndDisplayList(displayListHead);
    } else {
        if (gSaveContext.dayTime > 0xC555) {
            if (globalCtx->roomCtx.unk_74[0] != 255) {
                Math_StepToS(&globalCtx->roomCtx.unk_74[0], 255, 5);
            }
        } else if (gSaveContext.dayTime >= 0x4000) {
            if (globalCtx->roomCtx.unk_74[0] != 0) {
                Math_StepToS(&globalCtx->roomCtx.unk_74[0], 0, 10);
            }
        }

        gDPSetPrimColor(displayListHead++, 0, 0, 255, 255, 255, globalCtx->roomCtx.unk_74[0]);
        gSPDisplayList(displayListHead++, spot00_room_0DL_012B20);
        gSPEndDisplayList(displayListHead);
    }

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 6866);
}

void* sKakarikoWindowTextures[] = {
    gKakarikoVillageDayWindowTex,
    gKakarikoVillageNightWindowTex,
};

// Scene Draw Config 2
void func_8009DD5C(GlobalContext* globalCtx) {
    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 6890);

    { s32 pad[2]; }

    gSPSegment(POLY_OPA_DISP++, 0x08, SEGMENTED_TO_VIRTUAL(sKakarikoWindowTextures[gSaveContext.nightFlag]));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 6903);
}

// Scene Draw Config 3
void func_8009DE78(GlobalContext* globalCtx) {
    u32 gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 6917);

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_XLU_DISP++, 0x08,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 127 - gameplayFrames % 128, (gameplayFrames * 6) % 128, 32,
                                32, 1, gameplayFrames % 128, (gameplayFrames * 6) % 128, 32, 32));
    gSPSegment(POLY_XLU_DISP++, 0x09,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 127 - gameplayFrames % 128, (gameplayFrames * 3) % 128, 32,
                                32, 1, gameplayFrames % 128, (gameplayFrames * 3) % 128, 32, 32));
    gSPSegment(POLY_XLU_DISP++, 0x0A,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 127 - gameplayFrames % 128, (gameplayFrames * 1) % 128, 32,
                                32, 1, gameplayFrames % 128, (gameplayFrames * 1) % 128, 32, 32));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 6948);
}

// Scene Draw Config 4
void func_8009E0B8(GlobalContext* globalCtx) {
    u32 gameplayFrames;
    u8 spA3;
    u16 spA0;
    Gfx* displayListHead;

    spA3 = 128;
    spA0 = 500;
    displayListHead = Graph_Alloc(globalCtx->state.gfxCtx, 6 * sizeof(Gfx));

    if (1) {}
    if (1) {}

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 6965);

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_XLU_DISP++, 0x09,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 127 - gameplayFrames % 128, (gameplayFrames * 1) % 128, 32,
                                32, 1, gameplayFrames % 128, (gameplayFrames * 1) % 128, 32, 32));
    gSPSegment(POLY_XLU_DISP++, 0x08,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 127 - gameplayFrames % 128, (gameplayFrames * 10) % 128, 32,
                                32, 1, gameplayFrames % 128, (gameplayFrames * 10) % 128, 32, 32));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    if (gSaveContext.sceneSetupIndex == 4) {
        spA3 = 255 - (u8)globalCtx->roomCtx.unk_74[0];
    } else if (gSaveContext.sceneSetupIndex == 6) {
        spA0 = globalCtx->roomCtx.unk_74[0] + 500;
    } else if (((gSaveContext.sceneSetupIndex < 4) || LINK_IS_ADULT) && (gSaveContext.eventChkInf[0] & 0x80)) {
        spA0 = 2150;
    }

    gSPSegment(POLY_OPA_DISP++, 0x0A, displayListHead);
    gDPPipeSync(displayListHead++);
    gDPSetEnvColor(displayListHead++, 128, 128, 128, spA3);
    gSPEndDisplayList(displayListHead++);

    gSPSegment(POLY_XLU_DISP++, 0x0B, displayListHead);
    gSPSegment(POLY_OPA_DISP++, 0x0B, displayListHead);
    gDPPipeSync(displayListHead++);
    gDPSetEnvColor(displayListHead++, 128, 128, 128, spA0 * 0.1f);
    gSPEndDisplayList(displayListHead);

    gSPSegment(POLY_OPA_DISP++, 0x0C,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, (s16)(-globalCtx->roomCtx.unk_74[0] * 0.02f), 32, 16, 1,
                                0, (s16)(-globalCtx->roomCtx.unk_74[0] * 0.02f), 32, 16));

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 7044);
}

// Scene Draw Config 5
void func_8009E54C(GlobalContext* globalCtx) {
    u32 gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 7058);

    if ((gSaveContext.sceneSetupIndex > 3) || (LINK_IS_ADULT && !(gSaveContext.eventChkInf[6] & 0x200))) {
        globalCtx->roomCtx.unk_74[0] = 87;
    }

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_OPA_DISP++, 0x08,
               Gfx_TwoTexScrollEnvColor(globalCtx->state.gfxCtx, 0, gameplayFrames, gameplayFrames, 32, 32, 1, 0, 0, 32,
                                        32, 0, 0, 0, globalCtx->roomCtx.unk_74[0] + 168));
    gSPSegment(POLY_OPA_DISP++, 0x09,
               Gfx_TwoTexScrollEnvColor(globalCtx->state.gfxCtx, 0, -gameplayFrames, -gameplayFrames, 32, 32, 1, 0, 0,
                                        16, 64, 0, 0, 0, globalCtx->roomCtx.unk_74[0] + 168));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 255, 255, 255, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 7097);
}

void* sZorasDomainEntranceTextures[] = {
    gZorasDomainDayEntranceTex,
    gZorasDomainNightEntranceTex,
};

// Scene Draw Config 6
void func_8009E730(GlobalContext* globalCtx) {
    u32 gameplayFrames;
    u32 var;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 7123);

    gameplayFrames = globalCtx->gameplayFrames;
    var = 127 - (gameplayFrames * 1) % 128;
    if (LINK_IS_ADULT) {
        var = 0;
    }
    gSPSegment(POLY_OPA_DISP++, 0x0C, Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, 0, 64, 32, 1, 0, var, 64, 32));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gSPSegment(POLY_XLU_DISP++, 0x08, SEGMENTED_TO_VIRTUAL(sZorasDomainEntranceTextures[gSaveContext.nightFlag]));

    { s32 pad[2]; }

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 7147);
}

// Scene Draw Config 7
void func_8009E8C0(GlobalContext* globalCtx) {
    u32 gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 7161);

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_OPA_DISP++, 0x08,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, (gameplayFrames * 1) % 128, 0, 32, 32, 1, 0, 0, 32, 32));
    gSPSegment(POLY_XLU_DISP++, 0x09,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, 255 - (gameplayFrames * 2) % 256, 64, 64, 1, 0,
                                255 - (gameplayFrames * 2) % 256, 64, 64));
    gSPSegment(POLY_XLU_DISP++, 0x0A,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, (gameplayFrames * 1) % 128, 32, 32, 1, 0,
                                (gameplayFrames * 1) % 128, 32, 32));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 7192);
}

// Scene Draw Config 8
void func_8009EAD8(GlobalContext* globalCtx) {
    u32 gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 7206);

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_XLU_DISP++, 0x08,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, (gameplayFrames * 3) % 1024, 32, 256, 1, 0,
                                (gameplayFrames * 3) % 1024, 32, 256));
    gSPSegment(POLY_XLU_DISP++, 0x09,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, (gameplayFrames * 1) % 256, 64, 64, 1, 0,
                                (gameplayFrames * 1) % 256, 64, 64));
    gSPSegment(POLY_XLU_DISP++, 0x0A,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, (gameplayFrames * 2) % 128, 32, 32, 1, 0,
                                (gameplayFrames * 2) % 128, 32, 32));
    gSPSegment(
        POLY_OPA_DISP++, 0x0B,
        Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, 0, 32, 32, 1, 0, 127 - (gameplayFrames * 3) % 128, 32, 32));
    gSPSegment(POLY_XLU_DISP++, 0x0C,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, (gameplayFrames * 1) % 128, 32, 32, 1, 0,
                                (gameplayFrames * 1) % 128, 32, 32));
    gSPSegment(POLY_XLU_DISP++, 0x0D,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, (gameplayFrames * 1) % 64, 16, 16, 1, 0,
                                (gameplayFrames * 1) % 64, 16, 16));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 7260);
}

// Scene Draw Config 9
void func_8009EE44(GlobalContext* globalCtx) {
    u32 gameplayFrames;

    if (0) {} // Necessary to match

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 7274);

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_XLU_DISP++, 0x08,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, gameplayFrames % 128, 0, 32, 16, 1, gameplayFrames % 128, 0,
                                32, 16));
    gSPSegment(POLY_XLU_DISP++, 0x09,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 127 - gameplayFrames % 128, gameplayFrames % 128, 32, 32, 1,
                                gameplayFrames % 128, gameplayFrames % 128, 32, 32));

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    if ((globalCtx->roomCtx.unk_74[0] == 0) && (INV_CONTENT(ITEM_COJIRO) == ITEM_COJIRO)) {
        if (globalCtx->roomCtx.unk_74[1] == 50) {
            func_8002F7DC(&GET_PLAYER(globalCtx)->actor, NA_SE_EV_CHICKEN_CRY_M);
            globalCtx->roomCtx.unk_74[0] = 1;
        }
        globalCtx->roomCtx.unk_74[1]++;
    }

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 7309);
}

// Scene Draw Config 10
void func_8009F074(GlobalContext* globalCtx) {
    u32 gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 7323);

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_OPA_DISP++, 0x08,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, 0, 32, 32, 1, 0, 127 - gameplayFrames % 128, 32, 32));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 7339);
}

void* D_8012A380[] = {
    gSpot12_009678Tex,
    gSpot12_00DE78Tex,
};

// Scene Draw Config 11
void func_8009F1B4(GlobalContext* globalCtx) {
    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 7363);

    { s32 pad[2]; }

    gSPSegment(POLY_OPA_DISP++, 0x08, SEGMENTED_TO_VIRTUAL(D_8012A380[gSaveContext.nightFlag]));

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 7371);
}

// Scene Draw Config 12
void func_8009F270(GlobalContext* globalCtx) {
    u32 gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 7385);

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_OPA_DISP++, 0x08,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, gameplayFrames % 128, 32, 32, 1, 0, gameplayFrames % 128,
                                32, 32));
    gSPSegment(POLY_XLU_DISP++, 0x09,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, gameplayFrames % 128, 32, 32, 1, 0, gameplayFrames % 128,
                                32, 32));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 7409);
}

// Scene Draw Config 13
void func_8009F40C(GlobalContext* globalCtx) {
    u32 gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 7423);

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_XLU_DISP++, 0x08,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 127 - gameplayFrames % 128, (gameplayFrames * 10) % 128, 32,
                                32, 1, gameplayFrames % 128, (gameplayFrames * 10) % 128, 32, 32));
    gSPSegment(POLY_XLU_DISP++, 0x09,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 127 - gameplayFrames % 128, (gameplayFrames * 3) % 128, 32,
                                32, 1, gameplayFrames % 128, (gameplayFrames * 3) % 128, 32, 32));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 7443);
}

// Scene Draw Config 14
void func_8009F5D4(GlobalContext* globalCtx) {
    Gfx* displayListHead = Graph_Alloc(globalCtx->state.gfxCtx, 3 * sizeof(Gfx));

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 7461);

    gSPSegment(POLY_XLU_DISP++, 0x08, displayListHead);

    if ((gSaveContext.dayTime >= 0x4AAC) && (gSaveContext.dayTime <= 0xC000)) {
        gSPEndDisplayList(displayListHead);
    } else {
        if (gSaveContext.dayTime > 0xC000) {
            if (globalCtx->roomCtx.unk_74[0] != 255) {
                Math_StepToS(&globalCtx->roomCtx.unk_74[0], 255, 5);
            }
        } else if (gSaveContext.dayTime >= 0x4000) {
            if (globalCtx->roomCtx.unk_74[0] != 0) {
                Math_StepToS(&globalCtx->roomCtx.unk_74[0], 0, 10);
            }
        }

        gDPSetPrimColor(displayListHead++, 0, 0, 255, 255, 255, globalCtx->roomCtx.unk_74[0]);
        gSPDisplayList(displayListHead++, spot16_room_0DL_00AA48);
        gSPEndDisplayList(displayListHead);
    }

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 7495);
}

// Scene Draw Config 15
void func_8009F7D4(GlobalContext* globalCtx) {
    s8 sp6F = coss((globalCtx->gameplayFrames * 1500) & 0xFFFF) >> 8;
    s8 sp6E = coss((globalCtx->gameplayFrames * 1500) & 0xFFFF) >> 8;
    u32 gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 7512);

    gameplayFrames = globalCtx->gameplayFrames;
    sp6F = (sp6F >> 1) + 192;
    sp6E = (sp6E >> 1) + 192;

    gSPSegment(POLY_OPA_DISP++, 0x08,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, gameplayFrames % 128, 32, 32, 1, 0, gameplayFrames % 128,
                                32, 32));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, sp6F, sp6E, 255, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 7530);
}

void* sGoronCityEntranceTextures[] = {
    gGoronCityDayEntranceTex,
    gGoronCityNightEntranceTex,
};

// Scene Draw Config 16
void func_8009F9D0(GlobalContext* globalCtx) {
    u32 gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 7555);

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_OPA_DISP++, 0x08,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, 127 - gameplayFrames % 128, 32, 32, 1,
                                gameplayFrames % 128, 0, 32, 32));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    gSPSegment(POLY_XLU_DISP++, 0x08, SEGMENTED_TO_VIRTUAL(sGoronCityEntranceTextures[gSaveContext.nightFlag]));

    { s32 pad[2]; }

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 7578);
}

void* sLonLonRanchWindowTextures[] = {
    gLonLonRanchDayWindowTex,
    gLonLonRangeNightWindowsTex,
};

// Scene Draw Config 17
void func_8009FB74(GlobalContext* globalCtx) {
    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 7602);

    { s32 pad[2]; }

    gSPSegment(POLY_OPA_DISP++, 0x08, SEGMENTED_TO_VIRTUAL(sLonLonRanchWindowTextures[gSaveContext.nightFlag]));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 7615);
}

// Scene Draw Config 18
void func_8009FC90(GlobalContext* globalCtx) {
    u32 gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 7630);

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_OPA_DISP++, 0x08,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, 127 - gameplayFrames % 128, 32, 32, 1,
                                127 - gameplayFrames % 128, 0, 32, 32));
    gSPSegment(POLY_OPA_DISP++, 0x09,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, (gameplayFrames * 3) % 128,
                                127 - (gameplayFrames * 6) % 128, 32, 32, 1, (gameplayFrames * 6) % 128,
                                127 - (gameplayFrames * 3) % 128, 32, 32));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 64);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 64);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 7653);
}

f32 D_8012A398 = 0.0f;

void func_8009FE58(GlobalContext* globalCtx) {
    static s16 D_8012A39C = 538;
    static s16 D_8012A3A0 = 4272;
    u32 gameplayFrames;
    f32 temp;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 7712);

    gameplayFrames = globalCtx->gameplayFrames;
    if (globalCtx->sceneNum == SCENE_BDAN) {
        gSPSegment(POLY_OPA_DISP++, 0x08,
                   Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, gameplayFrames % 128, (gameplayFrames * 2) % 128, 32,
                                    32, 1, 127 - gameplayFrames % 128, (gameplayFrames * 2) % 128, 32, 32));
        gSPSegment(POLY_OPA_DISP++, 0x0B,
                   Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, 255 - (gameplayFrames * 4) % 256, 32, 64, 1, 0,
                                    255 - (gameplayFrames * 4) % 256, 32, 64));
    } else {
        gSPSegment(POLY_OPA_DISP++, 0x08,
                   Gfx_TexScroll(globalCtx->state.gfxCtx, (127 - (gameplayFrames * 1)) % 128,
                                 (gameplayFrames * 1) % 128, 32, 32));
    }

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    if (FrameAdvance_IsEnabled(globalCtx) != true) {

        D_8012A39C += 1820;
        D_8012A3A0 += 1820;

        temp = 0.020000001f;
        func_800AA76C(&globalCtx->view, ((360.00018f / 65535.0f) * (M_PI / 180.0f)) * temp * Math_CosS(D_8012A39C),
                      ((360.00018f / 65535.0f) * (M_PI / 180.0f)) * temp * Math_SinS(D_8012A39C),
                      ((360.00018f / 65535.0f) * (M_PI / 180.0f)) * temp * Math_SinS(D_8012A3A0));
        func_800AA78C(&globalCtx->view, 1.f + (0.79999995f * temp * Math_SinS(D_8012A3A0)),
                      1.f + (0.39999998f * temp * Math_CosS(D_8012A3A0)), 1.f + (1 * temp * Math_CosS(D_8012A39C)));
        func_800AA7AC(&globalCtx->view, 0.95f);

        switch (globalCtx->roomCtx.unk_74[0]) {
            case 0:
                break;
            case 1:
                if (globalCtx->roomCtx.unk_74[1] < 1200) {
                    globalCtx->roomCtx.unk_74[1] += 200;
                } else {
                    globalCtx->roomCtx.unk_74[0]++;
                }
                break;
            case 2:
                if (globalCtx->roomCtx.unk_74[1] > 0) {
                    globalCtx->roomCtx.unk_74[1] -= 30;
                } else {
                    globalCtx->roomCtx.unk_74[1] = 0;
                    globalCtx->roomCtx.unk_74[0] = 0;
                }
                break;
        }

        D_8012A398 += 0.15f + (globalCtx->roomCtx.unk_74[1] * 0.001f);
    }

    if (globalCtx->roomCtx.curRoom.num == 2) {
        Matrix_Scale(1.0f, sinf(D_8012A398) * 0.8f, 1.0f, MTXMODE_NEW);
    } else {
        Matrix_Scale(1.005f, sinf(D_8012A398) * 0.8f, 1.005f, MTXMODE_NEW);
    }

    gSPSegment(POLY_OPA_DISP++, 0x0D, Matrix_NewMtx(globalCtx->state.gfxCtx, "../z_scene_table.c", 7809));

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 7811);
}

// Scene Draw Config 26
void func_800A0334(GlobalContext* globalCtx) {
    u32 gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 7825);

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_XLU_DISP++, 0x08,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 127 - gameplayFrames % 128, (gameplayFrames * 1) % 512, 32,
                                128, 1, gameplayFrames % 128, (gameplayFrames * 1) % 512, 32, 128));
    gSPSegment(POLY_XLU_DISP++, 0x09,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 127 - gameplayFrames % 128, (gameplayFrames * 1) % 128, 32,
                                32, 1, gameplayFrames % 128, (gameplayFrames * 1) % 128, 32, 32));
    gSPSegment(POLY_OPA_DISP++, 0x0A,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 127 - gameplayFrames % 128, (gameplayFrames * 1) % 128, 32,
                                32, 1, gameplayFrames % 128, (gameplayFrames * 1) % 128, 32, 32));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 7852);
}

// Scene Draw Config 52
void func_800A055C(GlobalContext* globalCtx) {
    func_8009BEEC(globalCtx);
}

// Scene Draw Config 51
void func_800A057C(GlobalContext* globalCtx) {
    func_8009BEEC(globalCtx);
}

// Scene Draw Config 49
void func_800A059C(GlobalContext* globalCtx) {
    u32 gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 7893);

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_OPA_DISP++, 0x08,
               Gfx_TexScroll(globalCtx->state.gfxCtx, 127 - (gameplayFrames * 2) % 128, 0, 32, 64));
    gSPSegment(POLY_OPA_DISP++, 0x09, Gfx_TexScroll(globalCtx->state.gfxCtx, 0, (gameplayFrames * 2) % 512, 128, 128));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 7910);
}

void (*sSceneDrawHandlers[])(GlobalContext*) = {
    func_80099550, func_8009DA30, func_8009DD5C, func_8009DE78, func_8009E0B8, func_8009E54C, func_8009E730,
    func_8009E8C0, func_8009EAD8, func_8009EE44, func_8009F074, func_8009F1B4, func_8009F270, func_8009F40C,
    func_8009F5D4, func_8009F7D4, func_8009F9D0, func_8009FB74, func_8009FC90, func_800995DC, func_80099878,
    func_8009FE58, func_8009D758, func_8009B0FC, func_8009AE30, func_8009D974, func_800A0334, func_8009CC00,
    func_80099760, func_8009B86C, func_80099BD8, func_8009A45C, func_8009A798, func_8009A9DC, func_8009B9BC,
    func_8009BAA4, func_8009BC44, func_8009C3EC, func_8009C0AC, func_8009ACA8, func_8009AFE0, func_8009D0E8,
    func_8009C608, func_8009C8B8, func_8009D31C, func_8009D438, func_8009D5B4, func_8009CAC0, func_8009AB98,
    func_800A059C, func_8009CF84, func_800A057C, func_800A055C,
};

void Scene_Draw(GlobalContext* globalCtx) {
    if (HREG(80) == 17) {
        if (HREG(95) != 17) {
            HREG(95) = 17;
            HREG(81) = 1;
            HREG(82) = 1;
            HREG(83) = 0;
            HREG(84) = 0;
            HREG(85) = 0;
            HREG(86) = 0;
            HREG(87) = 0;
            HREG(88) = 0;
            HREG(89) = 0;
            HREG(91) = 0;
            HREG(92) = 0;
            HREG(93) = 0;
            HREG(94) = 0;
        }

        OPEN_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 8104);

        if (HREG(81) == 1) {
            gSPDisplayList(POLY_OPA_DISP++, sDefaultDisplayList);
            gSPDisplayList(POLY_XLU_DISP++, sDefaultDisplayList);
        }

        CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_scene_table.c", 8109);

        if (HREG(82) == 1) {
            sSceneDrawHandlers[globalCtx->sceneConfig](globalCtx);
        }
    } else {
        sSceneDrawHandlers[globalCtx->sceneConfig](globalCtx);
    }
}
