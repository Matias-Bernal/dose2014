/*
 * Class NATIVE_ARRAY [REAL_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_842 [] = {414,841,362,0xFFFF};
static EIF_TYPE_INDEX gen_type1_842 [] = {841,362,0xFFFF};
static EIF_TYPE_INDEX gen_type2_842 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_842 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_842 [] = {841,362,0xFFFF};
static EIF_TYPE_INDEX gen_type5_842 [] = {841,362,0xFFFF};
static EIF_TYPE_INDEX gen_type6_842 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_842 [] = {841,362,0xFFFF};
static EIF_TYPE_INDEX gen_type8_842 [] = {841,362,0xFFFF};
static EIF_TYPE_INDEX gen_type9_842 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_842[] = {
	{(BODY_INDEX) 627, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 310, NULL},
	{1, (BODY_INDEX)-1, 414, gen_type0_842},
	{2, (BODY_INDEX)-1, 297, NULL},
	{3, (BODY_INDEX)-1, 297, NULL},
	{4, (BODY_INDEX)-1, 297, NULL},
	{5, (BODY_INDEX)-1, 297, NULL},
	{6, (BODY_INDEX)-1, 297, NULL},
	{7, (BODY_INDEX)-1, 297, NULL},
	{8, (BODY_INDEX)-1, 297, NULL},
	{9, (BODY_INDEX)-1, 297, NULL},
	{10, (BODY_INDEX)-1, 841, gen_type1_842},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_842},
	{14, (BODY_INDEX)-1, 0, gen_type3_842},
	{15, (BODY_INDEX)-1, 841, gen_type4_842},
	{16, (BODY_INDEX)-1, 841, gen_type5_842},
	{17, (BODY_INDEX)-1, 0, gen_type6_842},
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
	{28, (BODY_INDEX)-1, 841, gen_type7_842},
	{29, (BODY_INDEX)-1, 300, NULL},
	{30, (BODY_INDEX)-1, 841, gen_type8_842},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type9_842},
};

extern void Init842(void);
void Init842(void)
{
	IDSC(desc_842, 0, 841);
	IDSC(desc_842 + 1, 2, 841);
	IDSC(desc_842 + 32, 46, 841);
}


#ifdef __cplusplus
}
#endif
