import os
import os.path
from tqdm import tqdm

basedir = os.path.abspath(os.path.join(os.path.dirname(os.path.realpath(__file__)), '../'))

segments = {'src/code/z_vr_box_assets.h': [
'vr_SP1a_static',
'vr_SP1a_pal_static',
'vr_cloud2_static',
'vr_cloud2_pal_static',
'vr_RUVR_static',
'vr_RUVR_pal_static',
'vr_holy0_static',
'vr_holy1_static',
'vr_holy0_pal_static',
'vr_holy1_pal_static',
'vr_LHVR_static',
'vr_LHVR_pal_static',
'vr_MDVR_static',
'vr_MDVR_pal_static',
'vr_MNVR_static',
'vr_MNVR_pal_static',
'vr_FCVR_static',
'vr_FCVR_pal_static',
'vr_KHVR_static',
'vr_KHVR_pal_static',
'vr_K3VR_static',
'vr_K3VR_pal_static',
'vr_MLVR_static',
'vr_MLVR_pal_static',
'vr_KKRVR_static',
'vr_KKRVR_pal_static',
'vr_KSVR_static',
'vr_KSVR_pal_static',
'vr_GLVR_static',
'vr_GLVR_pal_static',
'vr_ZRVR_static',
'vr_ZRVR_pal_static',
'vr_DGVR_static',
'vr_DGVR_pal_static',
'vr_ALVR_static',
'vr_ALVR_pal_static',
'vr_NSVR_static',
'vr_NSVR_pal_static',
'vr_IPVR_static',
'vr_IPVR_pal_static',
'vr_LBVR_static',
'vr_LBVR_pal_static',
'vr_TTVR_static',
'vr_TTVR_pal_static',
'vr_K4VR_static',
'vr_K4VR_pal_static',
'vr_K5VR_static',
'vr_K5VR_pal_static',
'vr_KR3VR_static',
'vr_KR3VR_pal_static'
],
'src/code/z_scene_table_assets.h': [
'g_pn_01',
'g_pn_02',
'g_pn_03',
'g_pn_04',
'g_pn_05',
'g_pn_06',
'g_pn_07',
'g_pn_08',
'g_pn_09',
'g_pn_10',
'g_pn_11',
'g_pn_12',
'g_pn_13',
'g_pn_14',
'g_pn_15',
'g_pn_16',
'g_pn_17',
'g_pn_18',
'g_pn_19',
'g_pn_20',
'g_pn_21',
'g_pn_22',
'g_pn_23',
'g_pn_24',
'g_pn_25',
'g_pn_26',
'g_pn_27',
'g_pn_28',
'g_pn_29',
'g_pn_30',
'g_pn_31',
'g_pn_32',
'g_pn_33',
'g_pn_34',
'g_pn_35',
'g_pn_36',
'g_pn_37',
'g_pn_38',
'g_pn_39',
'g_pn_40',
'g_pn_41',
'g_pn_42',
'g_pn_43',
'g_pn_44',
'g_pn_45',
'g_pn_46',
'g_pn_47',
'g_pn_48',
'g_pn_49',
'g_pn_50',
'g_pn_51',
'g_pn_52',
'g_pn_53',
'g_pn_54',
'g_pn_55',
'g_pn_56',
'g_pn_57'
],
'src/code/z_message_PAL_assets.h': [
'nes_message_data_static',
'ger_message_data_static',
'fra_message_data_static',
'staff_message_data_static'
],
'src/code/z_kankyo_assets.h': [
'vr_fine0_static',
'vr_fine0_pal_static',
'vr_fine1_static',
'vr_fine1_pal_static',
'vr_fine2_static',
'vr_fine2_pal_static',
'vr_fine3_static',
'vr_fine3_pal_static',
'vr_cloud0_static',
'vr_cloud0_pal_static',
'vr_cloud1_static',
'vr_cloud1_pal_static',
'vr_cloud2_static',
'vr_cloud2_pal_static',
'vr_cloud3_static',
'vr_cloud3_pal_static',
'vr_holy0_static',
'vr_holy0_pal_static'],
'src/code/z_scene_assets.h': [
'elf_message_field',
'elf_message_ydan',
'gameplay_keep',
'gameplay_field_keep',
'gameplay_dangeon_keep',
'object_human',
'object_okuta',
'object_crow',
'object_poh',
'object_dy_obj',
'object_wallmaster',
'object_dodongo',
'object_firefly',
'object_box',
'object_fire',
'object_bubble',
'object_niw',
'object_link_boy',
'object_link_child',
'object_tite',
'object_reeba',
'object_peehat',
'object_kingdodongo',
'object_horse',
'object_zf',
'object_goma',
'object_zl1',
'object_gol',
'object_dodojr',
'object_torch2',
'object_bl',
'object_tp',
'object_oA1',
'object_st',
'object_bw',
'object_ei',
'object_horse_normal',
'object_oB1',
'object_o_anime',
'object_spot04_objects',
'object_ddan_objects',
'object_hidan_objects',
'object_horse_ganon',
'object_oA2',
'object_spot00_objects',
'object_mb',
'object_bombf',
'object_sk2',
'object_oE1',
'object_oE_anime',
'object_oE2',
'object_ydan_objects',
'object_gnd',
'object_am',
'object_dekubaba',
'object_oA3',
'object_oA4',
'object_oA5',
'object_oA6',
'object_oA7',
'object_jj',
'object_oA8',
'object_oA9',
'object_oB2',
'object_oB3',
'object_oB4',
'object_horse_zelda',
'object_opening_demo1',
'object_warp1',
'object_b_heart',
'object_dekunuts',
'object_oE3',
'object_oE4',
'object_menkuri_objects',
'object_oE5',
'object_oE6',
'object_oE7',
'object_oE8',
'object_oE9',
'object_oE10',
'object_oE11',
'object_oE12',
'object_vali',
'object_oA10',
'object_oA11',
'object_mizu_objects',
'object_fhg',
'object_ossan',
'object_mori_hineri1',
'object_Bb',
'object_toki_objects',
'object_yukabyun',
'object_zl2',
'object_mjin',
'object_mjin_flash',
'object_mjin_dark',
'object_mjin_flame',
'object_mjin_ice',
'object_mjin_soul',
'object_mjin_wind',
'object_mjin_oka',
'object_haka_objects',
'object_spot06_objects',
'object_ice_objects',
'object_relay_objects',
'object_po_field',
'object_po_composer',
'object_mori_hineri1a',
'object_mori_hineri2',
'object_mori_hineri2a',
'object_mori_objects',
'object_mori_tex',
'object_spot08_obj',
'object_warp2',
'object_hata',
'object_bird',
'object_wood02',
'object_lightbox',
'object_pu_box',
'object_trap',
'object_vase',
'object_im',
'object_ta',
'object_tk',
'object_xc',
'object_vm',
'object_bv',
'object_hakach_objects',
'object_efc_crystal_light',
'object_efc_fire_ball',
'object_efc_flash',
'object_efc_lgt_shower',
'object_efc_star_field',
'object_god_lgt',
'object_light_ring',
'object_triforce_spot',
'object_bdan_objects',
'object_sd',
'object_rd',
'object_po_sisters',
'object_heavy_object',
'object_gndd',
'object_fd',
'object_du',
'object_fw',
'object_medal',
'object_horse_link_child',
'object_spot02_objects',
'object_haka',
'object_ru1',
'object_syokudai',
'object_fd2',
'object_dh',
'object_rl',
'object_efc_tw',
'object_demo_tre_lgt',
'object_gi_key',
'object_mir_ray',
'object_brob',
'object_gi_jewel',
'object_spot09_obj',
'object_spot18_obj',
'object_bdoor',
'object_spot17_obj',
'object_shop_dungen',
'object_nb',
'object_mo',
'object_sb',
'object_gi_melody',
'object_gi_heart',
'object_gi_compass',
'object_gi_bosskey',
'object_gi_medal',
'object_gi_nuts',
'object_sa',
'object_gi_hearts',
'object_gi_arrowcase',
'object_gi_bombpouch',
'object_in',
'object_tr',
'object_spot16_obj',
'object_oE1s',
'object_oE4s',
'object_os_anime',
'object_gi_bottle',
'object_gi_stick',
'object_gi_map',
'object_oF1d_map',
'object_ru2',
'object_gi_shield_1',
'object_dekujr',
'object_gi_magicpot',
'object_gi_bomb_1',
'object_oF1s',
'object_ma2',
'object_gi_purse',
'object_hni',
'object_tw',
'object_rr',
'object_bxa',
'object_anubice',
'object_gi_gerudo',
'object_gi_arrow',
'object_gi_bomb_2',
'object_gi_egg',
'object_gi_scale',
'object_gi_shield_2',
'object_gi_hookshot',
'object_gi_ocarina',
'object_gi_milk',
'object_ma1',
'object_ganon',
'object_sst',
'object_ny',
'object_fr',
'object_gi_pachinko',
'object_gi_boomerang',
'object_gi_bow',
'object_gi_glasses',
'object_gi_liquid',
'object_ani',
'object_demo_6k',
'object_gi_shield_3',
'object_gi_letter',
'object_spot15_obj',
'object_jya_obj',
'object_gi_clothes',
'object_gi_bean',
'object_gi_fish',
'object_gi_saw',
'object_gi_hammer',
'object_gi_grass',
'object_gi_longsword',
'object_spot01_objects',
'object_md',
'object_km1',
'object_kw1',
'object_zo',
'object_kz',
'object_umajump',
'object_masterkokiri',
'object_masterkokirihead',
'object_mastergolon',
'object_masterzoora',
'object_aob',
'object_ik',
'object_ahg',
'object_cne',
'object_gi_niwatori',
'object_skj',
'object_gi_bottle_letter',
'object_bji',
'object_bba',
'object_gi_ocarina_0',
'object_ds',
'object_ane',
'object_boj',
'object_spot03_object',
'object_spot07_object',
'object_fz',
'object_bob',
'object_ge1',
'object_yabusame_point',
'object_gi_boots_2',
'object_gi_seed',
'object_gnd_magic',
'object_d_elevator',
'object_d_hsblock',
'object_d_lift',
'object_mamenoki',
'object_goroiwa',
'object_toryo',
'object_daiku',
'object_nwc',
'object_blkobj',
'object_gm',
'object_ms',
'object_hs',
'object_ingate',
'object_lightswitch',
'object_kusa',
'object_tsubo',
'object_gi_gloves',
'object_gi_coin',
'object_kanban',
'object_gjyo_objects',
'object_owl',
'object_mk',
'object_fu',
'object_gi_ki_tan_mask',
'object_gi_redead_mask',
'object_gi_skj_mask',
'object_gi_rabit_mask',
'object_gi_truth_mask',
'object_ganon_objects',
'object_siofuki',
'object_stream',
'object_mm',
'object_fa',
'object_os',
'object_gi_eye_lotion',
'object_gi_powder',
'object_gi_mushroom',
'object_gi_ticketstone',
'object_gi_brokensword',
'object_js',
'object_cs',
'object_gi_prescription',
'object_gi_bracelet',
'object_gi_soldout',
'object_gi_frog',
'object_mag',
'object_door_gerudo',
'object_gt',
'object_efc_erupc',
'object_zl2_anime1',
'object_zl2_anime2',
'object_gi_golonmask',
'object_gi_zoramask',
'object_gi_gerudomask',
'object_ganon2',
'object_ka',
'object_ts',
'object_zg',
'object_gi_hoverboots',
'object_gi_m_arrow',
'object_ds2',
'object_ec',
'object_fish',
'object_gi_sutaru',
'object_gi_goddess',
'object_ssh',
'object_bigokuta',
'object_bg',
'object_spot05_objects',
'object_spot12_obj',
'object_bombiwa',
'object_hintnuts',
'object_rs',
'object_spot00_break',
'object_gla',
'object_shopnuts',
'object_geldb',
'object_gr',
'object_dog',
'object_jya_iron',
'object_jya_door',
'object_spot11_obj',
'object_kibako2',
'object_dns',
'object_dnk',
'object_gi_fire',
'object_gi_insect',
'object_gi_butterfly',
'object_gi_ghost',
'object_gi_soul',
'object_bowl',
'object_demo_kekkai',
'object_efc_doughnut',
'object_gi_dekupouch',
'object_ganon_anime1',
'object_ganon_anime2',
'object_ganon_anime3',
'object_gi_rupy',
'object_spot01_matoya',
'object_spot01_matoyab',
'object_mu',
'object_wf',
'object_skb',
'object_gj',
'object_geff',
'object_haka_door',
'object_gs',
'object_ps',
'object_bwall',
'object_cow',
'object_cob',
'object_gi_sword_1',
'object_door_killer',
'object_ouke_haka',
'object_timeblock',
'object_zl4']
}

