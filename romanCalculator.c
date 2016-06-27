#include "romanCalculator.h"

int convertRomanNumeralToArabic(char *roman) {
	int i, arabic = 0;
	for (i = 0; i < roman[i] != '\0'; i++) {
		switch (roman[i]) {
			case 'I':
				arabic++;
				break;
			case 'V':
				arabic += 5;
				break;
			case 'X':
				arabic += 10;
				break;
			case 'L':
				arabic += 50;
				break;
			case 'C':
				arabic += 100;
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
