
vpath %.c src

RM := rm -f

SRCS := $(notdir $(wildcard src/*.c))
OBJS := $(patsubst %.c,%.o,$(SRCS))

CPPFLAGS := $(CPPFLAGS) -I include

TARGET := base64

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) -o $@ $^ $(LIBS)

%.o: %.c
	$(CC) $(CFLAGS) $(CPPFLAGS) -c -o $@ $^

.PHONY: clean
clean:
	$(RM) $(OBJS) $(TARGET)