def writeFile(path, buffer):
	path = os.path.abspath(os.path.join(basedir, path))
	
	try:
		with open(path, 'r') as f:
			if f.read() == buffer:
				return
	except:
		pass
			
	print('writing %s' % path)
	with open(path, 'w') as f:
		f.write(buffer)

def serialize(name):
	path = os.path.join('baserom', name)
	path = os.path.abspath(os.path.join(basedir, path))

	with open(path, 'rb') as f:
		buffer = f.read()
	lst = []
	
	for b in buffer:
		lst.append('0x%2.2X' % b)

	return 'static const u8 %s[0x%X] = { %s };\n' % (name, len(buffer), ', '.join(lst))
	
def serializeU16(name, doswap = True):
	path = os.path.join('baserom', name)
	path = os.path.abspath(os.path.join(basedir, path))
	lst = []
	'''
	with open(path, 'rb') as f:
		while True:
			buffer = f.read(2)
			
			if buffer is None:
				break

			b = int.from_bytes(buffer, byteorder='big')
			lst.append('0x%4.4X' % b)
	'''
	with open(path, 'rb') as f:
		buffer = f.read()
	n = 2
	a = [buffer[i:i+n] for i in range(0, len(buffer), n)]
	

	if doswap:
		for i in range(0, len(a), 2):
			swap = a[i]
			a[i] = a[i+1]
			a[i+1] = swap

	
	for b in a:
		b = int.from_bytes(b, byteorder='big')
		lst.append(('0x%%%d.%dX' % (n * 2, n * 2)) % b)

	return 'static const u16 %s[0x%X] = { %s };\n' % (name, len(buffer) // n, ', '.join(lst))


for output, files in segments.items():
	print('processing %s' % output)
	buffer = '#pragma once\n\n'
	for file in tqdm(files):
		if '_pal_' in file:
			#buffer += serializeU16(file, True)
			buffer += serialize(file)
		else:
			if 'vr_' in file:
				#buffer += serializeU16(file, doswap=True)
				buffer += serialize(file)
			else:
				buffer += serialize(file)

	writeFile(output, buffer)