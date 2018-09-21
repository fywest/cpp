CC = gcc
CXX = g++

ADD_CFLAGS := -Wall -g

CFLAGS := $(ADD_CFLAGS) $(CFLAGS)
CPPFLAGS := $(ADD_CFLAGS)
LDFLAGS := $(LDFLAGS)
targets := test
.PHONY: all
all: $(targets)
test: main.o fun.o
	$(CXX) $^ -o $@ $(LDFLAGS)
main.o: main.cpp
	$(CXX) $(CPPFLAGS) -c $< -o $@
fun.o: fun.c fun.h
	$(CC) $(CFLAGS) -c $< -o $@
.PYONY: clean
clean:
	$(RM) $(targets) *.o
