// ====================================================
//Your name: ??? (TODO: Add your name)
//Complier:  g++
//File type: htable.cpp implementation file
//=====================================================

#include "htable.h"

/**
 * @brief Constructor to fill the map and initialize values
 */
htable::htable()
{
	for (int i = 0; i < TSIZE; i++)
	{
		hash_table[i].key = i;
		hash_table[i].head = NULL;
		hash_table[i].count = 0;
	}
	list = new dllist();
	menuPrices.insert(pair <int, int>(1, 10));
	menuPrices.insert(pair <int, int>(2, 12));
	menuPrices.insert(pair <int, int>(3, 8));
	menuPrices.insert(pair <int, int>(4, 6));
	menuPrices.insert(pair <int, int>(5, 13));
	menuPrices.insert(pair <int, int>(6, 5));
	menuPrices.insert(pair <int, int>(7, 20));
	menuPrices.insert(pair <int, int>(8, 15));
}

/**
 * @brief Destructor 
 */
htable::~htable()
{
}
/**
 * @brief  Get the hash key of the customer
 * @return int The hashed value of the customers ID
 */
int htable::hash(int cID)
{
	return cID % TSIZE;
}

/**
 * @brief Places a customers order of an item from the menu, and adds it into the linked list
 */
void htable::hOrder(int cID, int orderNum)
{
	// Adds a new item to the hash table with the character ID cid and orderNumber
}

/**
 * @brief Checks the status of a table, and displays how many customers are at a table and their order prices.
 */
void htable::hCheckTable(int key)
{
	if (key >= TSIZE)
	{
		cout << "\tTable#" << key << " is not a valid table" << endl;
		return;
	}

	if (hash_table[key].count < 1)
		cout << "\tTable#" << key << " has no customers at the moment" << endl;
	else
	{
		cout << "\tTable#" << key << " has " << hash_table[key].count << " customers right now" << endl;
		list->printValuesForKey(key, hash_table[key].head);
	}

}

/**
 * @brief Processes the payment for one table based on its key in the hash table
 * @returns the amount of money the checkout was for
 */
int htable::hCheckout(int key)
{
	int price = 0;

	return price;
}

/**
 * @brief Processes the next table in the queue
 * @returns the amount of money the checkout was for
 */
int htable::hCheckoutNext()
{
	int tableTotal = 0;
	// TODO check out the next element in the list
	// TODO update the elements in the hash table		
	return tableTotal;
}
/**
 * @brief Closes all remaining tables and processes their payments
 * @returns the Total amount of money after all the remaining checkouts have occured
 */
int htable::hCloseTables()
{
	int totalPrice = 0;

	return totalPrice;
}

/**
 * @brief For testing purposes displays the doublely linked list in order
 */
void htable::displayHashTable()
{
	list->printValues();
}

/**
 * @brief Prints a menu display of the pricing of each item that the customer can purchase
 */
void htable::printMenu()
{
	cout << "\t1. Hamburger" << "\t10$" << "\t2. Cheeseburger" << "\t12$" << endl;
	cout << "\t3. Barbecue" << "\t8$" << "\t4. Soup" << "\t\t6$" << endl;
	cout << "\t5. Pasta" << "\t13$" << "\t6. Salad" << "\t5$" << endl;
	cout << "\t7. CheeseCake" << "\t20$" << "\t8. Pizza" << "\t15$" << endl;
}
