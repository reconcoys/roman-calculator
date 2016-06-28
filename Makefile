CFLAGS =  `pkg-config --cflags check`
LIBS = `pkg-config --libs check`

CC = gcc

TEST = romanCalculatorTest

SOURCE = romanCalculator

all: $(SOURCE) $(TEST)

check: check_roman
	./$(TEST)

check_roman: $(SOURCE).c $(TEST).c
	$(CC) $(CFLAGS) -o $(TEST) $(SOURCE).c $(TEST).c $(LIBS)

clean:
	rm -f *.o $(SOURCE) $(TEST) a.out
