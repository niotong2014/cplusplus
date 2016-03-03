.PHONY: all clean
CC=gcc
CPP=g++
AR=ar
RANLIB=ranlib
CFLAGS= -g -Wall -Wno-unused-function
C11FLAGS= -g -Wall -Wno-unused-function -std=c++11
SRCDIR = ./src
INCLUDEDIR = -I./include -I.
DEPS = 
LIBS = -lm

PROGRAMS = main_demo \

all: $(PROGRAMS)

main_demo:	$(SRCDIR)/main.cpp
	$(CPP) $(CFLAGS) -o $@ $^ $(INCLUDEDIR) $(LIBS)

clean:
	rm -rf $(PROGRAMS) *.dSYM

