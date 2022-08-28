//CS311 heap.h
//INSTRUCTION:
//Heap class - header file template
//You must complete the TODO parts and then complete LinkedList.cpp. Delete "TODO" after you are done.
//You should always comments to each function to describe its PURPOSE and PARAMETERS

#pragma once

#include <iostream>
using namespace std;
#define SIZE 100

// =======================================================
// Your name: ??? (TODO: Add your name)
// Compiler:  g++
// File type: headher file heap.h
// @brief This file defines a Heap class 
//=======================================================


class Heap
{
private:
    int* heaparray;
    int capacity;
    int count;
public:
    Heap();
    ~Heap();
    Heap* buildHeapfromArray(int* values, int length);
    void heapify(Heap* h);

    // key functions to implement priority queue.
    int removeMax(Heap* h);
    void printHeap(Heap* h);
    int insert(Heap* h, int value);
    void decreaseKey(Heap* h, int i, int new_val);
    void heapSort(int values[], int length);
    void printArray(int values[], int length);

    // Helper functions.
    void percolateDown(Heap* h, int index);
    void percolateUp(Heap* h, int index);
    void swap(Heap* h, int index1, int index2);
    int leftChild(Heap* h, int index);
    int rightChild(Heap* h, int index);
    int parent(Heap* h, int index);
    int getMax(Heap* h);
    int getMin(int a, int index1, int b, int index2);
};
