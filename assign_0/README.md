# Assignment 0: Hello World

In this assignment, you will get familiar with the development environment and process to ensure that you are ready for the future programming assignments. 

A "Hello World" program is a simple program to test the basic functionality of your environment. In this assignment, there is a file called "hello.cpp" that currently doesn't compile due to bugs in the code. You should fix the bugs and modify the program so that it can accept a "name" as command line input and print out a welcome message, for example:
```
hello Alex
```
would print the message `Hello, Alex! Welcome to CS 311`.

You can compile your code using the included `Makefile` and the `make` command
```
make
```
We will use the same Makefile for grading. Here is an example of how it should like when it's compiled and run from the command line (assuming I use `Mary` for command line input)
```
$ make
$ ./hello Mary
Hello, Mary! Welcome to CS 311
```
