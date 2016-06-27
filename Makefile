CFLAGS = `pkg-config --cflags --libs check`
CC = gcc

TEST = romanCalculatorTest

SOURCE = romanCalculator

all: $(SOURCE) $(TEST)

check: check_roman
	./$(TEST)

check_roman: $(SOURCE).c $(TEST).c
	$(CC) $(CFLAGS) -o $(TEST) $(SOURCE).c $(TEST).c

useable: addTwoRomanNumerals.c $(SOURCE).c
	$(CC) -o addTwoRomanNumerals addTwoRomanNumerals.c $(SOURCE).c

clean:
	rm -f *.o $(SOURCE) $(TEST) addTwoRomanNumerals a.out
