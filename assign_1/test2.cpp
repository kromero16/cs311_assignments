#include <iostream>
#include "linkedlist.h"

using namespace std;

int main(int argc, char* argv[]) 
{ 
  cout << "Case 2: Insert and Delete ------------" << endl;
  LinkedList L;  // another list for case 2
  int x;      // to hold the removed element 
  int c = 1;  // displayed step number

  // 1. add to front 4 times (9,8,6,5) 
  cout << "Step " << c << " addFront 9 8 6 5" << endl; c++;
  L.addFront(9); L.addFront(8); L.addFront(6); L.addFront(5);

  // 2. display all
  cout << "Step " << c << endl; c++;
  L.displayAll();

  // 3. insert the 1st  (element 4) 4 5 6 8 9
  cout << "Step " << c << " insert first 4" << endl; c++;
  L.insertIth(1, 4);

  // 4. insert the 4th  (element 7)  4 5 6 7 8 9
  cout << "Step " << c << " insert 4th 7" << endl; c++;
   **

  // 5. insert the 7th  (element 10) and displayAll 4 5 6 7 8 9 10
    cout << "Step " << c << " insert 7th 10" << endl; c++;
     **
     **

  // 6. insert the 9th  (element 12) error (out of range)
    cout << "Step " << c << " insert 9th" << endl; c++;
    //try{** } 
    //catch(**){**}  // do not exit

  // 7. insert the 0th (element 0) error (out of range)
  cout << "Step" << c << " insert 0th" << endl; c++;
  try{** } 
  catch(**){**} // do not exit

  // 8. displayAll (should be unchanged from step 5 display)
  cout << "Step " << c << endl; c++;
  L.displayAll();

  // 9. delete Ith I==1 (display  the element removed) 5 6 7 8 9 10
  cout << "Step " << c << " delete 1st" << endl; c++;
  L.deleteIth(1, x); cout << "removed " << x << endl;

  // 10. delete Ith I==6 (display the element removed) 5 6 7 8 9 
  cout << "Step " << c << " delete 6th" << endl; c++;
  **
  cout << "Removed: " << x << endl;

  // 11. delete Ith I==3 (display the element removed) and displayAll 5 6 8 9
    cout << "Step " << c << " delete 3rd" << endl; c++;
    **
    cout << "Removed: " << x << endl;
    **

  // 12. delete Ith I==5 . error (out of range)
    cout << "Step " << c << " delete 5th" << endl; c++;
    try {** }
    catch(**){** }

  // 13. delete Ith I==0 . error (out of range)
  cout << "Step " << c << " delete 0th" <<  endl; c++;
  try {**}
  catch(**){**}

  // 14. displayAll (should be unchanged from step 11 display)
  cout << "Step " << c << endl; c++;
  L.displayAll();

  // 15. delete from rear until empty (display the elements removed)
  cout << "Step " << c << " delete all" << endl; c++;
     // loop - use x for removed element
   **
  // 16. displayAll  - should be empty now
  cout << "Step " << c << endl; c++;
  L.displayAll();

  // 17. insert the 0th  (error out of range)
  cout << "Step " << c << " insert 0th" << endl;; c++;
  try {**}
  catch (**){**}

  // 18. delete front  (error underflow)
  cout << "Step " << c << " deleteFront" << endl; c++;
  try {**}
  catch (**){**}

  // 19. delete 2nd I == 2 (error out of range)
  cout << "Step " << c << " delete 2nd" << endl; c++;
  try {** }
  catch (**){**}
  // 20.  delete rear (error underflow)
  cout << "Step " << c << " deleteRear" <<  endl; c++;
  try {** }
  catch (**){**}

} // end of case 2