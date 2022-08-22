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

/**
 * Test BST class using numbers from standard input
 */
int main() {
    srand(1);
    unordered_set<int> nums;
    while(nums.size() < 10) {
        nums.insert((rand() % 100) - 50);
    }
    BST bst;
    
    for(int num : nums) {
        cout << "Inserting " << num << endl;
        bst.insert(num);
        cout << "Height of BST: " << bst.height() << endl;
    }
    bst.printInorder(bst.getRoot());
    cout << bst.size() << endl;
    bst.printPreorder(bst.getRoot());
    cout << endl;
    // check the height of the tree
    cout << "Height of the tree: " << bst.height() << endl;
}