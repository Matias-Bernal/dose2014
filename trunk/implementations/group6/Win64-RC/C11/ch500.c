/*
 * Code for class CHAIN [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ch500.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CHAIN}.has */
EIF_BOOLEAN F614_4874 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2285[dtype-660])(Current);
	Result = F244_2491(Current, arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2287[dtype-660])(Current, loc1);
	RTLE;
	return Result;
}

/* {CHAIN}.i_th */
EIF_INTEGER_32 F614_4876 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2285[dtype-660])(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4116[dtype-612])(Current, arg1);
	Result = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2279[dtype-395])(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2287[dtype-660])(Current, loc1);
	RTLE;
	return Result;
}

/* {CHAIN}.index_set */
EIF_REFERENCE F614_4879 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	
	RTGC;
	tr1 = RTLNS(599, 599, _OBJSIZ_0_3_0_2_0_0_0_0_);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2253[Dtype(Current)-517])(Current);
	F600_4772(RTCV(tr1), ((EIF_INTEGER_32) 1L), ti4_1);
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

/* {CHAIN}.start */
void F614_4880 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !F282_2518(Current)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4116[Dtype(Current)-612])(Current, ((EIF_INTEGER_32) 1L));
	}
	RTLE;
}

/* {CHAIN}.move */
void F614_4882 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L))) {
		for (;;) {
			tb1 = '\01';
			if (!((EIF_BOOLEAN)(loc1 == arg1))) {
				tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2245[dtype-395])(Current);
			}
			if (tb1) break;
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R2247[dtype-395])(Current);
			loc1++;
		}
	} else {
		if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L))) {
			loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2241[dtype-395])(Current);
			loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + arg1);
			if ((EIF_BOOLEAN) (loc3 <= ((EIF_INTEGER_32) 0L))) {
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R2234[dtype-395])(Current);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R2249[dtype-517])(Current);
			} else {
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R2234[dtype-395])(Current);
				loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				for (;;) {
					if ((EIF_BOOLEAN)(loc2 == loc3)) break;
					(FUNCTION_CAST(void, (EIF_REFERENCE)) R2247[dtype-395])(Current);
					loc2++;
				}
			}
		}
	}
	RTLE;
}

/* {CHAIN}.go_i_th */
void F614_4883 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2241[dtype-395])(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4115[dtype-612])(Current, (EIF_INTEGER_32) (arg1 - ti4_1));
	RTLE;
}

/* {CHAIN}.valid_index */
EIF_BOOLEAN F614_4884 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\0';
	if ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L))) {
		Result = (EIF_BOOLEAN) (arg1 <= (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2253[Dtype(Current)-517])(Current));
	}
	RTLE;
	return Result;
}

/* {CHAIN}.isfirst */
EIF_BOOLEAN F614_4885 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\0';
	if ((EIF_BOOLEAN) !F282_2518(Current)) {
		Result = (EIF_BOOLEAN)((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2241[Dtype(Current)-395])(Current) == ((EIF_INTEGER_32) 1L));
	}
	RTLE;
	return Result;
}

/* {CHAIN}.off */
EIF_BOOLEAN F614_4887 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\01';
	if (!((EIF_BOOLEAN)((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2241[dtype-395])(Current) == ((EIF_INTEGER_32) 0L)))) {
		Result = (EIF_BOOLEAN)((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2241[dtype-395])(Current) == (EIF_INTEGER_32) ((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2253[dtype-517])(Current) + ((EIF_INTEGER_32) 1L)));
	}
	RTLE;
	return Result;
}

/* {CHAIN}.remove */
void F614_4895 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

void EIF_Minit500 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
