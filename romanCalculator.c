#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "romanCalculator.h"

void addRomanNumerals(char *first, char *second, char* result) {
	int firstArabic = convertRomanNumeralToArabic(first);
	int secondArabic = convertRomanNumeralToArabic(second);

	int resultArabic = firstArabic + secondArabic;

	convertArabicNumeralToRoman(resultArabic, result);
}

void convertArabicNumeralToRoman(int arabic, char* roman) {
	int i;

	int numberOfThousands = arabic / 1000;
	for (i = 0; i < numberOfThousands; i++) {
		strcat(roman, "M");
		arabic -= 1000;
	}

	if (arabic == 900) {
		strcat(roman, "CM");
		arabic -= 900;
	}

	int numberOfFiveHundreds = arabic / 500;
	for (i = 0; i < numberOfFiveHundreds; i++) {
		strcat(roman, "D");
		arabic -= 500;
	}

	if (arabic == 400) {
		strcat(roman, "CD");
		arabic -= 400;
	}

	int numberOfHundreds = arabic / 100;
	for (i = 0; i < numberOfHundreds; i++) {
		strcat(roman, "C");
		arabic -= 100;
	}

	if (arabic == 90) {
		strcat(roman, "XC");
		arabic -= 90;
	}

	int numberOfFifties = arabic / 50;
	for (i = 0; i < numberOfFifties; i++) {
		strcat(roman, "L");
		arabic -= 50;
	}

	if (arabic == 40) {
		strcat(roman, "XL");
		arabic -= 40;
	}

	int numberOfTens = arabic / 10;
	for (i = 0; i < numberOfTens; i++) {
		strcat(roman, "X");
		arabic -= 10;
	}

	if (arabic == 9) {
		strcat(roman, "IX");
		arabic -= 9;
	}

	int numberOfFives = arabic / 5;
	for (i = 0; i < numberOfFives; i++) {
		strcat(roman, "V");
		arabic -= 5;
	}

	if (arabic == 4) {
		strcat(roman, "IV");
		arabic -= 4;
	}

	int numberOfOnes = arabic / 1;
	for (i = 0; i < numberOfOnes; i++) {
		strcat(roman, "I");
		arabic -= 1;
	}
}

int convertRomanNumeralToArabic(char *roman) {
	int i, arabic = 0;
	for (i = 0; i < roman[i] != '\0'; i++) {
		switch (roman[i]) {
			case 'I':
				switch (roman[i+1]) {
					case 'V':
						arabic += 4;
						i++;
						break;
					case 'X':
						arabic += 9;
						i++;
						break;
					default:
						arabic++;
				}
				break;
			case 'V':
				arabic += 5;
				break;
			case 'X':
				switch (roman[i+1]) {
					case 'L':
						arabic += 40;
						i++;
						break;
					case 'C':
						arabic += 90;
						i++;
						break;
					default:
						arabic += 10;
				}
				break;
			case 'L':
				arabic += 50;
				break;
			case 'C':
				switch (roman[i+1]) {
					case 'D':
						arabic += 400;
						i++;
						break;
					case 'M':
						arabic += 900;
						i++;
						break;
					default:
						arabic += 100;
				}
				break;
			case 'D':
				arabic += 500;
				break;
			case 'M':
				arabic += 1000;
				break;
			default:
				arabic = -1;
		}
	}
	return arabic;
}
