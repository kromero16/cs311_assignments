/**
 * This file tests the implementation of BST data structure
 * 
 */
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <unordered_set>
#include "BST.h"
using namespace std;

int main() {
    // Initialize a set of random numbers
    srand(1);
    unordered_set<int> nums;
    while(nums.size() < 10) {
        nums.insert((rand() % 100) - 50);
    }

    // Insert the random numbers into a BST
    BST bst;
    for(int num : nums) {
        cout << "Inserting " << num << endl;
        bst.insert(num);
    }
    cout << "BST size = " << bst.size() << endl;

    // Print out the BST tree in-order and pre-order
    cout << "In-order traversal of the BST: " << endl;
    bst.printInorder(bst.getRoot());
    cout << "\nPre-order traversal of the BST: " << endl;
    bst.printPreorder(bst.getRoot());
    cout << endl;
   
   // Print out the successors of BST tree nodes
   // staring at the left most node
    BST::Node * node = bst.getLeftMostNode();
    while(node != nullptr) {
        cout << node->data << " has ";
        node = bst.successor(node);
        if (node != nullptr) {
            cout << "successor " << node->data << endl;
        } else {
            cout << "no sucessor" << endl;
        }
    }
}