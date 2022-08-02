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

## A better sorting algorithm
When the array or list gets large, quicksort is clearly the fastest comparison sorting algorithm (hence the name). However, when the arrays/lists are small enough, quicksort may run slower that some of the Θ(n^2) algorithms.  This might not seem important until you note that when sorting a large list with quicksort, many many small sublists must be sorted.  While the savings on sorting one small list with a faster algorithm is negligible, sorting hundreds of small lists with a faster algorithm can make a difference in the overall efficiency of the sort.  For part 3 of the assignment, you will combine quicksort with another sorting algorithm to build a faster sorting algorithm. One option is  
<ul>
<li>Use quicksort until the list gets small enough, and then use insertion sort or  another sort to sort the small lists </li>
</ul>
What does "small enough" mean?  You can try a percentage of the list (say, 5% or 10%), or an absolute number (8 elements, 10 elements, 15 elements, 100 elements, etc), or something else of your choosing. You should also tests to ensure that your hybrid quicksort has the most efficient algorithm possible and reasonable performance on all lists -- most notably, it should be efficient on sorted and inverse sorted lists as well as random lists.  