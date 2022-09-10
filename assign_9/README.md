# CS311 Programming Assignment 

In this assignment, you will you will modify your graph.h and graph.cpp file to accomodate distance in order to calculate the shortest path. For this assignment, your graphs will be undirected, and the distance between nodes will be provided in the test.cpp file.

The Graph class will implement the following:

## Graph
The Graph data structure should implement the following member functions:
- Default constructor: It constructs an empty Graph.
- `Search`: A function used to search for whether a path can be made between two vertex. If found, it will print a path. 
- `addEdgeDirected`: Adds a directed edge as opposed to the previous assignment which used undirected edges.
- `dijkstra`: A function to return the shortest path using the dijkstras algorithm. a printing statement has been provided to match your output with the test_out.txt.

## Testing

There is a test program to test the correctness of your 
implementation. To build the executables `test`, type `make` at the command line.  Then run each of the tests and confirm the outputs match what are in the "test_out.txt" file. 
```
$ make
$ ./test
```

Your code should work correctly for all tests and be robust for potential error conditions, and free of dangerous code constructs and memory leaks. 
We will use tools like [cppcheck](https://cppcheck.sourceforge.io/) and [valgrind](https://valgrind.org/) to to grade your code and catch memory leaks. 
