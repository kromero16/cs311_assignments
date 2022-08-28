/**
 * This file tests the implementation of Heap data structure
 *
 */
#include "heap.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int ans, i, val;
    Heap* heapPtr = new Heap;


    cout << "Testing results:\n displaying blank heap" << endl;
    heapPtr->printHeap(heapPtr);
    // test insert
    heapPtr->insert(heapPtr, 3);
    heapPtr->insert(heapPtr, 2);
    heapPtr->insert(heapPtr, 1);
    heapPtr->insert(heapPtr, 15);
    heapPtr->insert(heapPtr, 5);
    heapPtr->insert(heapPtr, 4);
    heapPtr->insert(heapPtr, 45);

    cout << "the values in the heap after adding (3, 2, 1, 15, 5, 4, 45) is : " << endl;
    heapPtr->printHeap(heapPtr);
    // testing remove
    cout << "Testing the remove max" << endl;
    heapPtr->removeMax(heapPtr);
    heapPtr->printHeap(heapPtr);
    cout << "Testing decrease key replacing position 2 with a value of 10" << endl;
    heapPtr->decreaseKey(heapPtr, 2, 10);
    heapPtr->printHeap(heapPtr);
    cout << "Now swapping positions 1 and 2" << endl;
    heapPtr->swap(heapPtr, 1, 2);
    heapPtr->printHeap(heapPtr);

    // testing heapsort

    int arr1[] = { 1, 6, 8, 2, 7, 11, 4, 9, 13, 5, 12 };
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    heapPtr->heapSort(arr1, n1);
    int arr2[] = { 1, 3, 5, 10, 9, 8, 15, 17 };
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    heapPtr->heapSort(arr2, n2);
    int arr3[] = { 10, 21, 11, 2, 5, 6, 1, 7, 20, 19, 16 };
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    heapPtr->heapSort(arr3, n3);
    int arr4[] = { 2, 3, 13, 22, 8, 5, 4, 7, 20, 1 };
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    heapPtr->heapSort(arr4, n4);
    delete heapPtr;
}
