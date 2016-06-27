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

Suite * roman_suite(void) {
	Suite *s;
	TCase *tc_core;

	s = suite_create("Roman");

	/* Core test case */
	tc_core = tcase_create("First");

	tcase_add_test(tc_core, convert_II_to_2);
	tcase_add_test(tc_core, convert_VV_to_10);
	tcase_add_test(tc_core, convert_XX_to_20);
	tcase_add_test(tc_core, convert_LL_to_100);
	tcase_add_test(tc_core, convert_CC_to_200);
	tcase_add_test(tc_core, convert_DD_to_1000);
	tcase_add_test(tc_core, convert_MM_to_1000);

	tcase_add_test(tc_core, convert_IV_to_4);
	tcase_add_test(tc_core, convert_IX_to_9);
	tcase_add_test(tc_core, convert_XL_to_40);
	tcase_add_test(tc_core, convert_XC_to_90);
	tcase_add_test(tc_core, convert_CD_to_400);
	tcase_add_test(tc_core, convert_CM_to_900);

	suite_add_tcase(s, tc_core);

	return s;
}

int main(void) {
	int number_failed;
	Suite *s;
	SRunner *sr;
	s = roman_suite();
	sr = srunner_create(s);

	srunner_run_all(sr, CK_NORMAL);
	number_failed = srunner_ntests_failed(sr);
	srunner_free(sr);
	return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;	
}
