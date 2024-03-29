/*
 * Code for class INET4_ADDRESS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in95.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INET4_ADDRESS}.make_from_host_and_address */
void F115_1512 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		ti4_1 = F610_4825(RTCV(arg2));
		tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L));
	}
	if (tb1) {
		tu1_1 = F610_4819(RTCV(arg2), ((EIF_INTEGER_32) 4L));
		ti4_1 = (EIF_INTEGER_32) tu1_1;
		ti4_1 = eif_bit_and(ti4_1,((EIF_INTEGER_32) 255L));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) = (EIF_INTEGER_32) ti4_1;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		tu1_1 = F610_4819(RTCV(arg2), ((EIF_INTEGER_32) 3L));
		ti4_2 = (EIF_INTEGER_32) tu1_1;
		ti4_2 = eif_bit_shift_left(ti4_2,((EIF_INTEGER_32) 8L));
		ti4_2 = eif_bit_and((ti4_2),((EIF_INTEGER_32) 65280L));
		ti4_1 = eif_bit_or(ti4_1,ti4_2);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) = (EIF_INTEGER_32) ti4_1;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		tu1_1 = F610_4819(RTCV(arg2), ((EIF_INTEGER_32) 2L));
		ti4_2 = (EIF_INTEGER_32) tu1_1;
		ti4_2 = eif_bit_shift_left(ti4_2,((EIF_INTEGER_32) 16L));
		ti4_2 = eif_bit_and((ti4_2),((EIF_INTEGER_32) 16711680L));
		ti4_1 = eif_bit_or(ti4_1,ti4_2);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) = (EIF_INTEGER_32) ti4_1;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		tu1_1 = F610_4819(RTCV(arg2), ((EIF_INTEGER_32) 1L));
		ti4_2 = (EIF_INTEGER_32) tu1_1;
		ti4_2 = eif_bit_shift_left(ti4_2,((EIF_INTEGER_32) 24L));
		ti4_3 = (EIF_INTEGER_32) ((EIF_INTEGER_64) RTI64C(4278190080));
		ti4_2 = eif_bit_and((ti4_2),ti4_3);
		ti4_1 = eif_bit_or(ti4_1,ti4_2);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) = (EIF_INTEGER_32) ti4_1;
	}
	RTLE;
}

/* {INET4_ADDRESS}.make_from_host_and_pointer */
void F115_1513 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(arg2 != tp1)) {
		ti4_1 = (EIF_INTEGER_32) en_sockaddr_get_ipv4_address(arg2);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) = (EIF_INTEGER_32) ti4_1;
	}
	RTLE;
}

/* {INET4_ADDRESS}.host_address */
EIF_REFERENCE F115_1514 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	tr1 = F115_1525(Current);
	Result = F115_1528(Current, tr1);
	RTLE;
	return Result;
}

/* {INET4_ADDRESS}.raw_address */
EIF_REFERENCE F115_1525 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {609,851,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 609, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	F610_4814(RTCV(tr1), ((EIF_NATURAL_8) 0U), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 4L));
	Result = (EIF_REFERENCE) tr1;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	ti4_1 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 24L));
	ti4_1 = eif_bit_and((ti4_1),((EIF_INTEGER_32) 255L));
	tu1_1 = (EIF_NATURAL_8) ti4_1;
	F610_4839(RTCV(Result), tu1_1, ((EIF_INTEGER_32) 1L));
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	ti4_1 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 16L));
	ti4_1 = eif_bit_and((ti4_1),((EIF_INTEGER_32) 255L));
	tu1_1 = (EIF_NATURAL_8) ti4_1;
	F610_4839(RTCV(Result), tu1_1, ((EIF_INTEGER_32) 2L));
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	ti4_1 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 8L));
	ti4_1 = eif_bit_and((ti4_1),((EIF_INTEGER_32) 255L));
	tu1_1 = (EIF_NATURAL_8) ti4_1;
	F610_4839(RTCV(Result), tu1_1, ((EIF_INTEGER_32) 3L));
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	ti4_1 = eif_bit_and(ti4_1,((EIF_INTEGER_32) 255L));
	tu1_1 = (EIF_NATURAL_8) ti4_1;
	F610_4839(RTCV(Result), tu1_1, ((EIF_INTEGER_32) 4L));
	RTLE;
	return Result;
}

/* {INET4_ADDRESS}.sockaddr */
EIF_REFERENCE F115_1526 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(506, 506, _OBJSIZ_0_1_0_1_0_1_1_0_);
	ti4_1 = (EIF_INTEGER_32) en_socket_address_len();
	F507_3515(RTCV(tr1), ti4_1);
	Result = (EIF_REFERENCE) tr1;
	tp1 = *(EIF_POINTER *)(RTCV(Result)+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	en_socket_address_fill_ipv4(tp1, ti4_1, arg1);
	RTLE;
	return Result;
}

/* {INET4_ADDRESS}.numeric_to_text */
EIF_REFERENCE F115_1528 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F733_5554(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	tu1_1 = F610_4819(RTCV(arg1), ((EIF_INTEGER_32) 1L));
	ti4_1 = (EIF_INTEGER_32) tu1_1;
	F741_5942(RTCV(Result), ti4_1);
	F741_5952(RTCV(Result), (EIF_CHARACTER_8) '.');
	tu1_1 = F610_4819(RTCV(arg1), ((EIF_INTEGER_32) 2L));
	ti4_1 = (EIF_INTEGER_32) tu1_1;
	F741_5942(RTCV(Result), ti4_1);
	F741_5952(RTCV(Result), (EIF_CHARACTER_8) '.');
	tu1_1 = F610_4819(RTCV(arg1), ((EIF_INTEGER_32) 3L));
	ti4_1 = (EIF_INTEGER_32) tu1_1;
	F741_5942(RTCV(Result), ti4_1);
	F741_5952(RTCV(Result), (EIF_CHARACTER_8) '.');
	tu1_1 = F610_4819(RTCV(arg1), ((EIF_INTEGER_32) 4L));
	ti4_1 = (EIF_INTEGER_32) tu1_1;
	F741_5942(RTCV(Result), ti4_1);
	RTLE;
	return Result;
}

/* {INET4_ADDRESS}.fill_ipv4 */
void F115_1529 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	en_socket_address_fill_ipv4(arg1, arg2, arg3);
	
}

/* {INET4_ADDRESS}.c_sockaddr_get_ipv4_address */
EIF_INTEGER_32 F115_1530 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) en_sockaddr_get_ipv4_address(arg1);
	
	return Result;
}

void EIF_Minit95 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
