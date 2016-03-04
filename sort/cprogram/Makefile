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

PROGRAMS = insert_sort_demo \
		   main_demo \
		   bubble_sort_demo \
		   selection_sort_demo \
		   quick_sort_demo \
		   merge_sort_demo \

all: $(PROGRAMS)

insert_sort_demo: $(SRCDIR)/insert_sort.c $(SRCDIR)/myarray.c
	$(CC) $(CFLAGS) -o $@ $^ $(INCLUDEDIR) $(LIBS)

main_demo:	$(SRCDIR)/main.c $(SRCDIR)/myarray.c
	$(CC) $(CFLAGS) -o $@ $^ $(INCLUDEDIR) $(LIBS)

bubble_sort_demo: $(SRCDIR)/bubble_sort.c $(SRCDIR)/myarray.c
	$(CC) $(CFLAGS) -o $@ $^ $(INCLUDEDIR) $(LIBS)

selection_sort_demo: $(SRCDIR)/selection_sort.c $(SRCDIR)/myarray.c
	$(CC) $(CFLAGS) -o $@ $^ $(INCLUDEDIR) $(LIBS)

quick_sort_demo: $(SRCDIR)/quick_sort.c $(SRCDIR)/myarray.c
	$(CC) $(CFLAGS) -o $@ $^ $(INCLUDEDIR) $(LIBS)

merge_sort_demo: $(SRCDIR)/merge_sort.c $(SRCDIR)/myarray.c
	$(CC) $(CFLAGS) -o $@ $^ $(INCLUDEDIR) $(LIBS)

clean:
	rm -rf $(PROGRAMS) *.dSYM

