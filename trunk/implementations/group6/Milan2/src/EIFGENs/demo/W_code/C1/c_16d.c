/*
 * Class C_DATE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_16 [] = {418,15,0xFFFF};
static EIF_TYPE_INDEX gen_type1_16 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_16 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_16 [] = {0,0xFFFF};


static struct desc_info desc_16[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 314, NULL},
	{1, (BODY_INDEX)-1, 418, gen_type0_16},
	{2, (BODY_INDEX)-1, 295, NULL},
	{3, (BODY_INDEX)-1, 295, NULL},
	{4, (BODY_INDEX)-1, 295, NULL},
	{5, (BODY_INDEX)-1, 295, NULL},
	{6, (BODY_INDEX)-1, 295, NULL},
	{7, (BODY_INDEX)-1, 295, NULL},
	{8, (BODY_INDEX)-1, 295, NULL},
	{9, (BODY_INDEX)-1, 295, NULL},
	{10, (BODY_INDEX)-1, 15, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_16},
	{14, (BODY_INDEX)-1, 0, gen_type2_16},
	{15, (BODY_INDEX)-1, 15, NULL},
	{16, (BODY_INDEX)-1, 15, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_16},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 32, NULL},
	{21, (BODY_INDEX)-1, 314, NULL},
	{22, (BODY_INDEX)-1, 314, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 33, NULL},
	{190, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 15, NULL},
	{29, (BODY_INDEX)-1, 304, NULL},
	{30, (BODY_INDEX)-1, 15, NULL},
	{191, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{192, 8, 295, NULL},
	{193, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{194, (BODY_INDEX)-1, 351, NULL},
	{195, (BODY_INDEX)-1, 351, NULL},
	{196, (BODY_INDEX)-1, 351, NULL},
	{197, (BODY_INDEX)-1, 351, NULL},
	{198, (BODY_INDEX)-1, 351, NULL},
	{199, (BODY_INDEX)-1, 351, NULL},
	{200, 12, 351, NULL},
	{201, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{202, (BODY_INDEX)-1, 351, NULL},
	{203, (BODY_INDEX)-1, 351, NULL},
	{204, (BODY_INDEX)-1, 351, NULL},
	{205, (BODY_INDEX)-1, 351, NULL},
	{206, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{207, 0, 261, NULL},
	{208, (BODY_INDEX)-1, 304, NULL},
	{209, (BODY_INDEX)-1, 304, NULL},
	{210, (BODY_INDEX)-1, 351, NULL},
	{211, (BODY_INDEX)-1, 351, NULL},
	{212, (BODY_INDEX)-1, 351, NULL},
	{213, (BODY_INDEX)-1, 351, NULL},
	{214, (BODY_INDEX)-1, 351, NULL},
	{215, (BODY_INDEX)-1, 351, NULL},
};

extern void Init16(void);
void Init16(void)
{
	IDSC(desc_16, 0, 15);
	IDSC(desc_16 + 1, 2, 15);
	IDSC(desc_16 + 32, 292, 15);
}


#ifdef __cplusplus
}
#endif
