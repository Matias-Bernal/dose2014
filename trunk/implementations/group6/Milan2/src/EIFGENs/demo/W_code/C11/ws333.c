/*
 * Code for class WSF_UPLOADED_FILE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F333_6390(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F333_6391(EIF_REFERENCE);
extern EIF_TYPED_VALUE F333_6392(EIF_REFERENCE);
extern EIF_TYPED_VALUE F333_6393(EIF_REFERENCE);
extern void F333_6394(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F333_6395(EIF_REFERENCE);
extern EIF_TYPED_VALUE F333_6396(EIF_REFERENCE);
extern EIF_TYPED_VALUE F333_6397(EIF_REFERENCE);
extern void F333_6398(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F333_6399(EIF_REFERENCE);
extern EIF_TYPED_VALUE F333_6400(EIF_REFERENCE);
extern EIF_TYPED_VALUE F333_6401(EIF_REFERENCE);
extern EIF_TYPED_VALUE F333_6402(EIF_REFERENCE);
extern EIF_TYPED_VALUE F333_6403(EIF_REFERENCE);
extern EIF_TYPED_VALUE F333_6404(EIF_REFERENCE);
extern void F333_6405(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F333_6406(EIF_REFERENCE);
extern EIF_TYPED_VALUE F333_6407(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F333_6408(EIF_REFERENCE);
extern EIF_TYPED_VALUE F333_6409(EIF_REFERENCE);
extern EIF_TYPED_VALUE F333_6410(EIF_REFERENCE);
extern void F333_6411(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F333_6412(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F333_6413(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F333_6414(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit333(void);

#ifdef __cplusplus
}
#endif


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
void F333_6390 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
#define arg4 arg4x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,Current);
	RTLR(4,ur1);
	RTLR(5,tr1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 332, Current, 0, 4, 11022);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(332, Current, 11022);
	if (arg1) {
		RTCC(arg1, 332, l_feature_name, 1, 306);
	}
	RTCC(arg2, 332, l_feature_name, 2, RTWCT(5209, dtype, Dftype(Current)));
	RTCC(arg3, 332, l_feature_name, 3, RTWCT(5210, dtype, Dftype(Current)));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5226, 0xF8000130, 0); /* name */
	
	ur1 = RTCCL(arg1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5180, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5226, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5225, 0xF8000132, 0); /* url_encoded_name */
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(5225, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5209, 0xF8000136, 0); /* filename */
	
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + RTWA(5209, dtype)) = (EIF_REFERENCE) RTCCL(arg2);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 5210, 0xF8000136, 0); /* content_type */
	
	RTAR(Current, arg3);
	*(EIF_REFERENCE *)(Current + RTWA(5210, dtype)) = (EIF_REFERENCE) RTCCL(arg3);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 5211, 0x10000000, 1); /* size */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(5211, dtype)) = (EIF_INTEGER_32) arg4;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {WSF_UPLOADED_FILE}.name */
EIF_TYPED_VALUE F333_6391 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5226,Dtype(Current)));
	return r;
}


/* {WSF_UPLOADED_FILE}.url_encoded_name */
EIF_TYPED_VALUE F333_6392 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5225,Dtype(Current)));
	return r;
}


/* {WSF_UPLOADED_FILE}.debug_output */
EIF_TYPED_VALUE F333_6393 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "debug_output";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLR(5,tr2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 332, Current, 1, 0, 11025);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(332, Current, 11025);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000135, 0,0); /* Result */
	
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4769, 328))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(2);
	tb1 = '\0';
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5220, dtype))(Current)).it_b);
	if (tb2) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5212, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = RTCCL(tr1);
		tb1 = EIF_TEST(loc1);
	}
	if (tb1) {
		RTHOOK(3);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ' ';
		uw1 = tw1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4691, "append_character", Result))(Result, uw1x);
		RTHOOK(4);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\"';
		uw1 = tw1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4691, "append_character", Result))(Result, uw1x);
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4904, "name", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4678, "append", Result))(Result, ur1x);
		RTHOOK(6);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\"';
		uw1 = tw1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4691, "append_character", Result))(Result, uw1x);
	}
	RTHOOK(7);
	tr1 = RTMS_EX_H(" filename=\"",11,1750000418);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4534, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4678, "append", Result))(Result, ur1x);
	RTHOOK(8);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5209, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4534, "as_string_32", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4678, "append", Result))(Result, ur1x);
	RTHOOK(9);
	tr1 = RTMS_EX_H("\"",1,34);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4534, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4678, "append", Result))(Result, ur1x);
	RTHOOK(10);
	tr1 = RTMS_EX_H(" content-type=\"",15,889873698);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4534, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4678, "append", Result))(Result, ur1x);
	RTHOOK(11);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5210, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4534, "as_string_32", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4678, "append", Result))(Result, ur1x);
	RTHOOK(12);
	tr1 = RTMS_EX_H("\"",1,34);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4534, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4678, "append", Result))(Result, ur1x);
	RTHOOK(13);
	tr1 = RTMS_EX_H(" size=\"",7,1206649634);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4534, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4678, "append", Result))(Result, ur1x);
	RTHOOK(14);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5211, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4681, "append_integer", Result))(Result, ui4_1x);
	RTHOOK(15);
	tr1 = RTMS_EX_H("\"",1,34);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4534, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4678, "append", Result))(Result, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef uw1
}

