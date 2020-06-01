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
      "手柄 1 类型",
      "玩家 1 的手柄类型",
      {
         { "standard",  "标准" },
         { "analog",    "模拟" },
         { "dualshock", "双震动" },
         { "negcon",    "neGcon" },
         { "guncon",    "光枪" },
         { "none",      "无" },
         { NULL, NULL },
      },
      "standard",
   },
   {
      "pcsx_rearmed_pad2type",
      "手柄  类型",
      "玩家 2 的手柄类型",
      {
         { "standard",  "标准" },
         { "analog",    "模拟" },
         { "dualshock", "双震动" },
         { "negcon",    "neGcon" },
         { "guncon",    "光枪" },
         { "none",      "无" },
         { NULL, NULL },
      },
      "standard",
   },
   {
      "pcsx_rearmed_pad3type",
      "手柄 3 类型",
      "玩家 3 的手柄类型",
      {
         { "standard",  "标准" },
         { "analog",    "模拟" },
         { "dualshock", "双震动" },
         { "negcon",    "neGcon" },
         { "guncon",    "光枪" },
         { "none",      "无" },
         { NULL, NULL },
      },
      "none",
   },
   {
      "pcsx_rearmed_pad4type",
      "手柄 4 类型",
      "玩家 4 的手柄类型",
      {
         { "standard",  "标准" },
         { "analog",    "模拟" },
         { "dualshock", "双震动" },
         { "negcon",    "neGcon" },
         { "guncon",    "光枪" },
         { "none",      "无" },
         { NULL, NULL },
      },
      "none",
   },
   {
      "pcsx_rearmed_pad5type",
      "手柄 5 类型",
      "玩家 5 的手柄类型",
      {
         { "standard",  "标准" },
         { "analog",    "模拟" },
         { "dualshock", "双震动" },
         { "negcon",    "neGcon" },
         { "guncon",    "光枪" },
         { "none",      "无" },
         { NULL, NULL },
      },
      "none",
   },{
      "pcsx_rearmed_pad6type",
      "手柄 6 类型",
      "玩家 6 的手柄类型",
      {
         { "standard",  "标准" },
         { "analog",    "模拟" },
         { "dualshock", "双震动" },
         { "negcon",    "neGcon" },
         { "guncon",    "光枪" },
         { "none",      "无" },
         { NULL, NULL },
      },
      "none",
   },{
      "pcsx_rearmed_pad7type",
      "手柄 7 类型",
      "玩家 7 的手柄类型",
      {
         { "standard",  "标准" },
         { "analog",    "模拟" },
         { "dualshock", "双震动" },
         { "negcon",    "neGcon" },
         { "guncon",    "光枪" },
         { "none",      "无" },
         { NULL, NULL },
      },
      "none",
   },{
      "pcsx_rearmed_pad8type",
      "手柄 8 类型",
      "玩家 8 的手柄类型",
      {
         { "standard",  "标准" },
         { "analog",    "模拟" },
         { "dualshock", "双震动" },
         { "negcon",    "neGcon" },
         { "guncon",    "光枪" },
         { "none",      "无" },
         { NULL, NULL },
      },
      "none",
   },
   {
      "pcsx_rearmed_multitap1",
      "多分插 1",
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
      "多分插 2",
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
      "NegCon Twist Deadzone (Percent)",
      "Sets the deadzone of the RetroPad left analog stick when simulating the 'twist' action of emulated neGcon Controllers. Used to eliminate drift/unwanted input.",
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
      "NegCon Twist Response",
      "Specifies the analog response when using a RetroPad left analog stick to simulate the 'twist' action of emulated neGcon Controllers.",
      {
         { "linear",    NULL },
         { "quadratic", NULL },
         { "cubic",     NULL },
         { NULL, NULL },
      },
      "linear",
   },
   {
      "pcsx_rearmed_analog_axis_modifier",
      "Analog axis bounds.",
      "Range bounds for analog axis. Square bounds help controllers with highly circular ranges that are unable to fully saturate the x and y axis at 45degree deflections.",
      {
         { "circle", NULL },
         { "square", NULL },
         { NULL, NULL },
      },
      "circle",
   },
   {
      "pcsx_rearmed_vibration",
      "Enable Vibration",
      "Enables vibration feedback for controllers that supports vibration features.",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled",
   },
   {
      "pcsx_rearmed_gunconadjustx",
      "Guncon Adjust X",
      "When using Guncon mode, you can override aim in emulator if shots misaligned, this applies an increment on the x axis.",
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
      "Guncon Adjust Y",
      "When using Guncon mode, you can override aim in emulator if shots misaligned, this applies an increment on the y axis.",
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
      "Guncon Adjust Ratio X",
      "When using Guncon mode, you can override aim in emulator if shots misaligned, this applies a ratio on the x axis.",
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
      "Guncon Adjust Ratio Y",
      "When using Guncon mode, you can override aim in emulator if shots misaligned, this applies a ratio on the y axis.",
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
      "Enable Dithering",
      "If Off, disables the dithering pattern the PSX applies to combat color banding.",
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
      "Dynamic Recompiler",
      "Enables core to use dynamic recompiler or interpreter (slower) CPU instructions.",
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
      "PSX CPU Clock",
#ifdef HAVE_PRE_ARMV7
      "Overclock or underclock the PSX clock. Default is 50",
#else
      "Overclock or underclock the PSX clock. Default is 57",
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
      "Enable Interlacing Mode",
      "Enables fake scanlines effect.",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      "pcsx_rearmed_neon_enhancement_enable",
      "Enhanced Resolution (Slow)",
      "Renders in double resolution at the cost of lower performance.",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      "pcsx_rearmed_neon_enhancement_no_main",
      "Enhanced Resolution (Speed Hack)",
      "Speed hack for Enhanced resolution option (glitches some games).",
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
      "Frame Duping",
      "A speedup, redraws/reuses the last frame if there was no new data.",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled",
   },
   {
      "pcsx_rearmed_display_internal_fps",
      "Display Internal FPS",
      "Shows an on-screen frames per second counter when enabled.",
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
      "Advanced GPU P.E.Op.S. Settings",
      "Shows or hides advanced GPU plugin settings. NOTE: Quick Menu must be toggled for this setting to take effect.",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      "pcsx_rearmed_gpu_peops_odd_even_bit",
      "(GPU) Odd/Even Bit Hack",
      "Needed for Chrono Cross.",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      "pcsx_rearmed_gpu_peops_expand_screen_width",
      "(GPU) Expand Screen Width",
      "Capcom fighting games",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      "pcsx_rearmed_gpu_peops_ignore_brightness",
      "(GPU) Ignore Brightness Color",
      "Black screens in Lunar Silver Star Story games",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      "pcsx_rearmed_gpu_peops_disable_coord_check",
      "(GPU) Disable Coordinate Check",
      "Compatibility mode",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      "pcsx_rearmed_gpu_peops_lazy_screen_update",
      "(GPU) Lazy Screen Update",
      "Pandemonium 2",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      "pcsx_rearmed_gpu_peops_old_frame_skip",
      "(GPU) Old Frame Skipping",
      "Skip every second frame",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled",
   },
   {
      "pcsx_rearmed_gpu_peops_repeated_triangles",
      "(GPU) Repeated Flat Tex Triangles",
      "Needed by Star Wars: Dark Forces",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      "pcsx_rearmed_gpu_peops_quads_with_triangles",
      "(GPU) Draw Quads with Triangles",
      "Better g-colors, worse textures",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      "pcsx_rearmed_gpu_peops_fake_busy_state",
      "(GPU) Fake 'Gpu Busy' States",
      "Toggle busy flags after drawing",
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
      "Advance GPU UNAI/PCSX4All Settings",
      "Shows or hides advanced gpu settings. A core restart might be needed for settings to take effect. NOTE: Quick Menu must be toggled for this setting to take effect.",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcsx_rearmed_gpu_unai_blending",
      "(GPU) Enable Blending",
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
      "(GPU) Enable Lighting",
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
      "(GPU) Enable Fast Lighting",
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
      "(GPU) Enable Forced Interlace",
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
      "(GPU) Enable Pixel Skip",
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
      "Show Bios Bootlogo",
      "When enabled, shows the PlayStation logo when starting or resetting. (Breaks some games).",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      "pcsx_rearmed_spu_reverb",
      "Sound Reverb",
      "Enables or disables audio reverb effect.",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled",
   },
   {
      "pcsx_rearmed_spu_interpolation",
      "Sound Interpolation",
      NULL,
      {
         { "simple",   "Simple" },
         { "gaussian", "Gaussian" },
         { "cubic",    "Cubic" },
         { "off",      "disabled" },
         { NULL, NULL },
      },
      "simple",
   },
   {
      "pcsx_rearmed_idiablofix",
      "Diablo Music Fix",
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
      "Parasite Eve 2/Vandal Hearts 1/2 Fix",
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
      "InuYasha Sengoku Battle Fix",
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
      "CD Access Method (Restart)",
      "Select method used to read data from content disk images. 'Synchronous' mimics original hardware. 'Asynchronous' can reduce stuttering on devices with slow storage.",
      {
         { "sync", "Synchronous" },
         { "async",  "Asynchronous" },
         { NULL, NULL},
      },
      "sync",
   },
#endif
   /* ADVANCED OPTIONS */
   {
      "pcsx_rearmed_noxadecoding",
      "XA Decoding",
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
      "CD Audio",
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
      "SPU IRQ Always Enabled",
      "Compatibility tweak, should be left to off in most cases.",
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
      "(Speed Hack) Disable SMC Checks",
      "Will cause crashes when loading, break memcards.",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      "pcsx_rearmed_gteregsunneeded",
      "(Speed Hack) Assume GTE Regs Unneeded",
      "May cause graphical glitches.",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      "pcsx_rearmed_nogteflags",
      "(Speed Hack) Disable GTE Flags",
      "Will cause graphical glitches.",
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
