/**
 * This file tests the implementation of Stack data structure
 * 
 */
#include "stack.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    Stack <int> stack(10);
    stack.push(1);
    stack.displayAll();

    for(int i = 0; i < 10; i++) {
        stack.push(i);
        stack.displayAll();
    }

    for (int i = 0; i < 8; i++) {
        int x;
        stack.pop(x);
        stack.displayAll();
    }
}