/* {WSF_UPLOADED_FILE}.change_name */
void F333_6394 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "change_name";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 332, Current, 0, 1, 11026);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(332, Current, 11026);
	RTCC(arg1, 332, l_feature_name, 1, RTWCT(5226, dtype, Dftype(Current)));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5226, 0xF8000130, 0); /* name */
	
	ur1 = RTCCL(arg1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5180, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5226, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5225, 0xF8000132, 0); /* url_encoded_name */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4530, "as_readable_string_8", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5225, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT(NULL, EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5225, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4533, "as_readable_string_32", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4584, "same_string", arg1))(arg1, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef arg1
}

/* {WSF_UPLOADED_FILE}.is_string */
EIF_TYPED_VALUE F333_6395 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = (EIF_BOOLEAN) EIF_FALSE;
	return r;
}

/* {WSF_UPLOADED_FILE}.is_empty */
EIF_TYPED_VALUE F333_6396 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_empty";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 332, Current, 0, 0, 11028);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(332, Current, 11028);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5211, Dtype(Current)));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {WSF_UPLOADED_FILE}.string_representation */
EIF_TYPED_VALUE F333_6397 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "string_representation";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 332, Current, 0, 0, 11029);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(332, Current, 11029);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000135, 0,0); /* Result */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5209, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4534, "as_string_32", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
}

/* {WSF_UPLOADED_FILE}.process */
void F333_6398 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "process";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 332, Current, 0, 1, 11030);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(332, Current, 11030);
	if (arg1) {
		RTCC(arg1, 332, l_feature_name, 1, 12);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(173, "process_uploaded_file", arg1))(arg1, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef arg1
}

/* {WSF_UPLOADED_FILE}.filename */
EIF_TYPED_VALUE F333_6399 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5209,Dtype(Current)));
	return r;
}


/* {WSF_UPLOADED_FILE}.content_type */
EIF_TYPED_VALUE F333_6400 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5210,Dtype(Current)));
	return r;
}


/* {WSF_UPLOADED_FILE}.size */
EIF_TYPED_VALUE F333_6401 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5211,Dtype(Current)));
	return r;
}


/* {WSF_UPLOADED_FILE}.tmp_path */
EIF_TYPED_VALUE F333_6402 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5212,Dtype(Current)));
	return r;
}


/* {WSF_UPLOADED_FILE}.tmp_name */
EIF_TYPED_VALUE F333_6403 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tmp_name";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 332, Current, 1, 0, 11035);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(332, Current, 11035);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5212, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0xF800012E, 0,0); /* Result */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4904, "name", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {WSF_UPLOADED_FILE}.tmp_basename */
EIF_TYPED_VALUE F333_6404 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5214,Dtype(Current)));
	return r;
}


