//CS311 htable.h
//INSTRUCTION:
//hashtable class - header file template 
//You must complete the TODO parts and then complete htable.cpp. Delete "TODO" after you are done.
//You should always comments to each function to describe its PURPOSE and PARAMETERS 
#pragma once
#include "dllist.h"
#include <map>


// =======================================================
// Your name: ??? (TODO: Add your name)
// Compiler:  g++ 
// File type: header file  htable.h
//=======================================================

const int TSIZE = 23;

//a structure used to create an array of hash elements.
struct Ht_Elem {
	int key, count; // the key to the table and the count of customers at a given table
	Node* head; // pointer to the first node of a table
};

class htable
{
private:
	dllist* list;  // Pointer to the doubly linked list
	map<int, int> menuPrices;  // Maps the menu items to their price(int for convenience)
	Ht_Elem hash_table[TSIZE]; // Array of hash elements of size TSIZE
	int hash(int value); // Function that hashes your customer IDs to determine their table
public:
	htable(); // constructor to create an empty hash table
	~htable(); // destructor for your hash table

	void hOrder(int value, int orderNum); // inserts the value at the key position in the hash
	void hCheckTable(int key); // Check the table at the key index
	int hCheckout(int key); // checks out the table at the key
	int hCheckoutNext();  // checks out the table in order of arrival
	void displayHashTable(); // displays the tables
	int hCloseTables(); // closes all tables and displays the earnings
	/**
	* @brief prints a menu to test functions
	*/
	void printMenu(); 
};
