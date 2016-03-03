.PHONY: all clean
CC=gcc
CPP=g++
AR=ar
RANLIB=ranlib
CFLAGS= -g -Wall -Wno-unused-function
C11FLAGS= -g -Wall -Wno-unused-function -std=c++11
CSRCDIR = ./src_c
CPPSRCDIR = ./src_cpp
INCLUDEDIR = -I./include -I.
DEPS = 
LIBS = -lm

PROGRAMS = insert_sort_demo \
		   main_demo \
		   bubble_sort_demo 

all: $(PROGRAMS)

insert_sort_demo: $(CSRCDIR)/insert_sort.c $(CSRCDIR)/myarray.c
	$(CC) $(CFLAGS) -o $@ $^ $(INCLUDEDIR) $(LIBS)

main_demo:	$(CSRCDIR)/main.c $(CSRCDIR)/myarray.c
	$(CC) $(CFLAGS) -o $@ $^ $(INCLUDEDIR) $(LIBS)

bubble_sort_demo: $(CSRCDIR)/bubble_sort.c $(CSRCDIR)/myarray.c
	$(CC) $(CFLAGS) -o $@ $^ $(INCLUDEDIR) $(LIBS)

clean:
	rm -rf $(PROGRAMS) *.dSYM

