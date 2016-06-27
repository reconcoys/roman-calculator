#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <check.h>
#include "romanCalculator.h"

START_TEST (convert_I_to_1) {
	ck_assert_int_eq(convertRomanNumeralToArabic("I"), 1);
}
END_TEST

START_TEST (convert_II_to_2) {
	ck_assert_int_eq(convertRomanNumeralToArabic("II"), 2);
}
END_TEST

START_TEST (convert_V_to_5) {
	ck_assert_int_eq(convertRomanNumeralToArabic("V"), 5);
}
END_TEST

START_TEST (convert_VV_to_10) {
	ck_assert_int_eq(convertRomanNumeralToArabic("VV"), 10);
}
END_TEST

Suite * roman_suite(void) {
	Suite *s;
	TCase *tc_core;

	s = suite_create("Roman");

	/* Core test case */
	tc_core = tcase_create("First");

	tcase_add_test(tc_core, convert_I_to_1);
	tcase_add_test(tc_core, convert_II_to_2);
	tcase_add_test(tc_core, convert_V_to_5);
	tcase_add_test(tc_core, convert_VV_to_10);

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
