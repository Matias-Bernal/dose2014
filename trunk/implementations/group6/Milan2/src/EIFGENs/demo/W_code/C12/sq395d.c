/*
 * Class SQLITE_STATEMENT_ITERATION_CURSOR
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_395 [] = {417,394,0xFFFF};
static EIF_TYPE_INDEX gen_type1_395 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_395 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_395 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_395 [] = {509,0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_395 [] = {429,509,0,0xFFFF};
static EIF_TYPE_INDEX gen_type6_395 [] = {509,0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_395 [] = {429,509,0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_395 [] = {392,0xFFFF};
static EIF_TYPE_INDEX gen_type9_395 [] = {422,392,0xFFFF};
static EIF_TYPE_INDEX gen_type10_395 [] = {392,0xFFFF};
static EIF_TYPE_INDEX gen_type11_395 [] = {416,392,0xFFFF};
static EIF_TYPE_INDEX gen_type12_395 [] = {392,0xFFFF};


static struct desc_info desc_395[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 314, NULL},
	{1, (BODY_INDEX)-1, 417, gen_type0_395},
	{2, (BODY_INDEX)-1, 301, NULL},
	{3, (BODY_INDEX)-1, 301, NULL},
	{4, (BODY_INDEX)-1, 301, NULL},
	{5, (BODY_INDEX)-1, 301, NULL},
	{6, (BODY_INDEX)-1, 301, NULL},
	{7, (BODY_INDEX)-1, 301, NULL},
	{8, (BODY_INDEX)-1, 301, NULL},
	{9, (BODY_INDEX)-1, 301, NULL},
	{10, (BODY_INDEX)-1, 394, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_395},
	{14, (BODY_INDEX)-1, 0, gen_type2_395},
	{15, (BODY_INDEX)-1, 394, NULL},
	{16, (BODY_INDEX)-1, 394, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_395},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 31, NULL},
	{21, (BODY_INDEX)-1, 314, NULL},
	{22, (BODY_INDEX)-1, 314, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 32, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 394, NULL},
	{29, (BODY_INDEX)-1, 304, NULL},
	{30, (BODY_INDEX)-1, 394, NULL},
	{2381, (BODY_INDEX)-1, 301, NULL},
	{2382, (BODY_INDEX)-1, 147, NULL},
	{2383, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2385, (BODY_INDEX)-1, 301, NULL},
	{2386, (BODY_INDEX)-1, 301, NULL},
	{2387, (BODY_INDEX)-1, 301, NULL},
	{2388, (BODY_INDEX)-1, 301, NULL},
	{2389, (BODY_INDEX)-1, 345, NULL},
	{2390, (BODY_INDEX)-1, 301, NULL},
	{2384, (BODY_INDEX)-1, 345, NULL},
	{13399, (BODY_INDEX)-1, 409, NULL},
	{13400, (BODY_INDEX)-1, 301, NULL},
	{13401, (BODY_INDEX)-1, 301, NULL},
	{3081, (BODY_INDEX)-1, 345, NULL},
	{3082, (BODY_INDEX)-1, 345, NULL},
	{3083, (BODY_INDEX)-1, 345, NULL},
	{3084, (BODY_INDEX)-1, 304, NULL},
	{3085, (BODY_INDEX)-1, 345, NULL},
	{3086, (BODY_INDEX)-1, 366, NULL},
	{3087, (BODY_INDEX)-1, 345, NULL},
	{3088, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3089, (BODY_INDEX)-1, 345, NULL},
	{3090, (BODY_INDEX)-1, 345, NULL},
	{3091, (BODY_INDEX)-1, 345, NULL},
	{3092, (BODY_INDEX)-1, 304, NULL},
	{3093, (BODY_INDEX)-1, 304, NULL},
	{3094, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3095, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3096, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3097, (BODY_INDEX)-1, 345, NULL},
	{3098, (BODY_INDEX)-1, 304, NULL},
	{3099, (BODY_INDEX)-1, 304, NULL},
	{3100, (BODY_INDEX)-1, 304, NULL},
	{3101, (BODY_INDEX)-1, 304, NULL},
	{3102, (BODY_INDEX)-1, 304, NULL},
	{3103, (BODY_INDEX)-1, 304, NULL},
	{3104, (BODY_INDEX)-1, 304, NULL},
	{3105, (BODY_INDEX)-1, 304, NULL},
	{3106, (BODY_INDEX)-1, 345, NULL},
	{3107, (BODY_INDEX)-1, 345, NULL},
	{3108, (BODY_INDEX)-1, 345, NULL},
	{3109, (BODY_INDEX)-1, 345, NULL},
	{3110, (BODY_INDEX)-1, 345, NULL},
	{3168, (BODY_INDEX)-1, 345, NULL},
	{3169, (BODY_INDEX)-1, 304, NULL},
	{3170, (BODY_INDEX)-1, 304, NULL},
	{3171, (BODY_INDEX)-1, 345, NULL},
	{3172, (BODY_INDEX)-1, 345, NULL},
	{3173, (BODY_INDEX)-1, 345, NULL},
	{3174, (BODY_INDEX)-1, 345, NULL},
	{3175, (BODY_INDEX)-1, 345, NULL},
	{3176, (BODY_INDEX)-1, 345, NULL},
	{3177, (BODY_INDEX)-1, 304, NULL},
	{3178, (BODY_INDEX)-1, 345, NULL},
	{3179, (BODY_INDEX)-1, 345, NULL},
	{2391, (BODY_INDEX)-1, 509, gen_type4_395},
	{2392, (BODY_INDEX)-1, 301, NULL},
	{2393, (BODY_INDEX)-1, 429, gen_type5_395},
	{2394, (BODY_INDEX)-1, 509, gen_type6_395},
	{13483, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13484, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13485, 0, 395, NULL},
	{13486, 8, 429, gen_type7_395},
	{13489, 28, 345, NULL},
	{13491, 24, 301, NULL},
	{13492, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13494, 16, 392, gen_type8_395},
	{13495, (BODY_INDEX)-1, 422, gen_type9_395},
	{13487, (BODY_INDEX)-1, 392, NULL},
	{13490, (BODY_INDEX)-1, 301, NULL},
	{13493, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 392, gen_type10_395},
	{13488, (BODY_INDEX)-1, 416, gen_type11_395},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 392, gen_type12_395},
};

extern void Init395(void);
void Init395(void)
{
	IDSC(desc_395, 0, 394);
	IDSC(desc_395 + 1, 2, 394);
	IDSC(desc_395 + 32, 354, 394);
	IDSC(desc_395 + 35, 353, 394);
	IDSC(desc_395 + 42, 265, 394);
	IDSC(desc_395 + 45, 267, 394);
	IDSC(desc_395 + 75, 268, 394);
	IDSC(desc_395 + 87, 269, 394);
	IDSC(desc_395 + 91, 136, 394);
	IDSC(desc_395 + 100, 73, 394);
	IDSC(desc_395 + 104, 62, 394);
}


#ifdef __cplusplus
}
#endif
