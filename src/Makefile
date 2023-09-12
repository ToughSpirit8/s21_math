CC=gcc
CFLAGS=-Wall -Werror -Wextra -std=c11 -I.
BIN=s21_math_pusk
DEPS=s21_math.h
OBJ=s21_math.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(BIN): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o *.out