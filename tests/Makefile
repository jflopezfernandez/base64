
vpath %.c src

RM := rm -f

# TODO: This should be configurable eventually, ideally with autotools
# integration.
CC       := gcc
CFLAGS   := -std=c17 -Wall -Wextra -Wpedantic -O3 -mtune=native
CPPFLAGS := $(CPPFLAGS) -I ../include
LDFLAGS  := -O
LIBS     := -lcheck

TESTS := base64

all: tests

check: tests
	./base64

tests: $(TESTS)

base64: base64.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) -o $@ $^ $(LIBS)

.PHONY: clean
clean:
	$(RM) $(OBJS) $(TESTS)
