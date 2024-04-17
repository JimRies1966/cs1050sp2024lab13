#######################
# Makefile for Lab 13 #
#######################

# Setup default compiler, compile options, and link options
CC=gcc
COPTS = -c -std=c11 -Wall -Werror -pedantic-errors
LOPTS = -lm -L. -luniversity
EXENAME = testuniversity

# Default target
$(EXENAME) : main.o lab13.o
	$(CC) $^ $(LOPTS) -o $@

# Debugging target
debug: COPTS += -DDEBUG=1 -g
debug: clean $(EXENAME)

# Honors target
honors: COPTS += -DHONORS=1
honors: clean $(EXENAME)

# Regular target
regular: clean $(EXENAME)

# Honors Debug target
honorsdebug: COPTS += -DDEBUG=1 -g -DHONORS=1
honorsdebug: clean $(EXENAME)

# Source dependencies
main.o : main.c
	$(CC) $(COPTS) $^

lab13.o : lab13.c
	$(CC) $(COPTS) $^

# Clean build target
clean :
	@rm -f *.o
	@rm -f $(EXENAME)
