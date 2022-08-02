/**
 * Implementation of BST class.
 */
//You must complete the TODO parts and then complete LinkedList.cpp. Delete "TODO" after you are done.
//You should always comments to each function to describe its PURPOSE and PARAMETERS

// =======================================================
// Your name: ??? (TODO: Add your name)
// Compiler:  g++
// File type: cpp file BST.cpp
// @brief This class implements a BST search tree
//=======================================================

#include "BST.h"
#include <vector>

/**
 * Implement the BST constructor
 */
BST::BST() {
    /* TODO: YOUR CODE HERE */
}

/**
 * Implement the BST destructor
 */
BST::~BST() {
    /* TODO: YOUR CODE HERE */
    // Must release memory correctly to avoid memory leaks
}

/**
 * Implement size() correctly
 */
unsigned int BST::size() const {
    /* TODO: YOUR CODE HERE */
}

/**
 * Implement clear() correctly without memory leaks
 */
void BST::clear() {
    /* TODO: YOUR CODE HERE */
}

/**
 * Implement insert() correctly
 */
bool BST::insert(T element) {
    /* TODO: YOUR CODE HERE */
}

/**
 * Implement find() correctly
 */
bool BST::find(const T &query) const {
    /* TODO: YOUR CODE HERE */
}

/**
 * Implement the height() function correctly
 */
int BST::height() const {
    // TODO: Add your code here
}

/**
 * Implement the getRoot() function correctly
 */
BST::Node* BST::getRoot() {
    // TODO: Add your code here
}

/**
 * @brief Print the subtree at node using inorder traversal
 * @param node a pointer to node in BST
 */
void BST::printInorder(Node* node) {
    // TODO: Add your code here
}

/**
* @brief Print the subtree at node using preorder traversal
* @param node a pointer to node in BST
*/
void BST::printPreorder(Node* node) {
    // TODO: Add your code here
}

/**
* @brief Print the subtree at node using postorder traversal
* @param node a pointer to node in BST
*/
void BST::printPostorder(Node* node) {
    // TODO: Add your code here
}

/**
 * Implement the getLeftMostNode() function correctly
 */
BST::Node *BST::getLeftMostNode() {
    /* TODO: YOUR CODE HERE */
}

/**
 * Implement the BST successor function correctly
 */
BST::Node *BST::successor(Node *node) {
    /* TODO: YOUR CODE HERE */
}

