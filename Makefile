
vpath %.c src

RM := rm -f

SRCS := $(notdir $(wildcard src/*.c))
OBJS := $(patsubst %.c,%.o,$(SRCS))

# TODO: This should be configurable eventually, ideally with autotools
# integration.
CC       := gcc
CFLAGS   := -std=c17 -Wall -Wextra -Wpedantic -O3 -mtune=native
CPPFLAGS := $(CPPFLAGS) -I include
LDFLAGS  := -O
LIBS     :=

TARGET := base64

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) -o $@ $^ $(LIBS)

%.o: %.c
	$(CC) $(CFLAGS) $(CPPFLAGS) -c -o $@ $^

tests: $(TARGET)
	$(MAKE) -C tests

check: $(TARGET)
	$(MAKE) -C tests check

.PHONY: clean
clean:
	$(RM) $(OBJS) $(TARGET)

.PHONY: clean-tests
clean-tests:
	$(MAKE) -C tests clean

.PHONY: dist-clean
dist-clean: clean-tests clean
