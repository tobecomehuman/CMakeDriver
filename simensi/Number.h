#pragma once

typedef unsigned char byte;
typedef byte cs_byte;
typedef unsigned char boolean;

//#include <cstddef>
//
//std::byte b_00{ 0x00 };
//std::byte b_01{ 0x01 };
//std::byte b_02{ 0x02 };
//std::byte b_03{ 0x03 };
//std::byte b_04{ 0x04 };
//std::byte b_05{ 0x05 };
//std::byte b_06{ 0x06 };
//std::byte b_07{ 0x07 };
//std::byte b_08{ 0x08 };
//std::byte b_09{ 0x09 };
//std::byte b_0a{ 0x0a };
//std::byte b_0b{ 0x0b };
//std::byte b_0c{ 0x0c };
//std::byte b_0d{ 0x0d };
//std::byte b_0e{ 0x0e };
//std::byte b_0f{ 0x0f };
//std::byte b_10{ 0x10 };
//std::byte b_11{ 0x11 };
//std::byte b_12{ 0x12 };
//std::byte b_13{ 0x13 };
//std::byte b_14{ 0x14 };
//std::byte b_15{ 0x15 };
//std::byte b_16{ 0x16 };
//std::byte b_17{ 0x17 };
//std::byte b_18{ 0x18 };
//std::byte b_19{ 0x19 };
//std::byte b_1a{ 0x1a };
//std::byte b_1b{ 0x1b };
//std::byte b_1c{ 0x1c };
//std::byte b_1d{ 0x1d };
//std::byte b_1e{ 0x1e };
//std::byte b_1f{ 0x1f };
//std::byte b_20{ 0x20 };
//std::byte b_21{ 0x21 };
//std::byte b_22{ 0x22 };
//std::byte b_23{ 0x23 };
//std::byte b_24{ 0x24 };
//std::byte b_25{ 0x25 };
//std::byte b_26{ 0x26 };
//std::byte b_27{ 0x27 };
//std::byte b_28{ 0x28 };
//std::byte b_29{ 0x29 };
//std::byte b_2a{ 0x2a };
//std::byte b_2b{ 0x2b };
//std::byte b_2c{ 0x2c };
//std::byte b_2d{ 0x2d };
//std::byte b_2e{ 0x2e };
//std::byte b_2f{ 0x2f };
//std::byte b_30{ 0x30 };
//std::byte b_31{ 0x31 };
//std::byte b_32{ 0x32 };
//std::byte b_33{ 0x33 };
//std::byte b_34{ 0x34 };
//std::byte b_35{ 0x35 };
//std::byte b_36{ 0x36 };
//std::byte b_37{ 0x37 };
//std::byte b_38{ 0x38 };
//std::byte b_39{ 0x39 };
//std::byte b_3a{ 0x3a };
//std::byte b_3b{ 0x3b };
//std::byte b_3c{ 0x3c };
//std::byte b_3d{ 0x3d };
//std::byte b_3e{ 0x3e };
//std::byte b_3f{ 0x3f };
//std::byte b_40{ 0x40 };
//std::byte b_41{ 0x41 };
//std::byte b_42{ 0x42 };
//std::byte b_43{ 0x43 };
//std::byte b_44{ 0x44 };
//std::byte b_45{ 0x45 };
//std::byte b_46{ 0x46 };
//std::byte b_47{ 0x47 };
//std::byte b_48{ 0x48 };
//std::byte b_49{ 0x49 };
//std::byte b_4a{ 0x4a };
//std::byte b_4b{ 0x4b };
//std::byte b_4c{ 0x4c };
//std::byte b_4d{ 0x4d };
//std::byte b_4e{ 0x4e };
//std::byte b_4f{ 0x4f };
//std::byte b_50{ 0x50 };
//std::byte b_51{ 0x51 };
//std::byte b_52{ 0x52 };
//std::byte b_53{ 0x53 };
//std::byte b_54{ 0x54 };
//std::byte b_55{ 0x55 };
//std::byte b_56{ 0x56 };
//std::byte b_57{ 0x57 };
//std::byte b_58{ 0x58 };
//std::byte b_59{ 0x59 };
//std::byte b_5a{ 0x5a };
//std::byte b_5b{ 0x5b };
//std::byte b_5c{ 0x5c };
//std::byte b_5d{ 0x5d };
//std::byte b_5e{ 0x5e };
//std::byte b_5f{ 0x5f };
//std::byte b_60{ 0x60 };
//std::byte b_61{ 0x61 };
//std::byte b_62{ 0x62 };
//std::byte b_63{ 0x63 };
//std::byte b_64{ 0x64 };
//std::byte b_65{ 0x65 };
//std::byte b_66{ 0x66 };
//std::byte b_67{ 0x67 };
//std::byte b_68{ 0x68 };
//std::byte b_69{ 0x69 };
//std::byte b_6a{ 0x6a };
//std::byte b_6b{ 0x6b };
//std::byte b_6c{ 0x6c };
//std::byte b_6d{ 0x6d };
//std::byte b_6e{ 0x6e };
//std::byte b_6f{ 0x6f };
//std::byte b_70{ 0x70 };
//std::byte b_71{ 0x71 };
//std::byte b_72{ 0x72 };
//std::byte b_73{ 0x73 };
//std::byte b_74{ 0x74 };
//std::byte b_75{ 0x75 };
//std::byte b_76{ 0x76 };
//std::byte b_77{ 0x77 };
//std::byte b_78{ 0x78 };
//std::byte b_79{ 0x79 };
//std::byte b_7a{ 0x7a };
//std::byte b_7b{ 0x7b };
//std::byte b_7c{ 0x7c };
//std::byte b_7d{ 0x7d };
//std::byte b_7e{ 0x7e };
//std::byte b_7f{ 0x7f };
//std::byte b_80{ 0x80 };
//std::byte b_81{ 0x81 };
//std::byte b_82{ 0x82 };
//std::byte b_83{ 0x83 };
//std::byte b_84{ 0x84 };
//std::byte b_85{ 0x85 };
//std::byte b_86{ 0x86 };
//std::byte b_87{ 0x87 };
//std::byte b_88{ 0x88 };
//std::byte b_89{ 0x89 };
//std::byte b_8a{ 0x8a };
//std::byte b_8b{ 0x8b };
//std::byte b_8c{ 0x8c };
//std::byte b_8d{ 0x8d };
//std::byte b_8e{ 0x8e };
//std::byte b_8f{ 0x8f };
//std::byte b_90{ 0x90 };
//std::byte b_91{ 0x91 };
//std::byte b_92{ 0x92 };
//std::byte b_93{ 0x93 };
//std::byte b_94{ 0x94 };
//std::byte b_95{ 0x95 };
//std::byte b_96{ 0x96 };
//std::byte b_97{ 0x97 };
//std::byte b_98{ 0x98 };
//std::byte b_99{ 0x99 };
//std::byte b_9a{ 0x9a };
//std::byte b_9b{ 0x9b };
//std::byte b_9c{ 0x9c };
//std::byte b_9d{ 0x9d };
//std::byte b_9e{ 0x9e };
//std::byte b_9f{ 0x9f };
//std::byte b_a0{ 0xa0 };
//std::byte b_a1{ 0xa1 };
//std::byte b_a2{ 0xa2 };
//std::byte b_a3{ 0xa3 };
//std::byte b_a4{ 0xa4 };
//std::byte b_a5{ 0xa5 };
//std::byte b_a6{ 0xa6 };
//std::byte b_a7{ 0xa7 };
//std::byte b_a8{ 0xa8 };
//std::byte b_a9{ 0xa9 };
//std::byte b_aa{ 0xaa };
//std::byte b_ab{ 0xab };
//std::byte b_ac{ 0xac };
//std::byte b_ad{ 0xad };
//std::byte b_ae{ 0xae };
//std::byte b_af{ 0xaf };
//std::byte b_b0{ 0xb0 };
//std::byte b_b1{ 0xb1 };
//std::byte b_b2{ 0xb2 };
//std::byte b_b3{ 0xb3 };
//std::byte b_b4{ 0xb4 };
//std::byte b_b5{ 0xb5 };
//std::byte b_b6{ 0xb6 };
//std::byte b_b7{ 0xb7 };
//std::byte b_b8{ 0xb8 };
//std::byte b_b9{ 0xb9 };
//std::byte b_ba{ 0xba };
//std::byte b_bb{ 0xbb };
//std::byte b_bc{ 0xbc };
//std::byte b_bd{ 0xbd };
//std::byte b_be{ 0xbe };
//std::byte b_bf{ 0xbf };
//std::byte b_c0{ 0xc0 };
//std::byte b_c1{ 0xc1 };
//std::byte b_c2{ 0xc2 };
//std::byte b_c3{ 0xc3 };
//std::byte b_c4{ 0xc4 };
//std::byte b_c5{ 0xc5 };
//std::byte b_c6{ 0xc6 };
//std::byte b_c7{ 0xc7 };
//std::byte b_c8{ 0xc8 };
//std::byte b_c9{ 0xc9 };
//std::byte b_ca{ 0xca };
//std::byte b_cb{ 0xcb };
//std::byte b_cc{ 0xcc };
//std::byte b_cd{ 0xcd };
//std::byte b_ce{ 0xce };
//std::byte b_cf{ 0xcf };
//std::byte b_d0{ 0xd0 };
//std::byte b_d1{ 0xd1 };
//std::byte b_d2{ 0xd2 };
//std::byte b_d3{ 0xd3 };
//std::byte b_d4{ 0xd4 };
//std::byte b_d5{ 0xd5 };
//std::byte b_d6{ 0xd6 };
//std::byte b_d7{ 0xd7 };
//std::byte b_d8{ 0xd8 };
//std::byte b_d9{ 0xd9 };
//std::byte b_da{ 0xda };
//std::byte b_db{ 0xdb };
//std::byte b_dc{ 0xdc };
//std::byte b_dd{ 0xdd };
//std::byte b_de{ 0xde };
//std::byte b_df{ 0xdf };
//std::byte b_e0{ 0xe0 };
//std::byte b_e1{ 0xe1 };
//std::byte b_e2{ 0xe2 };
//std::byte b_e3{ 0xe3 };
//std::byte b_e4{ 0xe4 };
//std::byte b_e5{ 0xe5 };
//std::byte b_e6{ 0xe6 };
//std::byte b_e7{ 0xe7 };
//std::byte b_e8{ 0xe8 };
//std::byte b_e9{ 0xe9 };
//std::byte b_ea{ 0xea };
//std::byte b_eb{ 0xeb };
//std::byte b_ec{ 0xec };
//std::byte b_ed{ 0xed };
//std::byte b_ee{ 0xee };
//std::byte b_ef{ 0xef };
//std::byte b_f0{ 0xf0 };
//std::byte b_f1{ 0xf1 };
//std::byte b_f2{ 0xf2 };
//std::byte b_f3{ 0xf3 };
//std::byte b_f4{ 0xf4 };
//std::byte b_f5{ 0xf5 };
//std::byte b_f6{ 0xf6 };
//std::byte b_f7{ 0xf7 };
//std::byte b_f8{ 0xf8 };
//std::byte b_f9{ 0xf9 };
//std::byte b_fa{ 0xfa };
//std::byte b_fb{ 0xfb };
//std::byte b_fc{ 0xfc };
//std::byte b_fd{ 0xfd };
//std::byte b_fe{ 0xfe };
//std::byte b_ff{ 0xff };
//
//#endif // !1