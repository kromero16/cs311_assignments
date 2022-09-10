//CS311 dllist.h
//INSTRUCTION:
//Linkedlist class - header file template 
//You must complete the TODO parts and then complete dllist.cpp. Delete "TODO" after you are done.
//You should always comments to each function to describe its PURPOSE and PARAMETERS 
#pragma once
using namespace std;
#include <iostream>

// =======================================================
// Your name: ??? (TODO: Add your name)
// Compiler:  g++ 
// File type: headher file  dllist.h
//=======================================================

struct Node
{
    int key, value, price; // the hash key, the value before it is hashed, and the price of items in the hash table
    Node* next; // pointer to the front node
    Node* prev; // pointer to the rear node
};

class dllist
{
protected:
    Node* Head;
    Node* Rear;
public:
    dllist(); // constructor to create an empty list
    ~dllist(); // destroys all nodes and releases memory
    /**
     * @brief Prints all the values from the linked list
    */
    void printValues();
    /**
     * @brief prints the values from the linked list with the provided key and uses the pointer for the hash key.
    */
    void printValuesForKey(int key, Node* keyPtr);
    /**
     * @brief pushes values onto the back of the linked list
     * @param the key to the hash table, the value before it is hashed and the price of the itemsi in each node of the linked list
    */
    void push(int key, int value, int price);
    /**
     * @brief pops an element from the front of the doubly linked list
     * @returns the customer number
    */
    int pop(int& price);
    /**
     * @brief removes the nodes that have the provided key and uses a reference to the price of the nodes
     * @returns the customer number
    */
    int removeAtKey(int key, int& price);
    /**
     * @brief Chains the node that is added at the key using the pointer the first position in the doubly linked list. 
     */
    void chainAtKey(Node* keyPtr, int key, int value, int price);
    /**
     * @brief push an element to the back of the doubly linked list

    */
    Node* pushToBack(int key, int value, int price);
    /**
     * @brief boolean of whether the doubly linked list is empty
     * @returns whther there is items in the digitally linked list
    */
    bool isEmpty();
};

