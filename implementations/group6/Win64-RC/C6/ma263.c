/*
 * Code for class MANAGED_POINTER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ma263.h"
#include <string.h>
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {MANAGED_POINTER}.make */
void F507_3515 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	{
	/* INLINED CODE (increment_counter) */
	/* END INLINED CODE */
	}
	;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = eif_max_int32 (arg1,((EIF_INTEGER_32) 1L));
	tp1 = calloc((size_t)ti4_1, (size_t) ((EIF_INTEGER_32) 1L));
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) = (EIF_POINTER) tp1;
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) == tp1)) {
		tr1 = RTLNS(164, 164, _OBJSIZ_0_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("No more memory",14,904766585);
		F165_2110(RTCV(tr1), tr2);
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) = (EIF_INTEGER_32) arg1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {MANAGED_POINTER}.make_from_array */
void F507_3516 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	{
	/* INLINED CODE (increment_counter) */
	/* END INLINED CODE */
	}
	;
	ti4_1 = F610_4825(RTCV(arg1));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) = (EIF_INTEGER_32) ti4_1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_);
	ti4_1 = eif_max_int32 (ti4_1,((EIF_INTEGER_32) 1L));
	tp1 = malloc((size_t)ti4_1);
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) = (EIF_POINTER) tp1;
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) == tp1)) {
		tr1 = RTLNS(164, 164, _OBJSIZ_0_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("No more memory",14,904766585);
		F165_2110(RTCV(tr1), tr2);
	}
	F507_3557(Current, arg1, ((EIF_INTEGER_32) 0L));
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {MANAGED_POINTER}.make_from_pointer */
void F507_3517 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	{
	/* INLINED CODE (increment_counter) */
	/* END INLINED CODE */
	}
	;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = eif_max_int32 (arg2,((EIF_INTEGER_32) 1L));
	tp1 = malloc((size_t)ti4_1);
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) = (EIF_POINTER) tp1;
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) == tp1)) {
		tr1 = RTLNS(164, 164, _OBJSIZ_0_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("No more memory",14,904766585);
		F165_2110(RTCV(tr1), tr2);
	}
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	memcpy((void *)tp1, (const void *) arg1, (size_t) arg2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) = (EIF_INTEGER_32) arg2;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {MANAGED_POINTER}.share_from_pointer */
void F507_3518 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	{
	/* INLINED CODE (increment_counter) */
	/* END INLINED CODE */
	}
	;
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) = (EIF_POINTER) arg1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) = (EIF_INTEGER_32) arg2;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {MANAGED_POINTER}.set_from_pointer */
void F507_3520 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) = (EIF_POINTER) arg1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) = (EIF_INTEGER_32) arg2;
	RTLE;
}

/* {MANAGED_POINTER}.is_equal */
EIF_BOOLEAN F507_3524 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_0_1_0_0_);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) == ti4_1)) {
		Result = '\01';
		tp1 = *(EIF_POINTER *)(RTCV(arg1)+ _PTROFF_0_1_0_1_0_0_);
		if (!((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) == tp1))) {
			tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
			tp2 = *(EIF_POINTER *)(RTCV(arg1)+ _PTROFF_0_1_0_1_0_0_);
			tr1 = RTLNS(726, 726, _OBJSIZ_0_0_0_0_0_1_0_0_);
			*(EIF_POINTER *)tr1 = tp1;
			
			tb1 = F695_5486(RTCV(tr1), tp2, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_));
			Result = tb1;
		}
	}
	RTLE;
	return Result;
}

/* {MANAGED_POINTER}.copy */
void F507_3525 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		tb1 = '\01';
		tp1 = *(EIF_POINTER *)(RTCV(arg1)+ _PTROFF_0_1_0_1_0_0_);
		if (!(EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) == tp1)) {
			tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_);
		}
		if (tb1) {
			tp1 = *(EIF_POINTER *)(RTCV(arg1)+ _PTROFF_0_1_0_1_0_0_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_0_1_0_0_);
			F507_3517(Current, tp1, ti4_1);
		} else {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_0_1_0_0_);
			F507_3599(Current, ti4_1);
			tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
			tp2 = *(EIF_POINTER *)(RTCV(arg1)+ _PTROFF_0_1_0_1_0_0_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_0_1_0_0_);
			memcpy((void *)tp1, (const void *) tp2, (size_t) ti4_1);
		}
	}
	RTLE;
}

