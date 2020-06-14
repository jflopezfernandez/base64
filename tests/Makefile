
vpath %.c src

RM := rm -f

CPPFLAGS := $(CPPFLAGS) -I ../include

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
