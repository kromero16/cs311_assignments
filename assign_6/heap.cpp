#include "heap.h"
#include<iostream>

using namespace std;
// @brief gets the parent of index
// @return integer index of the parent of the passed index
int Heap::parent(Heap* h, int index)
{
    if (index <= 0 || index >= h->count)
        return -1;
    return (index - 1) / 2;
}

// @brief gets the maximum value in the heap
// @return the highest value integer in the heap
int Heap::getMax(Heap* h)
{
    // TODO find and return the highest value in the heap
}

// @brief evaluates the two integers
// @return the index of the smaller integer
int Heap::getMin(int a, int index1, int b, int index2)
{
    // Return the value associated with a.    
    if (a < b)
        return index1;

    // Return the value associated with b.
    else
        return index2;
}

// @brief gets the left child of the parent located at index
// @return the index of the left child if it exists
int Heap::leftChild(Heap* h, int index)
{
    int left = 2 * index + 1;
    if (left >= h->count)
        return -1;
    return left;
}

// @brief gets the right child of the parent located at index
// @return the index of the right child if it exists
int Heap::rightChild(Heap* h, int index)
{
    int right = 2 * index + 2;
    if (right >= h->count)
        return -1;
    return right;
}

// @brief default constructor
Heap::Heap()
{
    // TODO Initialize the values in the heap
}

// @brief destructor
Heap::~Heap()
{
    // TODO cleanup the heap
}


// @brief Initializes the heap using the first length number of items in the array
// values.
// @return the pointer h of the heap built from the array
Heap* Heap::buildHeapfromArray(int* values, int length) {
    Heap* h;

    // TODO Allocate space for the heap and add the values into the heap
    // TODO Update count for the size of the array
    // TODO Rearange the values into a heap after they are added

    return h;
}

/**
 * @brief   organizes the values in the heap pointed to by h.
 */
void Heap::heapify(Heap* h) {
   
    // TODO Organize the heap values by percolating through the heap

}

/**
 * @brief  Runs percolate down on the heap pointed to by h on the node stored in index.
 */
void Heap::percolateDown(Heap* h, int index) {

    // TODO check the values at index in the heap and decide whether they need to be swapped.
    // Run recursively until the current node is bigger than its children
}

/**
 * @brief  Runs percolate up on the heap pointed to by h on the node stored in index.
 */
void Heap::percolateUp(Heap* h, int index) {

    // TODO check the value of the parents of index in the heap and swap them if they are smaller
    // run recursively until the current node is small than its parent
}

/**
 * @brief  inserts a value into the heap pointed to by h
 * @return 0 if the allocation failed
 */
int Heap::insert(Heap* h, int value)
{
    // TODO resize the Heap array if neccessary and insert the value into the heap.
    // TODO percolate the Heap to rearange after the value is inserted
}

/**
 * @brief  Removes the max value from the heap
 * @return the value that was removed
 */
int Heap::removeMax(Heap* h) {
    // TODO remove the max value from the heap and then percolate the heap to rearrange values
}

/**
 * @brief  Prints the values in the heap
 */
void Heap::printHeap(Heap* h)
{
    int i;
    cout << "[ ";
    for (i = 0; i < h->count; i++)
        cout << h->heaparray[i] << " ";
    cout << "]\n";
}

/**
 * @brief  Prints the values in an array
 */
void Heap::printArray(int values[], int length)
{
    int i;
    cout << "[ ";
    for (i = 0; i < length; i++) {
        cout << values[i] << " ";
    }
    cout << "]\n";
}

/**
 * @brief  Swaps the values in the heap at index1 and index2
 */
void Heap::swap(Heap* h, int index1, int index2) {
    // TODO Swap the values in the Heap
}

/**
 * @brief  Sorts the values of an array by using the heap
 */
void Heap::heapSort(int values[], int length)
{
    cout << "Array Before Sorting: \n";
    printArray(values, length);

    // TODO Create a heap from the array and then remove them from the heap into the array in order 

    cout << "Array After: \n";
    printArray(values, length);

    return;
}

/**
 * @brief  Decrease the value of a key at position i
 */
void Heap::decreaseKey(Heap* h, int i, int new_val)
{
    // TODO change the value at index i in the heap and then percolate the heap to rearange it.
}
