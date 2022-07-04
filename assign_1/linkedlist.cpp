//CS311 Yoshii S22 Linked List class

//INSTRUCTION:
//Must use the provided HW3P1_help.doc to create LinkedList.cpp
//It helps to first create if-then-else structure to fill in later.
//- Make sure PURPOSE and PARAMETER comments are given in detail
//  You can copy from a Word document to emacs (contrl-right click)
//  Highly recommended to copy HW3P1-help as PURPOSE of each function.
//
//- Make sure all if-then-else are commented describing which case it is
//- Make sure all local variables are described fully with their purposes
//  NEVER delete my comments!!!!
//EMACS HINT:
//  cntr-K cuts and cntr-Y pastes. 
//  Esc x replace-str does string replacements
//  Esc > goes to the end of the file; Esc < to the beginning
//  Tab on each line will indent perfectly for C++

// ====================================================
//HW#: HW3P1 LinkedList
//Your name: **
//Complier:  g++
//File type: LinkedList.cpp implementation file
//=====================================================


#include"linkedlist.h" 

using namespace std;
#include<iostream>

LinkedList::LinkedList()
{ cout << "... in LinkedList constructor..." << endl; }

LinkedList::~LinkedList()
{ cout << ".... in LinkedList destructor..." << endl; }

//PURPOSE:
//PARAMETER:
bool LinkedList::isEmpty() { } // be sure to check all 3 data members

//PURPOSE:
//PARAMETER:
void LinkedList::displayAll() { }  // be sure to display horizontally in [  ] with
// blanks between elements e.g. [ 1 2 3 4]
// You MUST use while (P != NULL) loop or you will not get the credit!
  
//PURPOSE:
//PARAMETER:
void LinkedList::addRear(T NewNum) { } // comment the 2 cases

//PURPOSE:
//PARAMETER:
void LinkedList::addFront(T NewNum) { } // comment the 2 cases

//PURPOSE:
//PARAMETER:
void LinkedList::deleteFront(T& OldNum) { } // comment the 3 cases

//PURPOSE:
//PARAMETER:
void LinkedList::deleteRear(T& OldNum){} // comment the 3 cases



/* --- harder ones for case 2 and 3 follow -- */

// Utility Function to move a local pointer to the Jth node
void LinkedList::moveTo(int J, Node*& temp)
{ // moves temp J-1 times to go to the Jth node  
  // for ( int K = ... ) temp = temp->Next;
}

//PURPOSE:
//PARAMETER:
void LinkedList::deleteIth(int I, T& OldNum) { } // must use moveTo to move local pointers. Be sure to comment to which node you are moving them. Do not forget to set OldNum.  

//PURPOSE:
//PARAMETER:
void LinkedList::insertIth(int I, T newNum) { } // must use moveTo to move local pointers. Be sure to comment to which node you are moving them.

//PURPOSE:
//PARAMETER:
LinkedList::LinkedList(const LinkedList& Original) { } // use my code

//PURPOSE:
//PARAMETER:
LinkedList& LinkedList::operator=(const LinkedList& OtherOne) { } // use my code

