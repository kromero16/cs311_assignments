/**
 * This file tests the implementation of Stack data structure
 * 
 */
#include "stack.h"
#include <iostream>
#include "assert.h"

using namespace std;

int main(int argc, char* argv[]) {
    Stack <int> stack;
    assert(stack.size() == 0);
    stack.push(1);
    stack.displayAll();

    // Test push function
    for(int i = 0; i < 10; i++) {
        stack.push(i);
        cout << "push " << i << ", stack = ";
        stack.displayAll();
    }

    // Test pop function
    for (int i = 0; i < 5; i++) {
        int x;
        stack.pop(x);
        cout << "pop top val = " << x << ", stack = ";
        stack.displayAll();
    }

    // Test copy constructor 
    Stack<int> s2 (stack);
    cout << "s2 size = " << s2.size() << endl;
    cout << "s2 = ";
    s2.displayAll();
    assert(s2.size() == stack.size());
    assert(s2.top() == stack.top());

    stack.push(10);    // push to stack doesn't change s2
    cout << "After push, stack size = " << stack.size() << endl;
    cout << "stack = ";
    stack.displayAll();
    assert(s2.size() != stack.size());
    assert(s2.top() != stack.top());

    // Test assignment operator = 
    s2 = stack;
    cout << "s2 size = " << s2.size() << endl;
    cout << "s2 = ";
    s2.displayAll();
    assert(s2.size() == stack.size());
    assert(s2.top() == stack.top());

    
}