/*
 * Code for class WGI_INPUT_STREAM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "wg218.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WGI_INPUT_STREAM}.read_to_string */
EIF_INTEGER_32 F433_2764 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + arg3) - ((EIF_INTEGER_32) 1L));
	loc1 = (EIF_INTEGER_32) arg2;
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2448[dtype-433])(Current);
		if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2455[dtype-432])(Current)) {
			tc1 = (FUNCTION_CAST(EIF_CHARACTER_8, (EIF_REFERENCE)) R2454[dtype-433])(Current);
			F741_5925(RTCV(arg1), tc1, loc1);
			if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2458[dtype-433])(Current)) {
				Result = (EIF_INTEGER_32) loc1;
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
			} else {
				loc1++;
			}
		} else {
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
		}
	}
	if ((EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2458[dtype-433])(Current)) {
		Result = (EIF_INTEGER_32) loc1;
	}
	F741_5986(RTCV(arg1), Result);
	RTLE;
	return (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result - arg2) + ((EIF_INTEGER_32) 1L));
}

/* {WGI_INPUT_STREAM}.append_to_string */
void F433_2765 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + arg2) - ((EIF_INTEGER_32) 1L));
	F741_5970(RTCV(arg1), loc2);
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2448[dtype-433])(Current);
		if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2455[dtype-432])(Current)) {
			tc1 = (FUNCTION_CAST(EIF_CHARACTER_8, (EIF_REFERENCE)) R2454[dtype-433])(Current);
			F741_5953(RTCV(arg1), tc1);
			loc3++;
			if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2458[dtype-433])(Current)) {
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
			} else {
				loc1++;
			}
		} else {
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
		}
	}
	*(EIF_INTEGER_32 *)(Current + O2456[dtype-432]) = (EIF_INTEGER_32) loc3;
	RTLE;
}

/* {WGI_INPUT_STREAM}.last_character_available */
EIF_BOOLEAN F433_2769 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

void EIF_Minit218 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
