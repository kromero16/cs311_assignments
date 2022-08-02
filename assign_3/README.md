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
and
```
/**
 * @brief Merge sort algorithm for linked lists
 * 
 * @param list Input linked list
 * @param reversed if reversed = true, the list should be sorted in descending order, otherwise in ascending order
 * @return LinkedList Sorted linked list
 */
LinkedList mergeSortLL(LinkedList& list, bool reversed = false);
```
You should complete the implementations of those two functions in the "sorting_ll.cpp" file. The input linked list isn't modified in place. Instead, another linked list with numbers in sorted order is returned. 

## A better quicksort algorithm
Quicksort is a very fast comparison sorting algorithm, especially wheb the array or list gets large. However, when the arrays/lists are small enough, quicksort may run slower than some of the Θ(n^2) algorithms.  This might not seem important until you note that when sorting a large array with quicksort, many small sublists must be sorted.  While the savings on sorting one small list with a faster algorithm might be negligible, sorting hundreds of small lists with a faster algorithm can make a difference in the overall efficiency of the sort.  For this part of the assignment, you will combine quicksort with another sorting algorithm to build a faster sorting algorithm. One option is to 
<ul>
<li>use quicksort until the array/list gets small enough, and then use insertion sort or another sort to sort the small arrays/lists </li>
</ul>
What does "small enough" mean?  You can try a percentage of the list (say, 5% or 10%), or an absolute number (5 elements, 8 elements, 10 elements, 15 elements, 100 elements, etc), or something else of your choosing. Based on your tests, choose the one that is the most efficient. You should also tests to ensure that your hybrid quicksort has reasonable performance on all lists -- most notably, it should be efficient on sorted and inverse sorted lists as well as random lists.  

The definition of the hybrid quicksort function is as the following:
```
/**
 * @brief A hybrid of insertion sort and quick sort algorithm. The algorithm is based on the idea that if the array is short, it is better to use insertion sort.
 * It uses quicksort until the list gets small enough, and then uses insertion sort or another sort to sort the small lists
 * 
 * @param array The array to be sorted. The array is modified in place.
 * @param lowindex The lowest index of the array
 * @param highindex The highest index of the array
 * @param reversed if reversed = true, the array should be sorted in descending order, otherwise in ascending order
 */
void hybridQuickSort(int array[], int lowindex, int highindex, bool reversed = false);
```
The implementation of the function should be included in the "sorting_hybrid.cpp" file and the array is sorted in place.