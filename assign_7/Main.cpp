#include "htable.h"

int main()
{
	htable table;
	
	table.hOrder(6, 1);
	table.hOrder(16, 2);
	table.hOrder(17, 3);
	table.hOrder(18, 4);
	table.hOrder(118, 5);
	table.hOrder(130, 6);
	table.hOrder(121, 7);
	table.hOrder(324, 8);
	//table.displayHashTable();
	
	cout << "\n\t Restaurant simaulator " << endl;
	bool end = false; //variable to end program
	int choice; //menu choice
	int finalSum = 0;

	int tableNum, selection, cID;
	while (end == false)
	{
		do {
			cout << endl;
			cout << "\t--------------M E N U-----------------" << endl;
			cout << endl;

			cout << "\t1. [ Order for a table ]" << endl;
			cout << "\t2. [ View if table is active ] " << endl;
			cout << "\t3. [ Checkout a Table by number ] " << endl;
			cout << "\t4. [ Display active Tables ] " << endl;
			cout << "\t5. [ Checkout all Tables in order ] " << endl;
			cout << "\t6. [ Exit Application ] " << endl;
			cout << endl;
			cout << "\t--------------------------------------" << endl;

			cout << "\n\tEnter choice: ";
			cin >> choice;
		} while (choice < 1 || choice > 6);

		switch (choice) {
		case 1:
			cout << "\tWhat is the customers ID?" << endl;
			cin >> cID;
			cout << "\tHere is the menu, please make a selection:\n" << endl;
			table.printMenu();
			cin >> selection;
			table.hOrder(cID, selection);
			cout << "\tThe customer's order has been placed." << endl;
			break;
		case 2: 
			cout << "\tProvide a table# to check" << endl;
			cin >> tableNum;
			table.hCheckTable(tableNum);
			break;
		case 3:
			cout << "\tProvide a table# to checkout" << endl;
			cin >> tableNum;
			cout << "\tAttemping to checkout table#" << tableNum << endl;
			finalSum += table.hCheckout(tableNum);
			break;
		case 4:
			cout << "\tDisplaying active tables" << endl;
			table.displayHashTable();
			break;
		case 5: 
			cout << "\tChecked out all tables in order:" << endl;
			finalSum += table.hCloseTables();
			break;
		case 6:
			cout << "\tThank you for using our system\n\tYour Total for this session:$" << finalSum << endl;
			end = true;
			break;
		}
	}
}