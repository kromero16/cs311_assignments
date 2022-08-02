# CS311 programming assignment 5
In this assignment, you will implement a Binary Search Tree (BST) data structure in C++. Please add your code in into the "BST.cpp" file to complete the member functions
defined in the header file "BST.h". You may add additional functions to the BST class, but don't change the existed definitions, which are required by the testing programs. 

Your program will implement at least the following BST functions:

  * `bool insert(T element)` Insert a new element into the BST. The updated tree remains a BST.
  * `bool find(const T & query)` Search the BST for a query. Return true if the query is found, otherwise false.
  * `Node* getRoot()` Return pointer to the root node of the BST. Return nullptr if the BST is empty.
  * `Node* getLeftMostNode()` Return pointer to the left-most node in the BST. Return nullptr if the BST is empty.
  *`unsigned int size()` Return the number of elements in the BST.
  * `int height()` Return the maximum height of the BST. Root is assumed to be at height 0.
  * `void printInorder(Node* node)` Print the subtree at the given node using inorder traversal.
  * `Node* successor(Node *node)` Return the successor of the current node in the BST, or nullptr if none exists. 
  * ` void clear()` Remove all elements from the BST and deallocate all nodes. 
  * Appropriate constructors and destructors.