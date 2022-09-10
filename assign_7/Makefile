CC = g++	# use g++ for compiling c++ code
CFLAGS = -g -Wall -std=c++11		# compilation flags: -g for debugging. Change to -O or -O2 for optimized code.

all: test
SRCS = dllist.cpp htable.cpp test.cpp
DEPS = $(SRCS:.cpp=.d)

.cpp.o:
	$(CC) -c $(CFLAGS) $< -o $@

test: test.o dllist.o htable.o
	$(CC) test.o dllist.o htable.o -o test
	
clean:
	rm *.o test
