CFLAGS =  `pkg-config --cflags check libbsd`
LIBS = `pkg-config --libs check libbsd`

CC = gcc

TEST = romanCalculatorTest

CALCULATOR = romanCalculator

CONVERTER = romanConverter

all: check

check: check_roman
	./$(TEST)

check_roman: $(CALCULATOR).c $(TEST).c $(CONVERTER).c
	$(CC) $(CFLAGS) -o $(TEST) $(CONVERTER).c $(CALCULATOR).c $(TEST).c $(LIBS)

clean:
	rm -f *.o $(CALCULATOR) $(TEST) $(CONVERTER) a.out
