# Comment # , This is a Makefile
# Notice that the space before cc must be a TAB, NOT four spaces !!
# http://jimmynuts.blogspot.com/2010/12/gnu-makefile.html



# It s a Makefile. Define and use variable.
AR = ar
AS = as
CC = cc
CXX = g++
RM = rm -f
ARFLAGS = rv
CFLAGS =
CXXFLAGS =
# First Rule
# Second Rule with one dependency
all: clean main
	@echo "$(CC)"
main.o:
	$(CC) -c -o main.o test.c
main: main.o
	$(CC) -o main main.o
clean:
	@rm -rf *.o
