/**
 * This driver file tests the implementation of insertion and merge sort for linked lists
 */

#include "sorting.h"
#include "print_array.h"


int main() {
    LinkedList list;
    list.addRear(1);
    list.addRear(2);
    list.addRear(3);
    list.addRear(4);
    list.addRear(5);
    list.addRear(0);
    list.addRear(-1);
    list.addRear(-2);
    list.addRear(-3);
    list.addRear(-4);
    list.displayAll();
    cout << "Insertion sort: " << endl;
    LinkedList sortedList1 = insertionSortLL(list, false);
    sortedList1.displayAll();

    cout << "Merge sort: " << endl;
    list.displayAll();
    LinkedList sortedList2 = mergeSortLL(list, false);
    sortedList2.displayAll();

    return 0;
}