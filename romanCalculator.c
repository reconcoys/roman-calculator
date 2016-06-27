#include "romanCalculator.h"

int convertRomanNumeralToArabic(char *roman) {
	int i, arabic = 0;
	for (i = 0; i < roman[i] != '\0'; i++) {
		switch (roman[i]) {
			case 'I':
			arabic++;
		}
	}
	return arabic;
}
