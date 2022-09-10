# CS311 Programming Assignment 

In this assignment, you will write a c++ program to implement the Depth First Search (DFS), Breadth First Search (BFS), and hasCycle methods of an `undirected` graph. Your implementation must meet the following requirements.

## Graph
The Graph data structure should implement the following member functions:
- Default constructor: It constructs an empty Graph.
- `DFSUtil`:  A function used by DFS 
- `hasCycleUtil`: A function used by hasCycle
- `addEdge`: function to add an edge to graph
- `DFS`: DFS traversal of the vertices of the provided integer
- `BFS`: BFS traversal of the vertices of the provided integer
- `hasCycle`: Check whether the graph has cycles


## Testing

There is a test program to test the correctness of your 
implementation. To build the executables `test`, type `make` at the command line.  Then run each of the tests and confirm the outputs match what are in the "test_out.txt" file. 
```
$ make
$ ./test
```

Your code should work correctly for all tests and be robust for potential error conditions, and free of dangerous code constructs and memory leaks. 
We will use tools like [cppcheck](https://cppcheck.sourceforge.io/) and [valgrind](https://valgrind.org/) to to grade your code and catch memory leaks. 
