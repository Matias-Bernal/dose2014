/*
 * Code for class WSF_NOT_FOUND_RESPONSE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ws243.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_NOT_FOUND_RESPONSE}.make */
void F487_3224 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	tr1 = RTLNSMART(eif_non_attached_type(680));
	F681_5142(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {665,0xFFF9,3,684,736,732,732,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F666_5008(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {WSF_NOT_FOUND_RESPONSE}.header */
EIF_REFERENCE F487_3225 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {WSF_NOT_FOUND_RESPONSE}.request */
EIF_REFERENCE F487_3226 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {WSF_NOT_FOUND_RESPONSE}.suggested_items */
EIF_REFERENCE F487_3227 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {WSF_NOT_FOUND_RESPONSE}.body */
EIF_REFERENCE F487_3228 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {WSF_NOT_FOUND_RESPONSE}.add_suggested_text */
void F487_3230 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLR(4,arg2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,3,684,65534,732,732,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNTS(typres0, 4, 0);
	}
	((EIF_TYPED_VALUE *)tr2+2)->it_r = arg1;
	RTAR(tr2,arg1);
	((EIF_TYPED_VALUE *)tr2+3)->it_r = arg2;
	RTAR(tr2,arg2);
	F666_5047(RTCV(tr1), tr2);
	RTLE;
}

/* {WSF_NOT_FOUND_RESPONSE}.send_to */
void F487_3232 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCFDT;
	RTLD;
	
	RTLI(15);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc1);
	RTLR(6,tr3);
	RTLR(7,loc5);
	RTLR(8,loc2);
	RTLR(9,loc3);
	RTLR(10,loc6);
	RTLR(11,loc7);
	RTLR(12,loc8);
	RTLR(13,loc9);
	RTLR(14,loc10);
	
	RTGC;
	loc4 = *(EIF_REFERENCE *)(Current);
	F94_1320(RTCV(arg1), ((EIF_INTEGER_32) 404L));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = RTOSCF(2074,F162_2074,(Current));
	tb1 = F749_6181(RTCV(tr1), tr2);
	if (tb1) {
		loc1 = RTMS_EX_H("<html lang=\"en\"><head>",22,617498686);
		tr1 = RTMS_EX_H("<title>",7,168924222);
		F741_5938(RTCV(loc1), tr1);
		tr1 = RTOSCF(2806,F436_2806,(Current));
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = F749_6245(RTCV(tr2));
		tr2 = F733_5612(RTCV(tr2));
		tr1 = F464_3051(RTCV(tr1), tr2);
		F741_5938(RTCV(loc1), tr1);
		tr1 = RTMS_EX_H("Error 404 (Not Found)",21,1627954985);
		F741_5938(RTCV(loc1), tr1);
		tr1 = RTMS_EX_H("</title>\012",9,1683473674);
		F741_5938(RTCV(loc1), tr1);
		tr1 = RTMS_EX_H(
			"<style type=\"text/css\">\012div#header {color: #fff; background-color: #000; padding: 20px; text-align: center; font-size: 2em; font-weight: bold;}\012div#message { margin: 40px; text-align: center; font-size: 1.5em; }\012div#suggestions { margin: auto; width: 60%;}\012div#suggestions ul { }\012div#footer {color: #999; background-color: #eee; padding: 10px; text-align: center; }\012div#logo { float: right; margin: 20px; width: 60px height: auto; font-size: 0.8em; text-align: center; }\012div#logo div.outter { padding: 6px; width"
			": 60px; border: solid 3px #500; background-color: #b00;}\012div#logo div.outter div.inner1 { display: block; margin: 10px 15px;  width: 30px; height: 50px; color: #fff; background-color: #fff; border: solid 2px #900; }\012div#logo div.outter div.inner2 { margin: 10px 15px; width: 30px; height: 15px; color: #fff; background-color: #fff; border: solid 2px #900; }\012</style>\012</head>\012<body>\012<div id=\"header\">Error 404 (Not Found)</div>",938,1575358782);
		F741_5938(RTCV(loc1), tr1);
		tr1 = RTMS_EX_H("<div id=\"logo\">",15,1146794046);
		F741_5938(RTCV(loc1), tr1);
		tr1 = RTMS_EX_H("<div class=\"outter\"> ",21,1378045216);
		F741_5938(RTCV(loc1), tr1);
		tr1 = RTMS_EX_H("<div class=\"inner1\"></div>",26,1346320446);
		F741_5938(RTCV(loc1), tr1);
		tr1 = RTMS_EX_H("<div class=\"inner2\"></div>",26,1405302846);
		F741_5938(RTCV(loc1), tr1);
		tr1 = RTMS_EX_H("</div>",6,1802958910);
		F741_5938(RTCV(loc1), tr1);
		tr1 = RTMS_EX_H("Error 404 (Not Found)</div>",27,1542357054);
		F741_5938(RTCV(loc1), tr1);
		tr1 = RTMS_EX_H("<div id=\"message\">Error 404 (Not Found): <code>",47,201880894);
		tr2 = RTOSCF(2806,F436_2806,(Current));
		tr3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr3 = F749_6245(RTCV(tr3));
		tr3 = F733_5612(RTCV(tr3));
		tr2 = F464_3051(RTCV(tr2), tr3);
		tr1 = F741_5940(RTCV(tr1), tr2);
		tr2 = RTMS_EX_H("</code></div>",13,1968312126);
		tr1 = F741_5940(RTCV(tr1), tr2);
		F741_5938(RTCV(loc1), tr1);
		tb1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		loc5 = tr1;
		if (EIF_TEST(loc5)) {
			tb2 = F281_2518(RTCV(loc5));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			tr1 = RTMS_EX_H("<div id=\"suggestions\"><strong>Perhaps you are looking for:</strong><ul>",71,1927170110);
			F741_5938(RTCV(loc1), tr1);
			F666_5038(RTCV(loc5));
			for (;;) {
				tb1 = F637_4919(RTCV(loc5));
				if (tb1) break;
				loc2 = F666_5012(RTCV(loc5));
				loc2 = eif_boxed_item(loc2,2);
				loc3 = F666_5012(RTCV(loc5));
				loc3 = eif_boxed_item(loc3,1);
				if ((EIF_BOOLEAN)(loc3 != NULL)) {
					if ((EIF_BOOLEAN)(loc2 == NULL)) {
						loc2 = (EIF_REFERENCE) loc3;
					}
					tr1 = RTMS_EX_H("<li>",4,1013737790);
					F741_5938(RTCV(loc1), tr1);
					tr1 = RTMS_EX_H("<a href=\"",9,99169058);
					tr1 = F741_5940(RTCV(tr1), loc3);
					tr2 = RTMS_EX_H("\">",2,8766);
					tr1 = F741_5940(RTCV(tr1), tr2);
					tr2 = RTOSCF(2806,F436_2806,(Current));
					tr3 = F733_5614(RTCV(loc2));
					tr2 = F464_3051(RTCV(tr2), tr3);
					tr1 = F741_5940(RTCV(tr1), tr2);
					tr2 = RTMS_EX_H("</a>",4,1009738046);
					tr1 = F741_5940(RTCV(tr1), tr2);
					F741_5938(RTCV(loc1), tr1);
				} else {
					if ((EIF_BOOLEAN)(loc2 != NULL)) {
						tr1 = RTMS_EX_H("<li>",4,1013737790);
						F741_5938(RTCV(loc1), tr1);
						tr1 = RTOSCF(2806,F436_2806,(Current));
						tr2 = F733_5614(RTCV(loc2));
						tr1 = F464_3051(RTCV(tr1), tr2);
						F741_5938(RTCV(loc1), tr1);
						tr1 = RTMS_EX_H("</li>\012",6,1937162250);
						F741_5938(RTCV(loc1), tr1);
					}
				}
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 != NULL) || (EIF_BOOLEAN)(loc2 != NULL))) {
					tr1 = F666_5012(RTCV(loc5));
					tr1 = eif_boxed_item(tr1,3);
					loc6 = tr1;
					if (EIF_TEST(loc6)) {
						tr1 = RTMS_EX_H("<br/> - ",8,1213593632);
						F741_5938(RTCV(loc1), tr1);
						tr1 = RTOSCF(2806,F436_2806,(Current));
						tr2 = F733_5614(RTCV(loc6));
						tr1 = F464_3051(RTCV(tr1), tr2);
						F741_5938(RTCV(loc1), tr1);
						tr1 = RTMS_EX_H("\012",1,10);
						F741_5938(RTCV(loc1), tr1);
					}
					tr1 = RTMS_EX_H("</li>\012",6,1937162250);
					F741_5938(RTCV(loc1), tr1);
				}
				F666_5040(RTCV(loc5));
			}
			tr1 = RTMS_EX_H("</ul></div>\012",12,322903050);
			F741_5938(RTCV(loc1), tr1);
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		loc7 = tr1;
		if (EIF_TEST(loc7)) {
			tr1 = RTMS_EX_H("<div>",5,1685093950);
			F741_5938(RTCV(loc1), tr1);
			F741_5938(RTCV(loc1), loc7);
			tr1 = RTMS_EX_H("</div>\012",7,1996802058);
			F741_5938(RTCV(loc1), tr1);
		}
		tr1 = RTMS_EX_H("<div id=\"footer\"></div>",23,968522558);
		F741_5938(RTCV(loc1), tr1);
		tr1 = RTMS_EX_H("</body>\012",8,1926616330);
		F741_5938(RTCV(loc1), tr1);
		tr1 = RTMS_EX_H("</html>\012",8,2088594186);
		F741_5938(RTCV(loc1), tr1);
		F541_4527(RTCV(loc4));
	} else {
		loc1 = RTMS_EX_H("Error 404 (Not Found): ",23,713570592);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr1 = F749_6245(RTCV(tr1));
		F741_5938(RTCV(loc1), tr1);
		F741_5952(RTCV(loc1), (EIF_CHARACTER_8) '\012');
		tb2 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		loc8 = tr1;
		if (EIF_TEST(loc8)) {
			tb3 = F281_2518(RTCV(loc8));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			tr1 = RTMS_EX_H("\012Perhaps you are looking for:\012",30,1534063882);
			F741_5938(RTCV(loc1), tr1);
			F666_5038(RTCV(loc8));
			for (;;) {
				tb2 = F637_4919(RTCV(loc8));
				if (tb2) break;
				loc2 = F666_5012(RTCV(loc8));
				loc2 = eif_boxed_item(loc2,2);
				loc3 = F666_5012(RTCV(loc8));
				loc3 = eif_boxed_item(loc3,1);
				if ((EIF_BOOLEAN)(loc3 != NULL)) {
					tr1 = RTMS_EX_H(" - ",3,2108704);
					F741_5938(RTCV(loc1), tr1);
					if ((EIF_BOOLEAN)(loc2 == NULL)) {
						F741_5938(RTCV(loc1), loc3);
					} else {
						tr1 = RTMS_EX_H(" : ",3,2112032);
						F741_5938(RTCV(loc1), tr1);
						tr1 = F733_5607(RTCV(loc2));
						F741_5938(RTCV(loc1), tr1);
					}
				} else {
					if ((EIF_BOOLEAN)(loc2 != NULL)) {
						tr1 = RTMS_EX_H(" - ",3,2108704);
						F741_5938(RTCV(loc1), tr1);
						tr1 = F733_5607(RTCV(loc2));
						F741_5938(RTCV(loc1), tr1);
					}
				}
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 != NULL) || (EIF_BOOLEAN)(loc2 != NULL))) {
					tr1 = RTMS_EX_H("\012",1,10);
					F741_5938(RTCV(loc1), tr1);
					tr1 = F666_5012(RTCV(loc8));
					tr1 = eif_boxed_item(tr1,3);
					loc9 = tr1;
					if (EIF_TEST(loc9)) {
						tr1 = RTMS_EX_H("   ",3,2105376);
						F741_5938(RTCV(loc1), tr1);
						tr1 = F733_5607(RTCV(loc9));
						F741_5938(RTCV(loc1), tr1);
						tr1 = RTMS_EX_H("\012",1,10);
						F741_5938(RTCV(loc1), tr1);
					}
				}
				F666_5040(RTCV(loc8));
			}
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		loc10 = tr1;
		if (EIF_TEST(loc10)) {
			tr1 = RTMS_EX_H("\012",1,10);
			F741_5938(RTCV(loc1), tr1);
			F741_5938(RTCV(loc1), loc10);
			tr1 = RTMS_EX_H("\012",1,10);
			F741_5938(RTCV(loc1), tr1);
		}
		F541_4530(RTCV(loc4));
	}
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
	F541_4517(RTCV(loc4), ti4_1);
	tr1 = F681_5151(RTCV(loc4));
	F94_1330(RTCV(arg1), tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1277[Dtype(arg1)-93])(RTCV(arg1), loc1);
	F94_1344(RTCV(arg1));
	RTLE;
}

void EIF_Minit243 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
