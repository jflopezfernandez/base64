
vpath %.c src
vpath %.o ../

RM := rm -f

# TODO: This should be configurable eventually, ideally with autotools
# integration.
CC       := gcc
CFLAGS   := -std=c17 -Wall -Wextra -Wpedantic -O3 -mtune=native
CPPFLAGS := $(CPPFLAGS) -I ../include
LDFLAGS  := -O
LIBS     := -lcheck

TESTS := test_base64

all: tests

check: tests
	./test_base64

tests: $(TESTS)

test_base64: test_base64.o base64.o
	$(CC) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) -o $@ $^ $(LIBS)

%.o: %.c
	$(CC) $(CFLAGS) $(CPPFLAGS) -c -o $@ $^

.PHONY: clean
clean:
	$(RM) $(OBJS) $(TESTS)
