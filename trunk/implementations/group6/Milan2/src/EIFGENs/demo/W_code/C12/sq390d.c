/*
 * Class SQLITE_STATEMENT_ITERATION_CURSOR
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_390 [] = {414,389,0xFFFF};
static EIF_TYPE_INDEX gen_type1_390 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_390 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_390 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_390 [] = {538,0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_390 [] = {425,538,0,0xFFFF};
static EIF_TYPE_INDEX gen_type6_390 [] = {538,0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_390 [] = {425,538,0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_390 [] = {388,0xFFFF};
static EIF_TYPE_INDEX gen_type9_390 [] = {416,388,0xFFFF};
static EIF_TYPE_INDEX gen_type10_390 [] = {388,0xFFFF};
static EIF_TYPE_INDEX gen_type11_390 [] = {417,388,0xFFFF};
static EIF_TYPE_INDEX gen_type12_390 [] = {388,0xFFFF};


static struct desc_info desc_390[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 310, NULL},
	{1, (BODY_INDEX)-1, 414, gen_type0_390},
	{2, (BODY_INDEX)-1, 297, NULL},
	{3, (BODY_INDEX)-1, 297, NULL},
	{4, (BODY_INDEX)-1, 297, NULL},
	{5, (BODY_INDEX)-1, 297, NULL},
	{6, (BODY_INDEX)-1, 297, NULL},
	{7, (BODY_INDEX)-1, 297, NULL},
	{8, (BODY_INDEX)-1, 297, NULL},
	{9, (BODY_INDEX)-1, 297, NULL},
	{10, (BODY_INDEX)-1, 389, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_390},
	{14, (BODY_INDEX)-1, 0, gen_type2_390},
	{15, (BODY_INDEX)-1, 389, NULL},
	{16, (BODY_INDEX)-1, 389, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_390},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 31, NULL},
	{21, (BODY_INDEX)-1, 310, NULL},
	{22, (BODY_INDEX)-1, 310, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 32, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 389, NULL},
	{29, (BODY_INDEX)-1, 300, NULL},
	{30, (BODY_INDEX)-1, 389, NULL},
	{2267, (BODY_INDEX)-1, 297, NULL},
	{2268, (BODY_INDEX)-1, 144, NULL},
	{2269, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2256, (BODY_INDEX)-1, 297, NULL},
	{2257, (BODY_INDEX)-1, 297, NULL},
	{2258, (BODY_INDEX)-1, 297, NULL},
	{2259, (BODY_INDEX)-1, 297, NULL},
	{2260, (BODY_INDEX)-1, 341, NULL},
	{2261, (BODY_INDEX)-1, 297, NULL},
	{2262, (BODY_INDEX)-1, 341, NULL},
	{13333, (BODY_INDEX)-1, 405, NULL},
	{13334, (BODY_INDEX)-1, 297, NULL},
	{13335, (BODY_INDEX)-1, 297, NULL},
	{3023, (BODY_INDEX)-1, 341, NULL},
	{3024, (BODY_INDEX)-1, 341, NULL},
	{3025, (BODY_INDEX)-1, 341, NULL},
	{3026, (BODY_INDEX)-1, 300, NULL},
	{3027, (BODY_INDEX)-1, 341, NULL},
	{3028, (BODY_INDEX)-1, 368, NULL},
	{3029, (BODY_INDEX)-1, 341, NULL},
	{3030, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3031, (BODY_INDEX)-1, 341, NULL},
	{3032, (BODY_INDEX)-1, 341, NULL},
	{3033, (BODY_INDEX)-1, 341, NULL},
	{3034, (BODY_INDEX)-1, 300, NULL},
	{3035, (BODY_INDEX)-1, 300, NULL},
	{3036, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3037, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3038, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3039, (BODY_INDEX)-1, 341, NULL},
	{3040, (BODY_INDEX)-1, 300, NULL},
	{3041, (BODY_INDEX)-1, 300, NULL},
	{3042, (BODY_INDEX)-1, 300, NULL},
	{3043, (BODY_INDEX)-1, 300, NULL},
	{3044, (BODY_INDEX)-1, 300, NULL},
	{3045, (BODY_INDEX)-1, 300, NULL},
	{3046, (BODY_INDEX)-1, 300, NULL},
	{3047, (BODY_INDEX)-1, 300, NULL},
	{3048, (BODY_INDEX)-1, 341, NULL},
	{3049, (BODY_INDEX)-1, 341, NULL},
	{3050, (BODY_INDEX)-1, 341, NULL},
	{3051, (BODY_INDEX)-1, 341, NULL},
	{3052, (BODY_INDEX)-1, 341, NULL},
	{3128, (BODY_INDEX)-1, 341, NULL},
	{3129, (BODY_INDEX)-1, 300, NULL},
	{3130, (BODY_INDEX)-1, 300, NULL},
	{3131, (BODY_INDEX)-1, 341, NULL},
	{3132, (BODY_INDEX)-1, 341, NULL},
	{3133, (BODY_INDEX)-1, 341, NULL},
	{3134, (BODY_INDEX)-1, 341, NULL},
	{3135, (BODY_INDEX)-1, 341, NULL},
	{3136, (BODY_INDEX)-1, 341, NULL},
	{3137, (BODY_INDEX)-1, 300, NULL},
	{3138, (BODY_INDEX)-1, 341, NULL},
	{3139, (BODY_INDEX)-1, 341, NULL},
	{2265, (BODY_INDEX)-1, 538, gen_type4_390},
	{2266, (BODY_INDEX)-1, 297, NULL},
	{2263, (BODY_INDEX)-1, 425, gen_type5_390},
	{2264, (BODY_INDEX)-1, 538, gen_type6_390},
	{13355, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13356, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13357, 0, 391, NULL},
	{13358, 8, 425, gen_type7_390},
	{13361, 28, 341, NULL},
	{13363, 24, 297, NULL},
	{13364, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13366, 16, 388, gen_type8_390},
	{13367, (BODY_INDEX)-1, 416, gen_type9_390},
	{13359, (BODY_INDEX)-1, 388, NULL},
	{13362, (BODY_INDEX)-1, 297, NULL},
	{13365, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 388, gen_type10_390},
	{13360, (BODY_INDEX)-1, 417, gen_type11_390},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 388, gen_type12_390},
};

extern void Init390(void);
void Init390(void)
{
	IDSC(desc_390, 0, 389);
	IDSC(desc_390 + 1, 2, 389);
	IDSC(desc_390 + 32, 353, 389);
	IDSC(desc_390 + 35, 356, 389);
	IDSC(desc_390 + 42, 265, 389);
	IDSC(desc_390 + 45, 268, 389);
	IDSC(desc_390 + 75, 269, 389);
	IDSC(desc_390 + 87, 272, 389);
	IDSC(desc_390 + 91, 131, 389);
	IDSC(desc_390 + 100, 58, 389);
	IDSC(desc_390 + 104, 57, 389);
}


#ifdef __cplusplus
}
#endif