/*
 * Code for class WSF_UPLOADED_FILE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws339.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_UPLOADED_FILE}.make */
void F822_6506 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,arg2);
	RTLR(4,arg3);
	
	RTGC;
	tr1 = F817_6444(Current, arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) arg1;
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg2;
	RTAR(Current, arg3);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg3;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_0_0_0_) = (EIF_INTEGER_32) arg4;
	RTLE;
}

/* {WSF_UPLOADED_FILE}.name */
EIF_REFERENCE F822_6507 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {WSF_UPLOADED_FILE}.url_encoded_name */
EIF_REFERENCE F822_6508 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {WSF_UPLOADED_FILE}.change_name */
void F822_6510 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = F817_6444(Current, arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	tr1 = F733_5609(RTCV(arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {WSF_UPLOADED_FILE}.filename */
EIF_REFERENCE F822_6515 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WSF_UPLOADED_FILE}.content_type */
EIF_REFERENCE F822_6516 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WSF_UPLOADED_FILE}.tmp_path */
EIF_REFERENCE F822_6518 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {WSF_UPLOADED_FILE}.tmp_basename */
EIF_REFERENCE F822_6520 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {WSF_UPLOADED_FILE}.safe_filename */
EIF_REFERENCE F822_6522 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 loc2 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current);
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	loc4 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F737_5723(RTCV(tr1), loc4);
	Result = (EIF_REFERENCE) tr1;
	for (;;) {
		if ((EIF_BOOLEAN) (loc3 > loc4)) break;
		loc2 = F741_5903(RTCV(loc1), loc3);
		switch (loc2) {
			case (EIF_CHARACTER_8) '-':
			case (EIF_CHARACTER_8) '.':
			case (EIF_CHARACTER_8) '_':
				F741_5953(RTCV(Result), loc2);
				break;
			case (EIF_CHARACTER_8) '0':
			case (EIF_CHARACTER_8) '1':
			case (EIF_CHARACTER_8) '2':
			case (EIF_CHARACTER_8) '3':
			case (EIF_CHARACTER_8) '4':
			case (EIF_CHARACTER_8) '5':
			case (EIF_CHARACTER_8) '6':
			case (EIF_CHARACTER_8) '7':
			case (EIF_CHARACTER_8) '8':
			case (EIF_CHARACTER_8) '9':
			case (EIF_CHARACTER_8) 'A':
			case (EIF_CHARACTER_8) 'B':
			case (EIF_CHARACTER_8) 'C':
			case (EIF_CHARACTER_8) 'D':
			case (EIF_CHARACTER_8) 'E':
			case (EIF_CHARACTER_8) 'F':
			case (EIF_CHARACTER_8) 'G':
			case (EIF_CHARACTER_8) 'H':
			case (EIF_CHARACTER_8) 'I':
			case (EIF_CHARACTER_8) 'J':
			case (EIF_CHARACTER_8) 'K':
			case (EIF_CHARACTER_8) 'L':
			case (EIF_CHARACTER_8) 'M':
			case (EIF_CHARACTER_8) 'N':
			case (EIF_CHARACTER_8) 'O':
			case (EIF_CHARACTER_8) 'P':
			case (EIF_CHARACTER_8) 'Q':
			case (EIF_CHARACTER_8) 'R':
			case (EIF_CHARACTER_8) 'S':
			case (EIF_CHARACTER_8) 'T':
			case (EIF_CHARACTER_8) 'U':
			case (EIF_CHARACTER_8) 'V':
			case (EIF_CHARACTER_8) 'W':
			case (EIF_CHARACTER_8) 'X':
			case (EIF_CHARACTER_8) 'Y':
			case (EIF_CHARACTER_8) 'Z':
			case (EIF_CHARACTER_8) 'a':
			case (EIF_CHARACTER_8) 'b':
			case (EIF_CHARACTER_8) 'c':
			case (EIF_CHARACTER_8) 'd':
			case (EIF_CHARACTER_8) 'e':
			case (EIF_CHARACTER_8) 'f':
			case (EIF_CHARACTER_8) 'g':
			case (EIF_CHARACTER_8) 'h':
			case (EIF_CHARACTER_8) 'i':
			case (EIF_CHARACTER_8) 'j':
			case (EIF_CHARACTER_8) 'k':
			case (EIF_CHARACTER_8) 'l':
			case (EIF_CHARACTER_8) 'm':
			case (EIF_CHARACTER_8) 'n':
			case (EIF_CHARACTER_8) 'o':
			case (EIF_CHARACTER_8) 'p':
			case (EIF_CHARACTER_8) 'q':
			case (EIF_CHARACTER_8) 'r':
			case (EIF_CHARACTER_8) 's':
			case (EIF_CHARACTER_8) 't':
			case (EIF_CHARACTER_8) 'u':
			case (EIF_CHARACTER_8) 'v':
			case (EIF_CHARACTER_8) 'w':
			case (EIF_CHARACTER_8) 'x':
			case (EIF_CHARACTER_8) 'y':
			case (EIF_CHARACTER_8) 'z':
				F741_5953(RTCV(Result), loc2);
				break;
			default:
				switch (loc2) {
					case (EIF_CHARACTER_8) '\300':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'A');
						break;
					case (EIF_CHARACTER_8) '\301':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'A');
						break;
					case (EIF_CHARACTER_8) '\302':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'A');
						break;
					case (EIF_CHARACTER_8) '\303':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'A');
						break;
					case (EIF_CHARACTER_8) '\304':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'A');
						break;
					case (EIF_CHARACTER_8) '\305':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'A');
						break;
					case (EIF_CHARACTER_8) '\307':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'C');
						break;
					case (EIF_CHARACTER_8) '\310':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'E');
						break;
					case (EIF_CHARACTER_8) '\311':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'E');
						break;
					case (EIF_CHARACTER_8) '\312':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'E');
						break;
					case (EIF_CHARACTER_8) '\313':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'E');
						break;
					case (EIF_CHARACTER_8) '\314':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'I');
						break;
					case (EIF_CHARACTER_8) '\315':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'I');
						break;
					case (EIF_CHARACTER_8) '\316':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'I');
						break;
					case (EIF_CHARACTER_8) '\317':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'I');
						break;
					case (EIF_CHARACTER_8) '\322':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'O');
						break;
					case (EIF_CHARACTER_8) '\323':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'O');
						break;
					case (EIF_CHARACTER_8) '\324':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'O');
						break;
					case (EIF_CHARACTER_8) '\325':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'O');
						break;
					case (EIF_CHARACTER_8) '\326':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'O');
						break;
					case (EIF_CHARACTER_8) '\331':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'U');
						break;
					case (EIF_CHARACTER_8) '\332':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'U');
						break;
					case (EIF_CHARACTER_8) '\333':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'U');
						break;
					case (EIF_CHARACTER_8) '\334':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'U');
						break;
					case (EIF_CHARACTER_8) '\335':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'Y');
						break;
					case (EIF_CHARACTER_8) '\340':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'a');
						break;
					case (EIF_CHARACTER_8) '\341':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'a');
						break;
					case (EIF_CHARACTER_8) '\342':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'a');
						break;
					case (EIF_CHARACTER_8) '\343':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'a');
						break;
					case (EIF_CHARACTER_8) '\344':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'a');
						break;
					case (EIF_CHARACTER_8) '\345':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'a');
						break;
					case (EIF_CHARACTER_8) '\347':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'c');
						break;
					case (EIF_CHARACTER_8) '\350':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'e');
						break;
					case (EIF_CHARACTER_8) '\351':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'e');
						break;
					case (EIF_CHARACTER_8) '\352':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'e');
						break;
					case (EIF_CHARACTER_8) '\353':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'e');
						break;
					case (EIF_CHARACTER_8) '\354':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'i');
						break;
					case (EIF_CHARACTER_8) '\355':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'i');
						break;
					case (EIF_CHARACTER_8) '\356':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'i');
						break;
					case (EIF_CHARACTER_8) '\357':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'i');
						break;
					case (EIF_CHARACTER_8) '\360':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'o');
						break;
					case (EIF_CHARACTER_8) '\362':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'o');
						break;
					case (EIF_CHARACTER_8) '\363':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'o');
						break;
					case (EIF_CHARACTER_8) '\364':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'o');
						break;
					case (EIF_CHARACTER_8) '\365':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'o');
						break;
					case (EIF_CHARACTER_8) '\366':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'o');
						break;
					case (EIF_CHARACTER_8) '\371':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'u');
						break;
					case (EIF_CHARACTER_8) '\372':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'u');
						break;
					case (EIF_CHARACTER_8) '\373':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'u');
						break;
					case (EIF_CHARACTER_8) '\374':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'u');
						break;
					case (EIF_CHARACTER_8) '\375':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'y');
						break;
					case (EIF_CHARACTER_8) '\377':
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) 'y');
						break;
					default:
						F741_5953(RTCV(Result), (EIF_CHARACTER_8) '-');
						break;
				}
				break;
		}
		loc3++;
	}
	RTLE;
	return Result;
}

/* {WSF_UPLOADED_FILE}.set_error */
void F822_6527 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_0_0_1_) = (EIF_INTEGER_32) arg1;
}

/* {WSF_UPLOADED_FILE}.set_tmp_path */
void F822_6528 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg1;
}

/* {WSF_UPLOADED_FILE}.set_tmp_basename */
void F822_6530 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) arg1;
}

void EIF_Minit339 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
