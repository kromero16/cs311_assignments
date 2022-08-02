# CS311 Programming Assignment 3

In this assignment, you will implement sorting algorithms for data stored either in an array or a linked list.

## Sorting an array
Implement the insertion sort and quicksort for an integer array. The functions are defined in the "sorting.h" header file.
```
/**
 * @brief Insertion sort algorithm
 * @param array Array to be sorted. The array is modified in place.
 * @param lowindex Lowest index of the array
 * @param highindex Highest index of the array
 * @param reversed If reversed = true, the array should be sorted in descending order, otherwise in ascending order
 */
void insertionSort(int array[], int lowindex, int highindex, bool reversed = false);
```
and
```
**
 * @brief Quick sort algorithm
 * 
 * @param array Array to be sorted. The array is modified in place.
 * @param lowindex Lowest index of the array
 * @param highindex Highest index of the array
 * @param reversed If reversed = true, the array should be sorted in descending order, otherwise in ascending order
 */
void quickSort(int array[], int lowindex, int highindex, bool reversed = false);
```
You should complete the implementations of those two functions in the "sorting_basic.cpp" file. The array should be modified in place.

## Sorting a linked list
Implemenmt the insertion sort and merge sort for a linked list of integer values. The LinkedList data structure is the same as what is defined in the previous assignment. You should copy the "linkedlist.cpp" file from your previous assignment. The definitions of the functions are as the following. 

```
/**
 * @brief Insertion sort algorithm for linked lists
 * 
 * @param list Input linked list
 * @param reversed if reversed = true, the list should be sorted in descending order, otherwise in ascending order
 * @return LinkedList Sorted linked list
 */
LinkedList insertionSortLL(LinkedList& list, bool reversed = false);

```
