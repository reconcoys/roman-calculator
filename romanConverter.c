#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

void convertArabicNumeralToRoman(int arabic, char* roman, int romanLength) {

	static int romanValue[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
	static char *romanKey[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

	for (int i = 0; i < 13; i++) {
		while (arabic >= romanValue[i]) {
			strlcat(roman, romanKey[i], romanLength);
			arabic -= romanValue[i];
		}
	}
}

int romanLetterToNumber(char romanLetter) {
	int number;
	switch (romanLetter) {
		case 'I':
			number = 1;
			break;
		case 'V':
			number = 5;
			break;
		case 'X':
			number = 10;
			break;
		case 'L':
			number = 50;
			break;
		case 'C':
			number = 100;
			break;
		case 'D':
			number = 500;
			break;
		case 'M':
			number = 1000;
			break;
		default:
			number = 0;
	}
	return number;
}

int convertRomanNumeralToArabic(char *roman) {
	int arabic = 0, i = 0, currentValue = 0, nextValue = 0;

	while (roman[i] != '\0') {
		currentValue = romanLetterToNumber(roman[i]);
		if (roman[i + 1] != '\0') {
			nextValue = romanLetterToNumber(roman[i + 1]);
			if (nextValue > currentValue) {
				arabic += nextValue - currentValue;
				i++;
			}
			else {
				arabic += currentValue;
			}
		}
		else {
			arabic += currentValue;
		}
		i++;
	}

	return arabic;
}
