# Time-stamp: <File Makefile saved at 17:48:42 CEST on Sunday 2025-04-06, by janjoris on xi.>

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c17 -O3

# Get the list of programs by taking the basename of all .c files
PROGRAMS = $(basename $(wildcard *.c))

# Default target builds all programs
all: $(PROGRAMS)

# Pattern rule: compile each .c file to an executable with the same name
%: %.c
	$(CC) $(CFLAGS) -o $@ $<

# Clean target to remove executables
clean:
	rm -f $(PROGRAMS)

.PHONY: all clean
