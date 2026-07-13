CC := gcc
CFLAGS := -std=c17 -Wall -Wextra -Wpedantic -g
TARGET := build/programa.exe

.PHONY: all run clean

all: $(TARGET)

$(TARGET): main.c
	@if not exist build mkdir build
	$(CC) $(CFLAGS) main.c -o $(TARGET)

run: $(TARGET)
	$(TARGET)

clean:
	@if exist build rmdir /s /q build
