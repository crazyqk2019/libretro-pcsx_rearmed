#ifndef LIBRETRO_CORE_OPTIONS_INTL_H__
#define LIBRETRO_CORE_OPTIONS_INTL_H__

#if defined(_MSC_VER) && (_MSC_VER >= 1500 && _MSC_VER < 1900)
/* https://support.microsoft.com/en-us/kb/980263 */
#pragma execution_character_set("utf-8")
#pragma warning(disable:4566)
#endif

#include <libretro.h>

/*
 ********************************
 * VERSION: 1.3
 ********************************
 *
 * - 1.3: Move translations to libretro_core_options_intl.h
 *        - libretro_core_options_intl.h includes BOM and utf-8
 *          fix for MSVC 2010-2013
 *        - Added HAVE_NO_LANGEXTRA flag to disable translations
 *          on platforms/compilers without BOM support
 * - 1.2: Use core options v1 interface when
 *        RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION is >= 1
 *        (previously required RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION == 1)
 * - 1.1: Support generation of core options v0 retro_core_option_value
 *        arrays containing options with a single value
 * - 1.0: First commit
*/

#ifdef __cplusplus
extern "C" {
#endif

/*
 ********************************
 * Core Option Definitions
 ********************************
*/

/* RETRO_LANGUAGE_JAPANESE */

/* RETRO_LANGUAGE_FRENCH */

/* RETRO_LANGUAGE_SPANISH */

/* RETRO_LANGUAGE_GERMAN */

/* RETRO_LANGUAGE_ITALIAN */

/* RETRO_LANGUAGE_DUTCH */

/* RETRO_LANGUAGE_PORTUGUESE_BRAZIL */

/* RETRO_LANGUAGE_PORTUGUESE_PORTUGAL */

/* RETRO_LANGUAGE_RUSSIAN */

/* RETRO_LANGUAGE_KOREAN */

/* RETRO_LANGUAGE_CHINESE_TRADITIONAL */

/* RETRO_LANGUAGE_CHINESE_SIMPLIFIED */

struct retro_core_option_definition option_defs_chs[] = {
   {
      "pcsx_rearmed_frameskip",
      "跳帧",
      "选择跳帧数量，牺牲画面流畅度以提高性能。",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { NULL, NULL },
      },
      "0",
   },
   {
      "pcsx_rearmed_bios",
      "使用BIOS",
      "允许使用真实BIOS文件（如果存在）或者使用模拟的BIOS (HLE)。\n"
      "建议使用官方BIOS文件以获得更好的兼容性。",
      {
         { "auto", "自动" },
         { "HLE",  "HLE" },
         { NULL, NULL },
      },
      "auto",
   },
   {
      "pcsx_rearmed_region",
      "制式",
      "选择系统区域制式。NTSC为60Hz，PAL为50Hz。",
      {
         { "auto", "自动" },
         { "NTSC", "NTSC" },
         { "PAL",  "PAL" },
         { NULL, NULL },
      },
      "auto",
   },
   {
      "pcsx_rearmed_memcard2",
      "启用第二个记忆卡（共享）",
      "启用插槽2的记忆卡，此记忆卡所有游戏共享。",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      "pcsx_rearmed_show_other_input_settings",
      "显示其他输入设置",
      "显示或隐藏其他输入设置，例如多分插、玩家3-8端口，模拟输入优化调节等。",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      "pcsx_rearmed_pad1type",
      "手柄1类型",
      "玩家1的手柄类型",
      {
         { "standard",  "标准手柄" },
         { "analog",    "模拟手柄" },
         { "dualshock", "双震动手柄" },
         { "negcon",    "neGcon手柄" },
         { "guncon",    "光枪" },
         { "none",      "无" },
         { NULL, NULL },
      },
      "standard",
   },
   {
      "pcsx_rearmed_pad2type",
      "手柄2类型",
      "玩家2的手柄类型",
      {
         { "standard",  "标准手柄" },
         { "analog",    "模拟手柄" },
         { "dualshock", "双震动手柄" },
         { "negcon",    "neGcon手柄" },
         { "guncon",    "光枪" },
         { "none",      "无" },
         { NULL, NULL },
      },
      "standard",
   },
   {
      "pcsx_rearmed_pad3type",
      "手柄3类型",
      "玩家3的手柄类型",
      {
         { "standard",  "标准手柄" },
         { "analog",    "模拟手柄" },
         { "dualshock", "双震动手柄" },
         { "negcon",    "neGcon手柄" },
         { "guncon",    "光枪" },
         { "none",      "无" },
         { NULL, NULL },
      },
      "none",
   },
   {
      "pcsx_rearmed_pad4type",
      "手柄4类型",
      "玩家4的手柄类型",
      {
         { "standard",  "标准手柄" },
         { "analog",    "模拟手柄" },
         { "dualshock", "双震动手柄" },
         { "negcon",    "neGcon手柄" },
         { "guncon",    "光枪手柄" },
         { "none",      "无" },
         { NULL, NULL },
      },
      "none",
   },
   {
      "pcsx_rearmed_pad5type",
      "手柄5类型",
      "玩家5的手柄类型",
      {
         { "standard",  "标准手柄" },
         { "analog",    "模拟手柄" },
         { "dualshock", "双震动手柄" },
         { "negcon",    "neGcon手柄" },
         { "guncon",    "光枪" },
         { "none",      "无" },
         { NULL, NULL },
      },
      "none",
   },{
      "pcsx_rearmed_pad6type",
      "手柄6类型",
      "玩家6的手柄类型",
      {
         { "standard",  "标准手柄" },
         { "analog",    "模拟手柄" },
         { "dualshock", "双震动手柄" },
         { "negcon",    "neGcon手柄" },
         { "guncon",    "光枪" },
         { "none",      "无" },
         { NULL, NULL },
      },
      "none",
   },{
      "pcsx_rearmed_pad7type",
      "手柄7类型",
      "玩家7的手柄类型",
      {
         { "standard",  "标准手柄" },
         { "analog",    "模拟手柄" },
         { "dualshock", "双震动手柄" },
         { "negcon",    "neGcon手柄" },
         { "guncon",    "光枪" },
         { "none",      "无" },
         { NULL, NULL },
      },
      "none",
   },{
      "pcsx_rearmed_pad8type",
      "手柄8类型",
      "玩家8的手柄类型",
      {
         { "standard",  "标准手柄" },
         { "analog",    "模拟手柄" },
         { "dualshock", "双震动手柄" },
         { "negcon",    "NegCon" },
         { "guncon",    "光枪" },
         { "none",      "无" },
         { NULL, NULL },
      },
      "none",
   },
   {
      "pcsx_rearmed_multitap1",
      "多分插1",
      "启用/禁用手柄插槽1上的多分插器，可以在支持的游戏中最多允许5个玩家。",
      {
         { "auto",     NULL },
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "auto",
   },
   {
      "pcsx_rearmed_multitap2",
      "多分插2",
      "启用/禁用手柄插槽2上的多分插器，可以在支持的游戏中最多允许8个玩家，多分插1必须启用以实现此功能。",
      {
         { "auto",     "自动" },
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "auto",
   },
   {
      "pcsx_rearmed_negcon_deadzone",
      "neGcon扭转盲区（百分比）",
      "设置左模拟摇杆模拟'neGcon'输入设备的'扭转'功能时的盲区，用于消除漂移和不期望的输入。",
      {
         { "0",  NULL },
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { NULL, NULL },
      },
      "0",
   },
   {
      "pcsx_rearmed_negcon_response",
      "NegCon扭转响应",
      "指定左模拟摇杆模拟'neGcon'输入设备的'扭转'功能时的响应方式。",
      {
         { "linear",    "线性" },
         { "quadratic", "二次方" },
         { "cubic",     "三次方" },
         { NULL, NULL },
      },
      "linear",
   },
   {
      "pcsx_rearmed_analog_axis_modifier",
      "模拟摇杆轴边界",
      "模拟摇杆轴的边界范围。方形边界有助于圆形范围的手柄输入45度方向。",
      {
         { "circle", "圆形" },
         { "square", "方形" },
         { NULL, NULL },
      },
      "circle",
   },
   {
      "pcsx_rearmed_vibration",
      "启用震动",
      "启用手柄的震动反馈功能。",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled",
   },
   {
      "pcsx_rearmed_gunconadjustx",
      "光枪X轴调整",
      "使用光枪模式时，在X轴上指定一个偏移量，以解决模拟器的瞄准偏移问题。",
      {
         { "0", NULL },
         { "-25", NULL },
         { "-24", NULL },
         { "-23", NULL },
         { "-22", NULL },
         { "-21", NULL },
         { "-20", NULL },
         { "-19", NULL },
         { "-18", NULL },
         { "-17", NULL },
         { "-16", NULL },
         { "-15", NULL },
         { "-14", NULL },
         { "-13", NULL },
         { "-12", NULL },
         { "-11", NULL },
         { "-10", NULL },
         { "-09", NULL },
         { "-08", NULL },
         { "-07", NULL },
         { "-06", NULL },
         { "-05", NULL },
         { "-04", NULL },
         { "-03", NULL },
         { "-02", NULL },
         { "-01", NULL },
         { "00", NULL },
         { "01", NULL },
         { "02", NULL },
         { "03", NULL },
         { "04", NULL },
         { "05", NULL },
         { "06", NULL },
         { "07", NULL },
         { "08", NULL },
         { "09", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { NULL, NULL },
      },
      "0",
   },
   {
      "pcsx_rearmed_gunconadjusty",
      "光枪Y轴调整",
      "使用光枪模式时，在Y轴上指定一个偏移量，以解决模拟器的瞄准偏移问题。",
      {
         { "0", NULL },
         { "-25", NULL },
         { "-24", NULL },
         { "-23", NULL },
         { "-22", NULL },
         { "-21", NULL },
         { "-20", NULL },
         { "-19", NULL },
         { "-18", NULL },
         { "-17", NULL },
         { "-16", NULL },
         { "-15", NULL },
         { "-14", NULL },
         { "-13", NULL },
         { "-12", NULL },
         { "-11", NULL },
         { "-10", NULL },
         { "-09", NULL },
         { "-08", NULL },
         { "-07", NULL },
         { "-06", NULL },
         { "-05", NULL },
         { "-04", NULL },
         { "-03", NULL },
         { "-02", NULL },
         { "-01", NULL },
         { "00", NULL },
         { "01", NULL },
         { "02", NULL },
         { "03", NULL },
         { "04", NULL },
         { "05", NULL },
         { "06", NULL },
         { "07", NULL },
         { "08", NULL },
         { "09", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { NULL, NULL },
      },
      "0",
   },
   {
      "pcsx_rearmed_gunconadjustratiox",
      "光枪X轴调整比例",
      "使用光枪模式时，在X轴上指定一个调整比例，以解决模拟器的瞄准偏移问题。",
      {
         { "1", NULL },
         { "0.75", NULL },
         { "0.76", NULL },
         { "0.77", NULL },
         { "0.78", NULL },
         { "0.79", NULL },
         { "0.80", NULL },
         { "0.81", NULL },
         { "0.82", NULL },
         { "0.83", NULL },
         { "0.84", NULL },
         { "0.85", NULL },
         { "0.86", NULL },
         { "0.87", NULL },
         { "0.88", NULL },
         { "0.89", NULL },
         { "0.90", NULL },
         { "0.91", NULL },
         { "0.92", NULL },
         { "0.93", NULL },
         { "0.94", NULL },
         { "0.95", NULL },
         { "0.96", NULL },
         { "0.97", NULL },
         { "0.98", NULL },
         { "0.99", NULL },
         { "1.00", NULL },
         { "1.01", NULL },
         { "1.02", NULL },
         { "1.03", NULL },
         { "1.04", NULL },
         { "1.05", NULL },
         { "1.06", NULL },
         { "1.07", NULL },
         { "1.08", NULL },
         { "1.09", NULL },
         { "1.10", NULL },
         { "1.11", NULL },
         { "1.12", NULL },
         { "1.13", NULL },
         { "1.14", NULL },
         { "1.15", NULL },
         { "1.16", NULL },
         { "1.17", NULL },
         { "1.18", NULL },
         { "1.19", NULL },
         { "1.20", NULL },
         { "1.21", NULL },
         { "1.22", NULL },
         { "1.23", NULL },
         { "1.24", NULL },
         { "1.25", NULL },
         { NULL, NULL },
      },
      "1",
   },
   {
      "pcsx_rearmed_gunconadjustratioy",
      "光枪Y轴调整比例",
      "使用光枪模式时，在Y轴上指定一个调整比例，以解决模拟器的瞄准偏移问题。",
      {
         { "1", NULL },
         { "0.75", NULL },
         { "0.76", NULL },
         { "0.77", NULL },
         { "0.78", NULL },
         { "0.79", NULL },
         { "0.80", NULL },
         { "0.81", NULL },
         { "0.82", NULL },
         { "0.83", NULL },
         { "0.84", NULL },
         { "0.85", NULL },
         { "0.86", NULL },
         { "0.87", NULL },
         { "0.88", NULL },
         { "0.89", NULL },
         { "0.90", NULL },
         { "0.91", NULL },
         { "0.92", NULL },
         { "0.93", NULL },
         { "0.94", NULL },
         { "0.95", NULL },
         { "0.96", NULL },
         { "0.97", NULL },
         { "0.98", NULL },
         { "0.99", NULL },
         { "1.00", NULL },
         { "1.01", NULL },
         { "1.02", NULL },
         { "1.03", NULL },
         { "1.04", NULL },
         { "1.05", NULL },
         { "1.06", NULL },
         { "1.07", NULL },
         { "1.08", NULL },
         { "1.09", NULL },
         { "1.10", NULL },
         { "1.11", NULL },
         { "1.12", NULL },
         { "1.13", NULL },
         { "1.14", NULL },
         { "1.15", NULL },
         { "1.16", NULL },
         { "1.17", NULL },
         { "1.18", NULL },
         { "1.19", NULL },
         { "1.20", NULL },
         { "1.21", NULL },
         { "1.22", NULL },
         { "1.23", NULL },
         { "1.24", NULL },
         { "1.25", NULL },
         { NULL, NULL },
      },
      "1",
   },
   {
      "pcsx_rearmed_dithering",
      "启用抖动",
      "如果关闭，禁用PSX用于消除色彩条块的抖动算法。",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
#if defined HAVE_LIBNX || defined _3DS
	  "disabled",
#else
      "enabled",
#endif
   },

#if defined(LIGHTREC) || defined(NEW_DYNAREC)
   {
      "pcsx_rearmed_drc",
      "动态重编译",
      "使用动态重编译或者解释器（较慢）CPU内核。",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled",
   },
#endif /* LIGHTREC || NEW_DYNAREC */

#ifdef NEW_DYNAREC
   {
      "pcsx_rearmed_psxclock",
      "PSX CPU频率",
#ifdef HAVE_PRE_ARMV7
      "对PSX CPU超频或者降频，缺省是50。",
#else
      "对PSX CPU超频或者降频，缺省是57。",
#endif
      {
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { "41",  NULL },
         { "42",  NULL },
         { "43",  NULL },
         { "44",  NULL },
         { "45",  NULL },
         { "46",  NULL },
         { "47",  NULL },
         { "48",  NULL },
         { "49",  NULL },
         { "50",  NULL },
         { "51",  NULL },
         { "52",  NULL },
         { "53",  NULL },
         { "54",  NULL },
         { "55",  NULL },
         { "56",  NULL },
         { "57",  NULL },
         { "58",  NULL },
         { "59",  NULL },
         { "60",  NULL },
         { "61",  NULL },
         { "62",  NULL },
         { "63",  NULL },
         { "64",  NULL },
         { "65",  NULL },
         { "66",  NULL },
         { "67",  NULL },
         { "68",  NULL },
         { "69",  NULL },
         { "70",  NULL },
         { "71",  NULL },
         { "72",  NULL },
         { "73",  NULL },
         { "74",  NULL },
         { "75",  NULL },
         { "76",  NULL },
         { "77",  NULL },
         { "78",  NULL },
         { "79",  NULL },
         { "80",  NULL },
         { "81",  NULL },
         { "82",  NULL },
         { "83",  NULL },
         { "84",  NULL },
         { "85",  NULL },
         { "86",  NULL },
         { "87",  NULL },
         { "88",  NULL },
         { "89",  NULL },
         { "90",  NULL },
         { "91",  NULL },
         { "92",  NULL },
         { "93",  NULL },
         { "94",  NULL },
         { "95",  NULL },
         { "96",  NULL },
         { "97",  NULL },
         { "98",  NULL },
         { "99",  NULL },
         { "100", NULL },
         { NULL, NULL },
      },
#ifdef HAVE_PRE_ARMV7
      "50",
#else
      "57",
#endif
   },
#endif /* NEW_DYNAREC */

#ifdef GPU_NEON
   {
      "pcsx_rearmed_neon_interlace_enable",
      "启用隔行模式",
      "启用伪扫描线效果。",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      "pcsx_rearmed_neon_enhancement_enable",
      "增强分辨率（较慢）",
      "以性能为代价以两倍分辨率进行渲染。",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      "pcsx_rearmed_neon_enhancement_no_main",
      "增强分辨率（速度增强）",
      "对增强分辨率进行速度增强修改（有些游戏会图像错误）。",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },
#endif /* GPU_NEON */

   {
      "pcsx_rearmed_duping_enable",
      "帧重用",
      "提速功能。如果没有新数据，重用上一帧。",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled",
   },
   {
      "pcsx_rearmed_display_internal_fps",
      "显示内部FPS",
      "在OSD信息显示帧率。",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },

   /* GPU PEOPS OPTIONS */
#ifdef GPU_PEOPS
   {
      "pcsx_rearmed_show_gpu_peops_settings",
      "高级GPU P.E.Op.S.设置",
      "显示或隐藏高级GPU插件设置。\n"
	  "注意：必须重新切换快捷菜单以生效。",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      "pcsx_rearmed_gpu_peops_odd_even_bit",
      "(GPU) 奇数/偶数比特位修改",
      "《穿越时空》游戏需要",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      "pcsx_rearmed_gpu_peops_expand_screen_width",
      "(GPU) 扩展屏幕宽度",
      "用于Capcom飞行游戏",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      "pcsx_rearmed_gpu_peops_ignore_brightness",
      "(GPU) 忽略亮度色彩",
      "《露娜：银河之星》游戏的黑屏功能",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      "pcsx_rearmed_gpu_peops_disable_coord_check",
      "(GPU) 禁用坐标检查",
      "兼容性模式",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      "pcsx_rearmed_gpu_peops_lazy_screen_update",
      "(GPU) 延迟屏幕更新",
      "《Pandemonium 2》游戏需要",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      "pcsx_rearmed_gpu_peops_old_frame_skip",
      "(GPU) 旧式跳帧",
      "跳过每个第二帧",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled",
   },
   {
      "pcsx_rearmed_gpu_peops_repeated_triangles",
      "(GPU) 重复的平面纹理三角形",
      "《星球大战：黑暗原力》游戏需要",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      "pcsx_rearmed_gpu_peops_quads_with_triangles",
      "(GPU) 和三角形一起绘制四边形",
      "更好的g色彩，更差的纹理。",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      "pcsx_rearmed_gpu_peops_fake_busy_state",
      "(GPU) 伪'GPU忙碌'状态",
      "绘制后切换忙碌标志",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },
#endif

    /* GPU UNAI Advanced Options */
#ifdef GPU_UNAI
   {
      "pcsx_rearmed_show_gpu_unai_settings",
      "高级GPU UNAI/PCSX4All设置",
      "显示或隐藏高级GPU设置，这些设置须要重启内核以生效。\n"
	  "注意：必须重新切换快捷菜单以生效。",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcsx_rearmed_gpu_unai_blending",
      "(GPU) 启用混合",
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcsx_rearmed_gpu_unai_lighting",
      "(GPU) 启用光照",
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcsx_rearmed_gpu_unai_fast_lighting",
      "(GPU) 启用快速光照",
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcsx_rearmed_gpu_unai_ilace_force",
      "(GPU) 启用强制隔行",
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcsx_rearmed_gpu_unai_pixel_skip",
      "(GPU) 启用像素跳过",
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
#endif /* GPU UNAI Advanced Settings */

   {
      "pcsx_rearmed_show_bios_bootlogo",
      "显示BIOS启动标志",
      "如果启用，在启动或者复位时显示PlayStation标志（破坏有些游戏运行）。",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      "pcsx_rearmed_spu_reverb",
      "声音混响",
      "启用或禁用音频混响效果。",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled",
   },
   {
      "pcsx_rearmed_spu_interpolation",
      "声音插值算法",
      NULL,
      {
         { "simple",   "简单" },
         { "gaussian", "高斯" },
         { "cubic",    "立方" },
         { "off",      "禁用" },
         { NULL, NULL },
      },
      "simple",
   },
   {
      "pcsx_rearmed_idiablofix",
      "《暗黑破坏神》音乐修正",
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      "pcsx_rearmed_pe2_fix",
      "《寄生前夜 2》/《汪达尔之心 1/2》修正",
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      "pcsx_rearmed_inuyasha_fix",
      "《犬夜叉战国之战》修正",
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },
#ifndef _WIN32
   {
      "pcsx_rearmed_async_cd",
      "CD访问方式（须重启）",
      "选择从游戏光盘镜像读取数据的方式。\n"
      "'同步'模拟原始硬件。'异步'可以减少慢速存储设备的卡顿。\n"
      {
         { "sync", "同步" },
         { "async",  "异步" },
         { NULL, NULL},
      },
      "sync",
   },
#endif
   /* ADVANCED OPTIONS */
   {
      "pcsx_rearmed_noxadecoding",
      "XA解码",
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled",
   },
   {
      "pcsx_rearmed_nocdaudio",
      "CD音频",
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled",
   },
   {
      "pcsx_rearmed_spuirq",
      "SPU IRQ始终启用",
      "兼容性调节，大部分情况下应该保持关闭。",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },

#ifdef NEW_DYNAREC
   {
      "pcsx_rearmed_nosmccheck",
      "（速度优化）禁用SMC检查",
      "可能导致载入时崩溃，破坏内存卡。",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      "pcsx_rearmed_gteregsunneeded",
      "（速度优化）Assume GTE Regs Unneeded",
      "可能导致图像错误。",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      "pcsx_rearmed_nogteflags",
      "（速度优化）禁用GTE标志",
      "可能导致图像错误。",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },
#endif /* NEW_DYNAREC */

   { NULL, NULL, NULL, {{0}}, NULL },
};

/* RETRO_LANGUAGE_ESPERANTO */

/* RETRO_LANGUAGE_POLISH */

/* RETRO_LANGUAGE_VIETNAMESE */

/* RETRO_LANGUAGE_ARABIC */

/* RETRO_LANGUAGE_GREEK */

/* RETRO_LANGUAGE_TURKISH */

struct retro_core_option_definition option_defs_tr[] = {
   {
      "pcsx_rearmed_frameskip",
      "Kare Atlama",
      "Görsel pürüzsüzlük pahasına performansı artırmak için ne kadar karenin atlanması gerektiğini seçin.",
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "pcsx_rearmed_bios",
      "BIOS Kullan",
      "Gerçek bios dosyasını (varsa) veya öykünmüş bios'u (HLE) kullanmanızı sağlar. Daha iyi uyumluluk için resmi bios dosyasını kullanmanız önerilir.",
      {
         { "auto", "otomatik" },
         { "HLE",  "hle" },
         { NULL, NULL },
      },
      "auto",
   },
   {
      "pcsx_rearmed_region",
      "Bölge",
      "Sistemin hangi bölgeden olduğunu seçin. NTSC için 60 Hz, PAL için 50 Hz.",
      {
         { "auto", "otomatik" },
         { "NTSC", "ntsc" },
         { "PAL",  "pal" },
         { NULL, NULL },
      },
      "auto",
   },
   {
      "pcsx_rearmed_memcard2",
      "İkinci Bellek Kartını Etkinleştir (Paylaşılan)",
      "2. Hafıza kartı yuvasını etkinleştirin. Bu hafıza kartı tüm oyunlar arasında paylaşılır.",
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "pcsx_rearmed_pad1type",
      "Kumanda 1 Tipi",
      "1. Oyuncu için kontrolör tipi",
      {
         { "standard",  NULL },
         { "analog",    NULL },
         { "dualshock", NULL },
         { "negcon",    NULL },
         { "guncon",    NULL },
         { "mouse",     NULL },
         { "none",      "hiçbiri" },
         { NULL, NULL },
      },
      "standard",
   },
   {
      "pcsx_rearmed_pad2type",
      "Kumanda 2 Tipi",
      "2. Oyuncu için kontrolör tipi",
      {
         { "standard",  NULL },
         { "analog",    NULL },
         { "dualshock", NULL },
         { "negcon",    NULL },
         { "guncon",    NULL },
         { "mouse",     NULL },
         { "none",      "hiçbiri" },
         { NULL, NULL },
      },
      "standard",
   },
   {
      "pcsx_rearmed_pad3type",
      "Kumanda 3 Tipi",
      "3. Oyuncu için kontrolör tipi",
      {
         { "standard",  NULL },
         { "analog",    NULL },
         { "dualshock", NULL },
         { "negcon",    NULL },
         { "guncon",    NULL },
         { "mouse",     NULL },
         { "none",      "hiçbiri" },
         { NULL, NULL },
      },
      "none",
   },
   {
      "pcsx_rearmed_pad4type",
      "Kumanda 4 Tipi",
      "4. Oyuncu için kontrolör tipi",
      {
         { "standard",  NULL },
         { "analog",    NULL },
         { "dualshock", NULL },
         { "negcon",    NULL },
         { "guncon",    NULL },
         { "mouse",     NULL },
         { "none",      "hiçbiri" },
         { NULL, NULL },
      },
      "none",
   },
   {
      "pcsx_rearmed_pad5type",
      "Kumanda 5 Tipi",
      "5. Oyuncu için kontrolör tipi",
      {
         { "standard",  NULL },
         { "analog",    NULL },
         { "dualshock", NULL },
         { "negcon",    NULL },
         { "guncon",    NULL },
         { "mouse",     NULL },
         { "none",      "hiçbiri" },
         { NULL, NULL },
      },
      "none",
   },{
      "pcsx_rearmed_pad6type",
      "Kumanda 6 Tipi",
      "6. Oyuncu için kontrolör tipi",
      {
         { "standard",  NULL },
         { "analog",    NULL },
         { "dualshock", NULL },
         { "negcon",    NULL },
         { "guncon",    NULL },
         { "mouse",     NULL },
         { "none",      "hiçbiri" },
         { NULL, NULL },
      },
      "none",
   },{
      "pcsx_rearmed_pad7type",
      "Kumanda 7 Tipi",
      "7. Oyuncu için kontrolör tipi",
      {
         { "standard",  NULL },
         { "analog",    NULL },
         { "dualshock", NULL },
         { "negcon",    NULL },
         { "guncon",    NULL },
         { "mouse",     NULL },
         { "none",      "hiçbiri" },
         { NULL, NULL },
      },
      "none",
   },{
      "pcsx_rearmed_pad8type",
      "Kumanda 8 Tipi",
      "8. Oyuncu için kontrolör tipi",
      {
         { "standard",  NULL },
         { "analog",    NULL },
         { "dualshock", NULL },
         { "negcon",    NULL },
         { "guncon",    NULL },
         { "mouse",     NULL },
         { "none",      "hiçbiri" },
         { NULL, NULL },
      },
      "none",
   },
   {
      "pcsx_rearmed_multitap1",
      "Multitap 1",
      "Bağlantı noktası 1'deki multitap'ı etkinleştirir / devre dışı bırakır ve izin veren oyunlarda 5 oyuncuya kadar izin verir.",
      {
         { "auto",     "otomatik" },
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "auto",
   },
   {
      "pcsx_rearmed_multitap2",
      "Multitap 2",
      "Bağlantı noktası 2'deki multitap'ı etkinleştirir/devre dışı bırakır ve izin veren oyunlarda 8 oyuncuya kadar izin verir. Bunun çalışması için Multitap 1'in etkinleştirilmesi gerekir.",
      {
         { "auto",     "otomatik" },
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "auto",
   },
   {
      "pcsx_rearmed_negcon_deadzone",
      "NegCon Twist Deadzone (Yüzdelik)",
      "Öykünülmüş neGcon kontrolörünün 'büküm' eylemini simüle ederken RetroPad sol analog çubuğunun ölü bölgesini ayarlar. Sürüklenme/istenmeyen girişi ortadan kaldırmak için kullanılır.",
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "pcsx_rearmed_negcon_response",
      "NegCon Twist Response",
      "Öykünülmüş neGcon kontrolörünün 'bükümünü' simule etmek için bir RetroPad sol analog çubuğu kullanırken analog cevabını belirtir.",
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "pcsx_rearmed_vibration",
      "Titreşimi Etkinleştir",
      "Titreşim özelliklerini destekleyen kontrolörler için titreşim geri bildirimini etkinleştirir.",
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "pcsx_rearmed_dithering",
      "Dithering Etkinleştir",
      "Kapalı ise, PSX'in renk bantlarıyla mücadele etmek için uyguladığı renk taklidi düzenini devre dışı bırakır.",
      {
         { NULL, NULL },
      },
      NULL
   },

#ifdef NEW_DYNAREC
   {
      "pcsx_rearmed_drc",
      "Dinamik Yeniden Derleyici",
      "Çekirdeğin dinamik yeniden derleyici veya tercüman(daha yavaş) CPU talimatlarını kullanmasını sağlar.",
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "pcsx_rearmed_psxclock",
      "PSX CPU Saat Hızı",
#ifdef HAVE_PRE_ARMV7
      "Overclock or underclock the PSX clock. Default is 50",
#else
      "Overclock or underclock the PSX clock. Default is 57",
#endif
      {
         { NULL, NULL },
      },
      NULL
   },
#endif /* NEW_DYNAREC */

#ifdef __ARM_NEON__
   {
      "pcsx_rearmed_neon_interlace_enable",
      "Interlacing Mode'u etkinleştir",
      "Sahte tarama çizgileri efektini etkinleştirir.",
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "pcsx_rearmed_neon_enhancement_enable",
      "Geliştirilmiş Çözünürlük (Yavaş)",
      "Düşük performans pahasına çift çözünürlükte işler.",
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "pcsx_rearmed_neon_enhancement_no_main",
      "Geliştirilmiş Çözünürlük (Speed Hack)",
      "Geliştirilmiş çözünürlük seçeneği için hız aşırtma(bazı oyunlarda sorun çıkartabilir).",
      {
         { NULL, NULL },
      },
      NULL
   },
#endif /* __ARM_NEON__ */

   {
      "pcsx_rearmed_duping_enable",
      "Frame Duping",
      "Yeni bir veri yoksa, bir hızlandırma, son kareyi yeniden çizer/yeniden kullanır.",
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "pcsx_rearmed_display_internal_fps",
      "Dahili FPS'yi görüntüle",
      "Etkinleştirildiğinde ekranda saniye başına kareyi gösterir.",
      {
         { NULL, NULL },
      },
      NULL
   },

   /* GPU PEOPS OPTIONS */
#ifdef GPU_PEOPS
   {
      "pcsx_rearmed_show_gpu_peops_settings",
      "Gelişmiş GPU Ayarlarını Göster",
      "Çeşitli GPU düzeltmelerini etkinleştirin veya devre dışı bırakın. Ayarların etkili olması için core'un yeniden başlatılması gerekebilir. NOT: Bu ayarın etkili olabilmesi için Hızlı Menü’nün değiştirilmesi gerekir.",
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "pcsx_rearmed_gpu_peops_odd_even_bit",
      "(GPU) Odd/Even Bit Hack",
      "Chrono Cross için gerekli.",
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "pcsx_rearmed_gpu_peops_expand_screen_width",
      "(GPU) Ekran Genişliğini Genişlet",
      "Capcom dövüş oyunları",
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "pcsx_rearmed_gpu_peops_ignore_brightness",
      "(GPU) Parlaklık Rengini Yoksay",
      "Lunar Silver Star Story oyunlarında siyah ekran",
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "pcsx_rearmed_gpu_peops_disable_coord_check",
      "(GPU) Koordinat Kontrolünü Devre Dışı Bırak",
      "Uyumluluk modu",
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "pcsx_rearmed_gpu_peops_lazy_screen_update",
      "(GPU) Tembel Ekran Güncellemesi",
      "Pandemonium 2",
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "pcsx_rearmed_gpu_peops_old_frame_skip",
      "(GPU) Eski Çerçeve Atlama",
      "Her ikinci kareyi atla",
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "pcsx_rearmed_gpu_peops_repeated_triangles",
      "(GPU) Tekrarlanan Düz Doku Üçgenleri",
      "Star Wars: Dark Forces için gerekli",
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "pcsx_rearmed_gpu_peops_quads_with_triangles",
      "(GPU) Üçgenler ile Dörtlü Çiz",
      "Daha iyi g renkler, daha kötü dokular",
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "pcsx_rearmed_gpu_peops_fake_busy_state",
      "(GPU) Sahte 'Gpu Meşgul' Konumları",
      "Çizimden sonra meşgul bayraklarını değiştir",
      {
         { NULL, NULL },
      },
      NULL
   },
#endif /* GPU_PEOPS */

   {
      "pcsx_rearmed_show_bios_bootlogo",
      "Bios Bootlogo'yu Göster",
      "Etkinleştirildiğinde, başlatırken veya sıfırlarken PlayStation logosunu gösterir. (Bazı oyunları bozabilir).",
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "pcsx_rearmed_spu_reverb",
      "Ses Yankısı",
      "Ses yankı efektini etkinleştirir veya devre dışı bırakır.",
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "pcsx_rearmed_spu_interpolation",
      "Ses Enterpolasyonu",
      NULL,
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "pcsx_rearmed_idiablofix",
      "Diablo Müzik Düzeltmesi",
      NULL,
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "pcsx_rearmed_pe2_fix",
      "Parasite Eve 2/Vandal Hearts 1/2 Düzeltmleri",
      NULL,
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "pcsx_rearmed_inuyasha_fix",
      "InuYasha Sengoku Battle Düzeltmesi",
      NULL,
      {
         { NULL, NULL },
      },
      NULL
   },

   /* ADVANCED OPTIONS */
   {
      "pcsx_rearmed_noxadecoding",
      "XA Kod Çözme",
      NULL,
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "pcsx_rearmed_nocdaudio",
      "CD Ses",
      NULL,
      {
         { NULL, NULL },
      },
      NULL
   },

#ifdef NEW_DYNAREC
   {
      "pcsx_rearmed_nosmccheck",
      "(Speed Hack) SMC Kontrollerini Devre Dışı Bırak",
      "Yükleme sırasında çökmelere neden olabilir, hafıza kartını bozabilir.",
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "pcsx_rearmed_gteregsunneeded",
      "(Speed Hack) GTE'nin Gereksiz Olduğunu Varsayın",
      "Grafiksel bozukluklara neden olabilir.",
      {
         { NULL, NULL },
      },
      NULL
   },
   {
      "pcsx_rearmed_nogteflags",
      "(Speed Hack) GTE Bayraklarını Devredışı Bırakın",
      "Grafiksel bozukluklara neden olur.",
      {
         { NULL, NULL },
      },
      NULL
   },
#endif /* NEW_DYNAREC */

   { NULL, NULL, NULL, {{0}}, NULL },
};

#ifdef __cplusplus
}
#endif

#endif
