/*
 * Class TABLE [REAL_64, INTEGER_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_565 [] = {417,564,372,345,0xFFFF};
static EIF_TYPE_INDEX gen_type1_565 [] = {564,372,345,0xFFFF};
static EIF_TYPE_INDEX gen_type2_565 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_565 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_565 [] = {564,372,345,0xFFFF};
static EIF_TYPE_INDEX gen_type5_565 [] = {564,372,345,0xFFFF};
static EIF_TYPE_INDEX gen_type6_565 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_565 [] = {564,372,345,0xFFFF};
static EIF_TYPE_INDEX gen_type8_565 [] = {564,372,345,0xFFFF};
static EIF_TYPE_INDEX gen_type9_565 [] = {565,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_565 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type11_565 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type12_565 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type13_565 [] = {0xFFF8,2,0xFFFF};


static struct desc_info desc_565[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 314, NULL},
	{1, (BODY_INDEX)-1, 417, gen_type0_565},
	{2, (BODY_INDEX)-1, 301, NULL},
	{3, (BODY_INDEX)-1, 301, NULL},
	{4, (BODY_INDEX)-1, 301, NULL},
	{5, (BODY_INDEX)-1, 301, NULL},
	{6, (BODY_INDEX)-1, 301, NULL},
	{7, (BODY_INDEX)-1, 301, NULL},
	{8, (BODY_INDEX)-1, 301, NULL},
	{9, (BODY_INDEX)-1, 301, NULL},
	{10, (BODY_INDEX)-1, 564, gen_type1_565},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_565},
	{14, (BODY_INDEX)-1, 0, gen_type3_565},
	{15, (BODY_INDEX)-1, 564, gen_type4_565},
	{16, (BODY_INDEX)-1, 564, gen_type5_565},
	{17, (BODY_INDEX)-1, 0, gen_type6_565},
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
	{28, (BODY_INDEX)-1, 564, gen_type7_565},
	{29, (BODY_INDEX)-1, 304, NULL},
	{30, (BODY_INDEX)-1, 564, gen_type8_565},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 301, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 301, NULL},
	{2434, (BODY_INDEX)-1, 301, NULL},
	{2435, 0, 301, NULL},
	{2436, (BODY_INDEX)-1, 301, NULL},
	{2437, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2438, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 565, gen_type9_565},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_565},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 301, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 301, NULL},
	{2861, (BODY_INDEX)-1, 301, NULL},
	{2891, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2862, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2863, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type11_565},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type12_565},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 301, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type13_565},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 345, NULL},
};

extern void Init565(void);
void Init565(void)
{
	IDSC(desc_565, 0, 564);
	IDSC(desc_565 + 1, 2, 564);
	IDSC(desc_565 + 32, 323, 564);
	IDSC(desc_565 + 41, 320, 564);
	IDSC(desc_565 + 50, 186, 564);
	IDSC(desc_565 + 56, 327, 564);
}


#ifdef __cplusplus
}
#endif
