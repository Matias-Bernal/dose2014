/*
 * Class SQLITE_STATEMENT
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_392 [] = {414,391,0xFFFF};
static EIF_TYPE_INDEX gen_type1_392 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_392 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_392 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_392 [] = {538,0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_392 [] = {425,538,0,0xFFFF};
static EIF_TYPE_INDEX gen_type6_392 [] = {538,0,0xFFFF};


static struct desc_info desc_392[] = {
	{(BODY_INDEX) 13449, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 310, NULL},
	{1, (BODY_INDEX)-1, 414, gen_type0_392},
	{2, (BODY_INDEX)-1, 297, NULL},
	{3, (BODY_INDEX)-1, 297, NULL},
	{4, (BODY_INDEX)-1, 297, NULL},
	{5, (BODY_INDEX)-1, 297, NULL},
	{6, (BODY_INDEX)-1, 297, NULL},
	{7, (BODY_INDEX)-1, 297, NULL},
	{8, (BODY_INDEX)-1, 297, NULL},
	{9, (BODY_INDEX)-1, 297, NULL},
	{10, (BODY_INDEX)-1, 391, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_392},
	{14, (BODY_INDEX)-1, 0, gen_type2_392},
	{15, (BODY_INDEX)-1, 391, NULL},
	{16, (BODY_INDEX)-1, 391, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_392},
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
	{28, (BODY_INDEX)-1, 391, NULL},
	{29, (BODY_INDEX)-1, 300, NULL},
	{30, (BODY_INDEX)-1, 391, NULL},
	{2267, (BODY_INDEX)-1, 297, NULL},
	{2268, (BODY_INDEX)-1, 144, NULL},
	{2269, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13451, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{3894, (BODY_INDEX)-1, 297, NULL},
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
	{2265, (BODY_INDEX)-1, 538, gen_type4_392},
	{2266, (BODY_INDEX)-1, 297, NULL},
	{2263, (BODY_INDEX)-1, 425, gen_type5_392},
	{2264, (BODY_INDEX)-1, 538, gen_type6_392},
	{13450, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13452, 0, 307, NULL},
	{13453, 8, 390, NULL},
	{13454, 16, 307, NULL},
	{13455, 24, 391, NULL},
	{13456, 32, 144, NULL},
	{13457, (BODY_INDEX)-1, 389, NULL},
	{13458, (BODY_INDEX)-1, 389, NULL},
	{13459, (BODY_INDEX)-1, 306, NULL},
	{13460, (BODY_INDEX)-1, 353, NULL},
	{13461, (BODY_INDEX)-1, 353, NULL},
	{13462, 44, 353, NULL},
	{13463, 40, 297, NULL},
	{13464, (BODY_INDEX)-1, 297, NULL},
	{13430, (BODY_INDEX)-1, 297, NULL},
	{13431, (BODY_INDEX)-1, 297, NULL},
	{13432, (BODY_INDEX)-1, 297, NULL},
	{13433, (BODY_INDEX)-1, 297, NULL},
	{13434, 41, 297, NULL},
	{13435, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13436, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13437, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13438, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13439, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13440, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13441, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13442, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13443, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13444, 56, 300, NULL},
	{13445, 64, 300, NULL},
	{13446, 48, 353, NULL},
	{13447, 52, 341, NULL},
	{13448, (BODY_INDEX)-1, 300, NULL},
};

extern void Init392(void);
void Init392(void)
{
	IDSC(desc_392, 0, 391);
	IDSC(desc_392 + 1, 2, 391);
	IDSC(desc_392 + 32, 353, 391);
	IDSC(desc_392 + 35, 264, 391);
	IDSC(desc_392 + 37, 356, 391);
	IDSC(desc_392 + 44, 265, 391);
	IDSC(desc_392 + 47, 268, 391);
	IDSC(desc_392 + 77, 269, 391);
	IDSC(desc_392 + 89, 272, 391);
	IDSC(desc_392 + 93, 270, 391);
}


#ifdef __cplusplus
}
#endif