/* {MANAGED_POINTER}.read_natural_8 */
EIF_NATURAL_8 F507_3526 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp1 = RTPOF(tp1,arg1);
	memcpy((void *)(EIF_NATURAL_8 *) &(Result), (const void *) tp1, (size_t) ((EIF_INTEGER_32) 1L));
	RTLE;
	return Result;
}

/* {MANAGED_POINTER}.read_natural_16 */
EIF_NATURAL_16 F507_3527 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp1 = RTPOF(tp1,arg1);
	memcpy((void *)(EIF_NATURAL_16 *) &(Result), (const void *) tp1, (size_t) ((EIF_INTEGER_32) 2L));
	RTLE;
	return Result;
}

/* {MANAGED_POINTER}.read_character */
EIF_CHARACTER_8 F507_3536 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp1 = RTPOF(tp1,arg1);
	memcpy((void *)(EIF_CHARACTER_8 *) &(Result), (const void *) tp1, (size_t) ((EIF_INTEGER_32) 1L));
	RTLE;
	return Result;
}

/* {MANAGED_POINTER}.put_natural_8 */
void F507_3542 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp1 = RTPOF(tp1,arg2);
	memcpy((void *)tp1, (const void *) (EIF_NATURAL_8 *) &(arg1), (size_t) ((EIF_INTEGER_32) 1L));
	RTLE;
}

/* {MANAGED_POINTER}.put_natural_16 */
void F507_3543 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp1 = RTPOF(tp1,arg2);
	memcpy((void *)tp1, (const void *) (EIF_NATURAL_16 *) &(arg1), (size_t) ((EIF_INTEGER_32) 2L));
	RTLE;
}

/* {MANAGED_POINTER}.put_array */
void F507_3557 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCV(arg1));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp1 = RTPOF(tp1,arg2);
	ti4_1 = F610_4825(RTCV(arg1));
	memcpy((void *)tp1, (const void *) loc1, (size_t) ti4_1);
	RTLE;
}

/* {MANAGED_POINTER}.resize */
void F507_3599 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_))) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
		ti4_1 = eif_max_int32 (arg1,((EIF_INTEGER_32) 1L));
		tr1 = RTLNS(726, 726, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)tr1 = tp1;
		
		tp1 = F695_5484(RTCV(tr1), ti4_1);
		*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) = (EIF_POINTER) tp1;
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) == tp1)) {
			tr1 = RTLNS(164, 164, _OBJSIZ_0_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("No more memory",14,904766585);
			F165_2110(RTCV(tr1), tr2);
		}
	}
	if ((EIF_BOOLEAN) (arg1 > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_))) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
		tp1 = RTPOF(tp1,*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_));
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_);
		memset((void *)tp1, (int) ((EIF_INTEGER_32) 0L), (size_t) (EIF_INTEGER_32) (arg1 - ti4_1));
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) = (EIF_INTEGER_32) arg1;
	RTLE;
}

/* {MANAGED_POINTER}.dispose */
void F507_3600 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
		free(tp1);
	}
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) = (EIF_POINTER) loc1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {MANAGED_POINTER}.allocation_counter */
static EIF_REFERENCE F507_3601_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	RTLD;
	

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOSP (3601);
#define Result RTOSR(3601)
	RTOC_NEW(Result);
	{
		static EIF_TYPE_INDEX typarr0[] = {99,842,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 99, _OBJSIZ_0_0_0_0_0_0_1_0_);
	}
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
	F100_1422(RTCV(tr1), tu8_1);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (3601);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F507_3601 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(3601,F507_3601_body,(Current));
}

/* {MANAGED_POINTER}.increment_counter */
void F507_3603 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

void EIF_Minit263 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
