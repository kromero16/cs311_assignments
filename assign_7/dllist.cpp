// ====================================================
//Your name: ??? (TODO: Add your name)
//Complier:  g++
//File type: dllist.cpp implementation file
//=====================================================

#include "dllist.h"

/**
 * @brief Constructor intializes the values
 */
dllist::dllist(){
    Head = NULL;
    Rear = NULL;
}
dllist::~dllist()
{
    // TODO destory the pointers for the linked list
}
// For testing purposes prints the values in the Que
void dllist::printValues()
{
    Node* prev;
    Node* temp = Head;
    if (temp == NULL)
        cout << "\tThere are no active tables" << endl;
    else
    {
        cout << "\tCustomerQueue: [key, customerID, orderPrice]: \n\t";
        while (temp != NULL) {
            cout << "[" << temp->key << "," << temp->value << ",$" << temp->price << "]";
            prev = temp;
            temp = temp->next;
        }
        cout << endl;
    }
}

/**
 * @brief prints all the values that have a specific key. Uses the pointer to th head node of the element at the key position in the hash table
 */
void dllist::printValuesForKey(int keys, Node* keyPtr)
{
    if (keyPtr == NULL)
        cout << "\t Nothing here" << endl;
    else
    {
        while (keyPtr != NULL)
        {
            if (keyPtr->key == keys)
                cout << "\tCutomer: " << keyPtr->value << " order price: $" << keyPtr->price << endl;
            else
                break;
            keyPtr = keyPtr->next;
        }
    }
}

/**
 * @brief push the value onto the end of the doublely linked so.
 */
void dllist::push(int key, int value, int price)
{
    Node* new_node = new Node();
    new_node->key = key;
    new_node->value = value;
    new_node->price = price;
    new_node->next = Head;
    new_node->prev = NULL;
    if ((Head) != NULL)
        Head->prev = new_node;
    Head = new_node;
}


/**
 * @brief Pops the latest node from the doubly linked list
 */
int dllist::pop(int& price)
{
    int returnValue = -1;
    if (isEmpty())
    {
        //cout << "The list is already empty" << endl;
    }
    else if(Head->next == NULL) 
    {
        returnValue = Head->value;
        price += Head->price;
        delete Head;
        Head = Rear = NULL;
    }
    else
    {
        returnValue = Head->value;
        price += Head->price;
        Node* temp = Head->next;
        delete Head;
        Head = temp;
    }
    return returnValue;
}

int dllist::removeAtKey(int key, int& price)
{
    // removes the items that share the same key
}
// chains items that share the same key in your doubly linked list
void dllist::chainAtKey(Node* keyPtr, int key, int value, int price)
{
    // TODO chain items that are added to the doubly linked list
}

Node* dllist::pushToBack(int key, int value, int price)
{
    // TODO push items to the back of the doubly linked list
}

bool dllist::isEmpty()
{
    if (Head == NULL && Rear == NULL)
        return true;
    else
        return false;
}