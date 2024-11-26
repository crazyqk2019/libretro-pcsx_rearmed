#ifndef __GPU_UNAI_GPU_ARM_H__
#define __GPU_UNAI_GPU_ARM_H__

#ifdef __cplusplus
extern "C" {
#endif

struct gpu_unai_inner_t;
struct spriteDriverArg;

void sprite_driver_4bpp_asm(void *pPixel, const u8 *pTxt_base,
	u32 count, const struct spriteDriverArg *arg);
void sprite_driver_8bpp_asm(void *pPixel, const u8 *pTxt_base,
	u32 count, const struct spriteDriverArg *arg);
void sprite_4bpp_x16_asm(void *d, const void *s, void *pal, int lines);

void poly_4bpp_asm(void *d, const struct gpu_unai_inner_t *inn, int count);
void poly_4bpp_l_asm(void *d, const struct gpu_unai_inner_t *inn, int count);

#ifdef __cplusplus
}
#endif

#endif /* __GPU_UNAI_GPU_ARM_H__ */
