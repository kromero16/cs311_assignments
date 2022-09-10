#include "heap.h"

// @brief gets the maximum value in the heap
// @return the highest value integer in the heap
int Heap::getMax() const {
    // TODO: find and return the highest value in the heap
}


// @brief default constructor. Construct an empty heap with initial capacity
Heap::Heap(int capacity) {
    // TODO: Allocate memory for the heap
}

// @brief destructor
Heap::~Heap() {
    // TODO: cleanup the heap and release memory
}

/**
 * @brief constructor to build a heap from an array of values
 * @param values array of values to be added to the heap
 * @param length the size of the array
 */
Heap::Heap(int *values, int length) {
    // TODO: Allocate space for the heap and add the values into the heap
    //       Update count for the size of the array
    //       Rearange the values into a heap after they are added
}

/**
 * @brief   organizes the values in the heap to satisfy heap property.
 */
void Heap::heapify() {

    // TODO: Organize the heap values by percolating through the heap

}

/**
 * @brief  Runs percolate down on the heap for the node stored in index.
 */
void Heap::percolateDown(int index) {

    // TODO: check the values at index in the heap and decide whether they need to be swapped.
    // Run recursively until the current node is bigger than its children
}

/**
 * @brief  Runs percolate up on the heap for the node stored in index.
 */
void Heap::percolateUp( int index) {

    // TODO: check the value of the parents of index in the heap and swap them if they are smaller
    // run recursively until the current node is small than its parent
}

/**
 * @brief  inserts a value into the heap
 *
 */
void Heap::insert(int value) {
    // TODO: resize the Heap array if neccessary and insert the value into the heap.
    // TODO: percolate the Heap to rearange after the value is inserted
}

/**
 * @brief  Removes the max value from the heap
 * @return the value that was removed
 */
int Heap::removeMax() {
    // TODO: remove the max value from the heap and then percolate the heap to rearrange values
}

/**
 * @brief  Prints the values in the heap
 */
void Heap::printHeap() {
    int i;
    cout << "[ ";
    for (i = 0; i < count; i++)
        cout << heaparray[i] << " ";
    cout << "]\n";
}

/**
 * @brief  Prints the values in an array
 */
void printArray(int values[], int length) {
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
void Heap::swap(int index1, int index2) {
    // TODO: Swap the values
}

/**
 * @brief  Sorts the values of an array by using the heap
 */
void heapSort(int values[], int length) {
    cout << "Array Before Sorting: \n";
    printArray(values, length);

    // TODO Create a heap from the array and then remove them from the heap into the array in order 

    cout << "Array After Sorting: \n";
    printArray(values, length);

    return;
}

/**
     * @brief Change the key of the element at position i to the new value.
     *        It maintains the heap property.
     * @param i the position of the element to be decreased
     * @param value the new value
     */
void Heap::changeKey(int i, int new_val) {
    // TODO: change the value at index i in the heap and then percolate the heap to maintain the heap property.
}
