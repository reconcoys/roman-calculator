#include "romanCalculator.h"
#include "romanConverter.h"

void addRomanNumerals(char *first, char *second, char* result, int romanLength) {
	int firstArabic = convertRomanNumeralToArabic(first);
	int secondArabic = convertRomanNumeralToArabic(second);

	int resultArabic = firstArabic + secondArabic;

	convertArabicNumeralToRoman(resultArabic, result, romanLength);
}

void subtractFirstFromSecondRomanNumerals(char *first, char *second, char* result, int romanLength)	{
	int firstArabic = convertRomanNumeralToArabic(first);
	int secondArabic = convertRomanNumeralToArabic(second);

	int resultArabic = secondArabic - firstArabic;

	convertArabicNumeralToRoman(resultArabic, result, romanLength);
}
