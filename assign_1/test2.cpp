// You must complete the TODO parts and then complete LinkedList.cpp. Delete "TODO" after you are done.
//  
#include <iostream>
#include <assert.h>
#include "linkedlist.h"

using namespace std;

int main(int argc, char *argv[]) {
    cout << "Test 2: --------- Insertions and Deletions ------------" << endl;
    LinkedList L;  // another list for case 2
    int x;      // to hold the removed element

    // 1. add to front 4 times (9,8,6,5)
    cout << "Step 1: " << " add to front 4 times to make (5,6,8,9)" << endl;
    L.addFront(9);
    L.addFront(8);
    L.addFront(6);
    L.addFront(5);

    // 2. display all
    cout << "Step 2: " << "display all" << endl;
    L.displayAll();

    // 3. insert the value 4 at the 1st position 4 5 6 8 9
    cout << "Step 3: " << " insert the value 4 at the 1st position => (4 5 6 8 9)" << endl;
    L.insertAt(1, 4);
    L.displayAll();

    // 4. insert 7 at the 4th position  4 5 6 7 8 9
    cout << "Step 4: " << " insert 7 at the 4th position => (4 5 6 7 8 9)" << endl;
    L.insertAt(4, 7);
    L.displayAll();

    // 5. insert 10 at the 7th position displayAll 4 5 6 7 8 9 10
    cout << "Step 5: " << " insert 10 at the 7th position => (4 5 6 7 8 9 10)" << endl;
    L.insertAt(7, 10);
    L.displayAll();

    // 6. insert 12 at the 9th position error (out of range)
    cout << "Step 6: " << " insert 12 at the 9th position error (out of range)" << endl;
    bool succeded = L.insertAt(9, 12);
    assert(!succeded);      // shouldn't exit
    if (!succeded) {
        cout << "– error (out of range)" << endl;
    }
    L.displayAll();

    // 7. insert (element 0) at the 0th error (out of range)
    cout << "Step 7: " << "insert (element 0) at the 0th error (out of range)" << endl;
    succeded = L.insertAt(0, 0);
    assert(!succeded);
    if (!succeded) {
        cout << "– error (out of range)" << endl;
    }
    L.displayAll();

    // 8. delete Ith I==1 (display  the element removed) 5 6 7 8 9 10
    cout << "Step 8: " << " delete the 1st the element => (5 6 7 8 9 10)" << endl;
    L.deleteAt(1, x);
    cout << "removed " << x << endl;
    L.displayAll();

    // 9. delete Ith I==6 (display the element removed) 5 6 7 8 9
    cout << "Step 9: " << " delete the 6th element => (5 6 7 8 9)" << endl;
    L.deleteAt(6, x);
    cout << "Removed: " << x << endl;
    L.displayAll();

    // 10. delete Ith I==3 (display the element removed) and displayAll 5 6 8 9
    cout << "Step 10: " << " delete the 3rd element => (5 6 8 9)" << endl;
    L.deleteAt(3, x);
    cout << "Removed: " << x << endl;
    L.displayAll();

    // 11. delete Ith I==5 . error (out of range)
    cout << "Step 11: " << " delete 5th element error (out of range)" << endl;
    succeded = L.deleteAt(5, x);
    assert(!succeded);
    if (!succeded) {
        cout << "– error (out of range)" << endl;
    }
    L.displayAll();

    // 12. delete Ith I==0 . error (out of range)
    cout << "Step 12: " << " delete 0th element error (out of range)" << endl;
    succeded = L.deleteAt(0, x);
    assert(!succeded);
    if (!succeded) {
        cout << "– error (out of range)" << endl;
    }
    L.displayAll();

    // 13. delete from rear until empty (display the elements removed)
    cout << "Step 13: " << " delete from rear until empty (display the elements removed)" << endl;
    // loop - use x for removed element
    while(!L.isEmpty()) {
        L.deleteRear(x);
        cout << "Removed: " << x << endl;
        L.displayAll();
    }

} // end of case 2