/* {WSF_UPLOADED_FILE}.append_content_to_string */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F333_6405 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "append_content_to_string";
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN EIF_VOLATILE loc3 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN EIF_VOLATILE loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_BOOLEAN  EIF_VOLATILE tb2;
	RTSN;
	RTDA;
	RTDT;
	RTXD;
	RTLXD;
	
	
	RTXI(8);
	RTLR(0,arg1);
	RTLR(1,loc5);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,ur1);
	RTLR(6,loc2);
	RTLR(7,saved_except);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_BOOL, &loc3);
	RTLU(SK_BOOL, &loc4);
	RTLU(SK_REF, &loc5);
	RTLXL;
	
	RTEAA(l_feature_name, 332, Current, 5, 1, 11037);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(332, Current, 11037);
	if (arg1) {
		RTCC(arg1, 332, l_feature_name, 1, 310);
	}
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	tb1 = '\0';
	if ((EIF_BOOLEAN) !loc4) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5213, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc5 = RTCCL(tr1);
		tb1 = EIF_TEST(loc5);
	}
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 1, 0xF800010D, 0, 0); /* loc1 */
		
		tr1 = RTLN(269);
		ur1 = RTCCL(loc5);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3388, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(2,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(3);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3192, "exists", loc1))(loc1)).it_b);
		if (tb1) {
			RTHOOK(4);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3434, "open_read", loc1))(loc1);
			for (;;) {
				RTHOOK(5);
				if (loc3) break;
				RTHOOK(6);
				ui4_1 = ((EIF_INTEGER_32) 1024L);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3246, "read_stream_thread_aware", loc1))(loc1, ui4_1x);
				RTHOOK(7);
				RTDBGAL(Current, 2, 0xF8000136, 0, 0); /* loc2 */
				
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3178, "last_string", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc2 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(8);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4492, "is_empty", loc2))(loc2)).it_b);
				if (tb1) {
					RTHOOK(9);
					RTDBGAL(Current, 3, 0x04000000, 1, 0); /* loc3 */
					
					loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				} else {
					RTHOOK(10);
					ur1 = RTCCL(loc2);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4734, "append", arg1))(arg1, ur1x);
					RTHOOK(11);
					RTDBGAL(Current, 3, 0x04000000, 1, 0); /* loc3 */
					
					tb1 = '\01';
					tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2182, "exhausted", loc1))(loc1)).it_b);
					if (!tb2) {
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3409, "end_of_file", loc1))(loc1)).it_b);
						tb1 = tb2;
					}
					loc3 = (EIF_BOOLEAN) tb1;
				}
			}
			RTHOOK(12);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3202, "close", loc1))(loc1);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTLXE;
	RTXS(8);
	RTHOOK(13);
	RTDBGAL(Current, 4, 0x04000000, 1, 0); /* loc4 */
	
	loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(14);
	RTTS;
	RTPS;
	RTER;
	RTMD(0);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTEOK;
	RTXE;
	RTLO(8);
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {WSF_UPLOADED_FILE}.safe_filename */
EIF_TYPED_VALUE F333_6406 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "safe_filename";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 loc2 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_CHAR8, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	
	RTEAA(l_feature_name, 332, Current, 4, 0, 11038);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(332, Current, 11038);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000136, 0, 0); /* loc1 */
	
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5209, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(2);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
	
	ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4635, "count", loc1));
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	RTDBGAL(Current, 0, 0xF8000136, 0,0); /* Result */
	
	tr1 = RTLN(310);
	ui4_1 = loc4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4475, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(4,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc3 > loc4)) break;
		RTHOOK(6);
		RTDBGAL(Current, 2, 0x08000000, 1, 0); /* loc2 */
		
		ui4_1 = loc3;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3840, "item", loc1))(loc1, ui4_1x)).it_c1);
		loc2 = (EIF_CHARACTER_8) tc1;
		RTHOOK(7);
		switch (loc2) {
			case (EIF_CHARACTER_8) '-':
			case (EIF_CHARACTER_8) '.':
			case (EIF_CHARACTER_8) '_':
				RTHOOK(8);
				uc1 = loc2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
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
				RTHOOK(9);
				uc1 = loc2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
				break;
			default:
				RTHOOK(10);
				switch (loc2) {
					case (EIF_CHARACTER_8) '\300':
						RTHOOK(11);
						uc1 = (EIF_CHARACTER_8) 'A';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\301':
						RTHOOK(12);
						uc1 = (EIF_CHARACTER_8) 'A';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\302':
						RTHOOK(13);
						uc1 = (EIF_CHARACTER_8) 'A';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\303':
						RTHOOK(14);
						uc1 = (EIF_CHARACTER_8) 'A';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\304':
						RTHOOK(15);
						uc1 = (EIF_CHARACTER_8) 'A';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\305':
						RTHOOK(16);
						uc1 = (EIF_CHARACTER_8) 'A';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\307':
						RTHOOK(17);
						uc1 = (EIF_CHARACTER_8) 'C';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\310':
						RTHOOK(18);
						uc1 = (EIF_CHARACTER_8) 'E';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\311':
						RTHOOK(19);
						uc1 = (EIF_CHARACTER_8) 'E';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\312':
						RTHOOK(20);
						uc1 = (EIF_CHARACTER_8) 'E';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\313':
						RTHOOK(21);
						uc1 = (EIF_CHARACTER_8) 'E';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\314':
						RTHOOK(22);
						uc1 = (EIF_CHARACTER_8) 'I';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\315':
						RTHOOK(23);
						uc1 = (EIF_CHARACTER_8) 'I';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\316':
						RTHOOK(24);
						uc1 = (EIF_CHARACTER_8) 'I';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\317':
						RTHOOK(25);
						uc1 = (EIF_CHARACTER_8) 'I';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\322':
						RTHOOK(26);
						uc1 = (EIF_CHARACTER_8) 'O';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\323':
						RTHOOK(27);
						uc1 = (EIF_CHARACTER_8) 'O';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\324':
						RTHOOK(28);
						uc1 = (EIF_CHARACTER_8) 'O';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\325':
						RTHOOK(29);
						uc1 = (EIF_CHARACTER_8) 'O';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\326':
						RTHOOK(30);
						uc1 = (EIF_CHARACTER_8) 'O';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\331':
						RTHOOK(31);
						uc1 = (EIF_CHARACTER_8) 'U';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\332':
						RTHOOK(32);
						uc1 = (EIF_CHARACTER_8) 'U';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\333':
						RTHOOK(33);
						uc1 = (EIF_CHARACTER_8) 'U';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\334':
						RTHOOK(34);
						uc1 = (EIF_CHARACTER_8) 'U';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\335':
						RTHOOK(35);
						uc1 = (EIF_CHARACTER_8) 'Y';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\340':
						RTHOOK(36);
						uc1 = (EIF_CHARACTER_8) 'a';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\341':
						RTHOOK(37);
						uc1 = (EIF_CHARACTER_8) 'a';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\342':
						RTHOOK(38);
						uc1 = (EIF_CHARACTER_8) 'a';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\343':
						RTHOOK(39);
						uc1 = (EIF_CHARACTER_8) 'a';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\344':
						RTHOOK(40);
						uc1 = (EIF_CHARACTER_8) 'a';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\345':
						RTHOOK(41);
						uc1 = (EIF_CHARACTER_8) 'a';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\347':
						RTHOOK(42);
						uc1 = (EIF_CHARACTER_8) 'c';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\350':
						RTHOOK(43);
						uc1 = (EIF_CHARACTER_8) 'e';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\351':
						RTHOOK(44);
						uc1 = (EIF_CHARACTER_8) 'e';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\352':
						RTHOOK(45);
						uc1 = (EIF_CHARACTER_8) 'e';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\353':
						RTHOOK(46);
						uc1 = (EIF_CHARACTER_8) 'e';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\354':
						RTHOOK(47);
						uc1 = (EIF_CHARACTER_8) 'i';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\355':
						RTHOOK(48);
						uc1 = (EIF_CHARACTER_8) 'i';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\356':
						RTHOOK(49);
						uc1 = (EIF_CHARACTER_8) 'i';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\357':
						RTHOOK(50);
						uc1 = (EIF_CHARACTER_8) 'i';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\360':
						RTHOOK(51);
						uc1 = (EIF_CHARACTER_8) 'o';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\362':
						RTHOOK(52);
						uc1 = (EIF_CHARACTER_8) 'o';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\363':
						RTHOOK(53);
						uc1 = (EIF_CHARACTER_8) 'o';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\364':
						RTHOOK(54);
						uc1 = (EIF_CHARACTER_8) 'o';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\365':
						RTHOOK(55);
						uc1 = (EIF_CHARACTER_8) 'o';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\366':
						RTHOOK(56);
						uc1 = (EIF_CHARACTER_8) 'o';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\371':
						RTHOOK(57);
						uc1 = (EIF_CHARACTER_8) 'u';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\372':
						RTHOOK(58);
						uc1 = (EIF_CHARACTER_8) 'u';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\373':
						RTHOOK(59);
						uc1 = (EIF_CHARACTER_8) 'u';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\374':
						RTHOOK(60);
						uc1 = (EIF_CHARACTER_8) 'u';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\375':
						RTHOOK(61);
						uc1 = (EIF_CHARACTER_8) 'y';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					case (EIF_CHARACTER_8) '\377':
						RTHOOK(62);
						uc1 = (EIF_CHARACTER_8) 'y';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
					default:
						RTHOOK(63);
						uc1 = (EIF_CHARACTER_8) '-';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2204, "extend", Result))(Result, uc1x);
						break;
				}
				break;
		}
		RTHOOK(64);
		RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
		
		loc3++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(65);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui4_1
