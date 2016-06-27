#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <check.h>
#include "romanCalculator.h"

START_TEST (convert_II_to_2) {
	ck_assert_int_eq(convertRomanNumeralToArabic("II"), 2);
}
END_TEST

START_TEST (convert_VV_to_10) {
	ck_assert_int_eq(convertRomanNumeralToArabic("VV"), 10);
}
END_TEST

START_TEST (convert_XX_to_20) {
	ck_assert_int_eq(convertRomanNumeralToArabic("XX"), 20);
}
END_TEST

START_TEST (convert_LL_to_100) {
	ck_assert_int_eq(convertRomanNumeralToArabic("LL"), 100);
}
END_TEST

START_TEST (convert_CC_to_200) {
	ck_assert_int_eq(convertRomanNumeralToArabic("CC"), 200);
}
END_TEST

START_TEST (convert_DD_to_1000) {
	ck_assert_int_eq(convertRomanNumeralToArabic("DD"), 1000);
}
END_TEST

START_TEST (convert_MM_to_1000) {
	ck_assert_int_eq(convertRomanNumeralToArabic("MM"), 2000);
}
END_TEST

START_TEST (convert_IV_to_4) {
	ck_assert_int_eq(convertRomanNumeralToArabic("IV"), 4);
}
END_TEST

START_TEST (convert_IX_to_9) {
	ck_assert_int_eq(convertRomanNumeralToArabic("IX"), 9);
}
END_TEST

START_TEST (convert_XL_to_40) {
	ck_assert_int_eq(convertRomanNumeralToArabic("XL"), 40);
}
END_TEST

START_TEST (convert_XC_to_90) {
	ck_assert_int_eq(convertRomanNumeralToArabic("XC"), 90);
}
END_TEST

START_TEST (convert_CD_to_400) {
	ck_assert_int_eq(convertRomanNumeralToArabic("CD"), 400);
}
END_TEST

START_TEST (convert_CM_to_900) {
	ck_assert_int_eq(convertRomanNumeralToArabic("CM"), 900);
}
END_TEST

START_TEST (convert_MCMXCIV_to_1994) {
	ck_assert_int_eq(convertRomanNumeralToArabic("MCMXCIV"), 1994);
}
END_TEST

START_TEST (convert_1_to_I) {
	char roman[10];
	convertArabicNumeralToRoman(1, roman);
	ck_assert_str_eq(roman, "I");
}
END_TEST

START_TEST (convert_2_to_II) {
	char roman[10];
	convertArabicNumeralToRoman(2, roman);
	ck_assert_str_eq(roman, "II");
}
END_TEST

START_TEST (convert_5_to_V) {
	char roman[10];
	convertArabicNumeralToRoman(5, roman);
	ck_assert_str_eq(roman, "V");
}
END_TEST

START_TEST (convert_20_to_XX) {
	char roman[10];
	convertArabicNumeralToRoman(20, roman);
	ck_assert_str_eq(roman, "XX");
}
END_TEST

START_TEST (convert_50_to_L) {
	char roman[10];
	convertArabicNumeralToRoman(50, roman);
	ck_assert_str_eq(roman, "L");
}
END_TEST

START_TEST (convert_200_to_CC) {
	char roman[10];
	convertArabicNumeralToRoman(200, roman);
	ck_assert_str_eq(roman, "CC");
}
END_TEST

START_TEST (convert_500_to_D) {
	char roman[10];
	convertArabicNumeralToRoman(500, roman);
	ck_assert_str_eq(roman, "D");
}
END_TEST

START_TEST (convert_2000_to_MM) {
	char roman[10];
	convertArabicNumeralToRoman(2000, roman);
	ck_assert_str_eq(roman, "MM");
}
END_TEST

START_TEST (convert_4_to_IV) {
	char roman[10];
	convertArabicNumeralToRoman(4, roman);
	ck_assert_str_eq(roman, "IV");
}
END_TEST

START_TEST (convert_9_to_IX) {
	char roman[10];
	convertArabicNumeralToRoman(9, roman);
	ck_assert_str_eq(roman, "IX");
}
END_TEST

START_TEST (convert_40_to_XL) {
	char roman[10];
	convertArabicNumeralToRoman(40, roman);
	ck_assert_str_eq(roman, "XL");
}
END_TEST

Suite * to_arabic(void) {
	Suite *s;
	TCase *tc_core;

	s = suite_create("to_arabic");

	tc_core = tcase_create("First");

	//basic roman to arabic conversions
	tcase_add_test(tc_core, convert_II_to_2);
	tcase_add_test(tc_core, convert_VV_to_10);
	tcase_add_test(tc_core, convert_XX_to_20);
	tcase_add_test(tc_core, convert_LL_to_100);
	tcase_add_test(tc_core, convert_CC_to_200);
	tcase_add_test(tc_core, convert_DD_to_1000);
	tcase_add_test(tc_core, convert_MM_to_1000);

	//subtractive roman to arabic conversions
	tcase_add_test(tc_core, convert_IV_to_4);
	tcase_add_test(tc_core, convert_IX_to_9);
	tcase_add_test(tc_core, convert_XL_to_40);
	tcase_add_test(tc_core, convert_XC_to_90);
	tcase_add_test(tc_core, convert_CD_to_400);
	tcase_add_test(tc_core, convert_CM_to_900);

	//general sanity test
	tcase_add_test(tc_core, convert_MCMXCIV_to_1994);

	// basic arabic to roman conversions
	tcase_add_test(tc_core, convert_1_to_I);
	tcase_add_test(tc_core, convert_2_to_II);
	tcase_add_test(tc_core, convert_5_to_V);
	tcase_add_test(tc_core, convert_20_to_XX);
	tcase_add_test(tc_core, convert_50_to_L);
	tcase_add_test(tc_core, convert_200_to_CC);
	tcase_add_test(tc_core, convert_500_to_D);
	tcase_add_test(tc_core, convert_2000_to_MM);

	//substractive arabic to roman conversions
	tcase_add_test(tc_core, convert_4_to_IV);
	tcase_add_test(tc_core, convert_9_to_IX);
	tcase_add_test(tc_core, convert_40_to_XL);

	suite_add_tcase(s, tc_core);

	return s;
}

int main(void) {
	int number_failed;
	Suite *s;
	SRunner *sr;
	s = to_arabic();
	sr = srunner_create(s);

	srunner_run_all(sr, CK_NORMAL);
	number_failed = srunner_ntests_failed(sr);
	srunner_free(sr);
	return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;	
}
