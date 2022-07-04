//CS311 Yoshii S22 LinkedList.h
//INSTRUCTION:
//Llist class - header file template 
//You must complete the ** parts and then complete LinkedList.cpp
//Don't forget PURPOSE and PARAMETERS 

// =======================================================
// Your name: **
// Compiler:  g++ 
// File type: headher file  linkedlist.h
//=======================================================

// Datatype T : element type definition
typedef int T;  // int for now but can change later

//a list node is defined here as a struct Node for now
struct Node
{
  T Elem;   // elem is the element stored
  Node *Next;  // next is the pointer to the next node
};
//---------------------------------------------------------

class LinkedList
{
  
 private:
  Node *Front;       // pointer to the front node
  Node *Rear;        // pointer to the rear node
  int  Count;        // counter for the number of nodes

  // untility function to move to a specified node position
  void moveTo(int, Node*&);
  
 public:

  // Exception handling classes 
  class Underflow{};
  class OutOfRange{};  // thrown when the specified Node is out of range

 //Copy Constructor to allow pass by value and return by value of a LinkedList
  LinkedList(const LinkedList&);
  
  //Overloading of = (returns a reference to a LinkedList)
  LinkedList& operator=(const LinkedList&); 

  LinkedList ();     // constructor to create an empty list 
  ~LinkedList();     // destructor to destroy all nodes and release memory
  
  //**
  bool isEmpty();
    
  //**
  void displayAll();

  //**
  void addFront(T);
    
  //**
  void addRear(T);

  //**
  void deleteFront(T&);
  
  //---------------------------------------
    
  //**
  void deleteRear(T&);
    
  //**
  void deleteIth(int, T&);  // calls moveTo

  //**    
  void insertIth(int, T);   // calls moveTo
};
