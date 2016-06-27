#include <stdio.h>
#include "romanCalculator.h"

int main(int argc, char *argv[]) {
	char* firstRoman = argv[1];
	char* secondRomand = argv[2];
	char result[20];

	printf("The result is %s\n", result);
}

void addInputTogether(firstRoman, secondRoman, result) {
	printf("Adding %s and %s\n", firstRoman, secondRomand);
	addRomanNumerals(firstRoman, secondRomand, result);
}