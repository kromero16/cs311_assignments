// You must complete the TODO parts and then complete LinkedList.cpp. Delete "TODO" after you are done.
//

#include <iostream>
#include "linkedlist.h"
#include <stdlib.h>

using namespace std;

//PURPOSE: to test copy constructor which gets called automatically.
// Adds 6 to the rear of the copiedList and displays the list.
//PARAMETER: list passed by value becomes copiedList via your copy constructor
void CopyTest(LinkedList copiedList) {
    cout << "in copy test" << endl;
    // TODO: // add 6
    // TODO: // display all
    cout << "finished" << endl;
}

//PURPOSE of the Program: to test LinkedList thoroughly
int main() {
    cout << "Case 3: Copy Constructor and = -------" << endl;
    LinkedList L1, L2; // two lists needed
    int x;        // local for removed element
    int counter = 1;  // step number

    //1. Create a 5 element list with  [1,2,3,4,5] (L1)
    cout << "Step" << counter << endl;
    counter++;
    // TODO:
    cout << "L1: ";
    L1.displayAll();   // 1 2 3 4 5

    //2. Simply pass L1  to a client function called CopyTest to
    //test your copy constructor.
    cout << "Step" << counter << endl;
    counter++;
    CopyTest(L1);

    cout << "-- After copytest --- " << endl;

    //3. Display L1 (this should still be a 5 element list)
    cout << counter << endl;
    counter++;
    cout << "L1: ";
    L1.displayAll();

    cout << "-- Testing operator overloading ---" << endl;

    //4. Do L1 = L1;
    cout << "Step " << counter << " Gets" << endl;
    counter++;
    // TODO:

    //5. Display L1    (this should still be 1 2 3 4 5)
    cout << "Step " << counter << endl;
    counter++;
    cout << "L1: ";
    L1.displayAll();

    //6. Create a 4 element list L2 with 7,8,9,10.
    cout << "Step " << counter << endl;
    counter++;
    // TODO:

    //7. Display L2
    cout << "Step " << counter << endl;
    counter++;
    cout << "L2: ";
    L2.displayAll();

    //8. Do L2 = L1;  (L2 becomes 5 elements 1,2,3,4,5)
    cout << "Step " << counter << " Gets" << endl;
    counter++;
    // TODO:

    //9. Display L2.
    cout << "Step " << counter << endl;
    counter++;
    cout << "L2: ";
    L2.displayAll();

    //10. Remove a rear node from L1. (This should not affect L2).
    cout << "Step " << counter << endl;
    counter++;
    // TODO:

    //11. Display L1.   (L1 is 1,2,3,4)
    cout << "Step " << counter << endl;
    counter++;
    cout << "L1 :";
    L1.displayAll();

    //12. Display L1 again. (4 elements just to make sure)
    cout << "Step " << counter << endl;
    counter++;
    cout << "L1: ";
    L1.displayAll();

    //13. Display L2 again. (still 5 elements 1,2,3,4,5)
    cout << "Step " << counter << endl;
    counter++;
    cout << "L2: ";
    L2.displayAll();
}


