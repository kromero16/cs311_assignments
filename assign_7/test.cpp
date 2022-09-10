// You must complete the TODO parts and then complete LinkedList.cpp. Delete "TODO" after you are done.
//

#include <iostream>
#include "htable.h"
#include <stdlib.h>

using namespace std;

//PURPOSE of the Program: to test hashing to a doubly linked list with FIFO ordering.
int main() {
    cout << "\tTesting the Customer ordering Hash Table " << endl;
    htable table;
	int sum = 0;
	// Testing ordering items
	table.hOrder(6, 1);
	table.hOrder(16, 2);
	table.hOrder(17, 3);
	table.hOrder(18, 4);
	table.displayHashTable();
	// Testing collision
	table.hOrder(118, 5);
	table.hOrder(111, 4);
	table.hOrder(130, 6);
	table.hOrder(121, 7);
	table.hOrder(131, 6);
	table.hOrder(324, 8);
	table.displayHashTable();
	// Checking a table that is empty
	table.hCheckTable(1);
	// checking out table 6, which has customers
	table.hCheckTable(6);
	// checking out a customer in the middle of the Queue
	sum += table.hCheckout(18);
	// trying to checkout again against the same table which should print that it is empty
	sum += table.hCheckout(18);
	// Closing all tables and printing the sum 
	sum += table.hCloseTables();
	cout << "\tThank you for using our system\n\tYour Total for this session:$" << sum << endl;
}


