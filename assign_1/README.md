# CS311 Programming Assignment 1

In this assignment, you will complete the implementation of a class of single linked list. The LinkedList class is defined in the "linkedlist.h" header file.
Don't change the definitions of its member functions, except for adding comments. The LinkedList interface is used in the tests.

There are three test programs to test the correctness of your 
implementation. To build the executables `test1`, `test 2` and `test 3`, type `make` at the command line.  Then run each of the tests and confirm the outputs match what are in the "test1_out.txt", "test2_out.txt" and "test3_out.txt" files. 
```
$ make
$ ./test1
$ ./test2
$ ./test3
```

Your code should work correctly for all tests and be robust for potential error conditions, and free of dangerous code constructs and memory leaks. 
We will use tools like [cppcheck](https://cppcheck.sourceforge.io/) and [valgrind](https://valgrind.org/) to to grade your code and catch memory leaks. 
