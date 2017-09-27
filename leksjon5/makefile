TARGETS = ex0 ex1
TARGET ?= botgame

CC = gcc
# CFLAGS = -O0 -std=c11 
CFLAGS = -O2 -std=c11
LINKEXTRA = -lncurses

$(TARGET): $(TARGET).c makefile
	$(CC) $(CFLAGS) $< -o $@ $(LINKEXTRA)

clean:
	rm -f *.o $(TARGETS)
