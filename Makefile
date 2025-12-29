CC = gcc
CFLAGS = -Wall -g
TARGET = flames
OBJS=flames.o

all: $(TARGET)

$(TARGET): flames.o
	$(CC) $(CFLAGS) -o $(TARGET) $<

$(OBJS): flames.c
	$(CC) $(CFLAGS) -c $<

.PHONY:
clean:
	rm -f *.o $(TARGET)
