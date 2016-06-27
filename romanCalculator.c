#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "romanCalculator.h"

void convertArabicNumeralToRoman(int arabic, char* roman) {
	int i, numberOfOnes = arabic / 1;
	for (i = 0; i < numberOfOnes; i++) {
		strcat(roman, "I");
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
