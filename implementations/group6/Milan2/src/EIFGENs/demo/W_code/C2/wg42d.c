/*
 * Class WGI_NINO_ERROR_STREAM
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_42 [] = {418,41,0xFFFF};
static EIF_TYPE_INDEX gen_type1_42 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_42 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_42 [] = {0,0xFFFF};


static struct desc_info desc_42[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 314, NULL},
	{1, (BODY_INDEX)-1, 418, gen_type0_42},
	{2, (BODY_INDEX)-1, 301, NULL},
	{3, (BODY_INDEX)-1, 301, NULL},
	{4, (BODY_INDEX)-1, 301, NULL},
	{5, (BODY_INDEX)-1, 301, NULL},
	{6, (BODY_INDEX)-1, 301, NULL},
	{7, (BODY_INDEX)-1, 301, NULL},
	{8, (BODY_INDEX)-1, 301, NULL},
	{9, (BODY_INDEX)-1, 301, NULL},
	{10, (BODY_INDEX)-1, 41, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_42},
	{14, (BODY_INDEX)-1, 0, gen_type2_42},
	{15, (BODY_INDEX)-1, 41, NULL},
	{16, (BODY_INDEX)-1, 41, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_42},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 33, NULL},
	{21, (BODY_INDEX)-1, 314, NULL},
	{22, (BODY_INDEX)-1, 314, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 32, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 41, NULL},
	{29, (BODY_INDEX)-1, 304, NULL},
	{30, (BODY_INDEX)-1, 41, NULL},
	{792, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{793, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{794, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{795, 0, 310, NULL},
	{796, 8, 272, NULL},
	{797, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init42(void);
void Init42(void)
{
	IDSC(desc_42, 0, 41);
	IDSC(desc_42 + 1, 2, 41);
	IDSC(desc_42 + 32, 424, 41);
	IDSC(desc_42 + 37, 444, 41);
}


#ifdef __cplusplus
}
#endif