#undef uc1
}

/* {WSF_UPLOADED_FILE}.move_to */
EIF_TYPED_VALUE F333_6407 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "move_to";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,tr2);
	RTLR(5,loc1);
	RTLR(6,ur1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 332, Current, 2, 1, 11039);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(332, Current, 11039);
	if (arg1) {
		RTCC(arg1, 332, l_feature_name, 1, 302);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_destination_not_empty", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4492, "is_empty", arg1))(arg1)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("has_no_error", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5218, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5220, dtype))(Current)).it_b);
		tb1 = tb2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5212, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = RTCCL(tr2);
	if (EIF_TEST(loc2)) {
		RTHOOK(4);
		RTDBGAL(Current, 1, 0xF800010D, 0, 0); /* loc1 */
		
		tr2 = RTLN(269);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3389, Dtype(tr2)))(tr2, ur1x);
		RTNHOOK(4,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr2);
		RTHOOK(5);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3192, "exists", loc1))(loc1)).it_b);
		if (tb2) {
			RTHOOK(6);
			ur1 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3461, "rename_file", loc1))(loc1, ur1x);
			RTHOOK(7);
			RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
			
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("removed", EX_POST);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5220, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("moved", EX_POST);
		tb2 = '\01';
		RTCO(tr1);
		if (tb1) {
			tr2 = RTLN(9);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr2)))(tr2);
			RTNHOOK(9,1);
			ur1 = RTCCL(arg1);
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(163, "file_exists", tr2))(tr2, ur1x)).it_b);
			tb2 = tb3;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {WSF_UPLOADED_FILE}.has_error */
EIF_TYPED_VALUE F333_6408 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "has_error";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 332, Current, 0, 0, 11040);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(332, Current, 11040);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5219, Dtype(Current)));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {WSF_UPLOADED_FILE}.error */
EIF_TYPED_VALUE F333_6409 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5219,Dtype(Current)));
	return r;
}


/* {WSF_UPLOADED_FILE}.exists */
EIF_TYPED_VALUE F333_6410 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "exists";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,ur1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 332, Current, 2, 0, 11042);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(332, Current, 11042);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5212, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = RTCCL(tr1);
	if (EIF_TEST(loc2)) {
		RTHOOK(2);
		RTDBGAL(Current, 1, 0xF800010E, 0, 0); /* loc1 */
		
		tr1 = RTLN(270);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3389, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(2,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(3);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3192, "exists", loc1))(loc1)).it_b);
		Result = (EIF_BOOLEAN) tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
}

/* {WSF_UPLOADED_FILE}.set_error */
void F333_6411 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_error";
	RTEX;
#define arg1 arg1x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 332, Current, 0, 1, 11043);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(332, Current, 11043);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5219, 0x10000000, 1); /* error */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(5219, Dtype(Current))) = (EIF_INTEGER_32) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {WSF_UPLOADED_FILE}.set_tmp_path */
void F333_6412 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_tmp_path";
	RTEX;
#define arg1 arg1x.it_r
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 332, Current, 0, 1, 11044);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(332, Current, 11044);
	RTCC(arg1, 332, l_feature_name, 1, RTWCT(5212, Dtype(Current), Dftype(Current)));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5212, 0xF800013D, 0); /* tmp_path */
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(5212, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {WSF_UPLOADED_FILE}.set_tmp_name */
void F333_6413 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_tmp_name";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 332, Current, 0, 1, 11045);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(332, Current, 11045);
	RTCC(arg1, 332, l_feature_name, 1, RTWCT(5213, dtype, Dftype(Current)));
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(2);
		tr1 = RTLN(317);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4870, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(2,1);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5222, dtype))(Current, ur1x);
	} else {
		RTHOOK(3);
		ur1 = NULL;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5222, dtype))(Current, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef arg1
}

/* {WSF_UPLOADED_FILE}.set_tmp_basename */
void F333_6414 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_tmp_basename";
	RTEX;
#define arg1 arg1x.it_r
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 332, Current, 0, 1, 11046);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(332, Current, 11046);
	RTCC(arg1, 332, l_feature_name, 1, RTWCT(5214, Dtype(Current), Dftype(Current)));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5214, 0xF8000136, 0); /* tmp_basename */
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(5214, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

void EIF_Minit333 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
