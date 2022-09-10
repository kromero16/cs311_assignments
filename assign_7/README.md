# CS311 Programming Assignment 2
For this assignment, you will implement a Hash table which makes use of a doublely linked list to provide an ordering Queue and to handle table collisions. 

## Hash Table
```
Assume that you have a restaurant, and customers are assigned by the table. Customers are identified by the table they are assigned to and their customer id hashes into the table they will sit in. Each customer can order a meal, and when they are finished they will pay as a table. Assume that while customers may show up at irregular times, they will all pay for their table as a group. This payment can implemented based on FIFO and by the table index.
The doubly linked list will serve as the ordering queue for orders. New orders at the same table will be placed together in the ordering Queue so that everyone's cheque is collected together. Along with holding the index to the table number, the hash table will also hold a pointer to the first person for each table and a count for the number of people at the table.
```
For example, if this was your hash table and below it is your Linked list
```
Table size = 10
Customers arrive -> 3, 5, 2, 6, 9
[0][1][2][3][4][5][6][7][8][9]
LA = (3, 5, 2, 6, 9)
```
If a customer with an id of **33** were to arrive, then to find the key we would do 33%10 = 3 and to avoid collision they would chained to the next node at the same table in the Queue

LA = (3, **33**, 5, 2, 6, 9)
When a table is finished, you will handle payment for all customers at the same table at once.

When you reach closing time you will handle the payment for all customers in order, grouped by the table at which they are sitting. 

## Doubley Linked List 
You will need to modify your linked list class to return the pointer position of the elements you add to the list and to hold the payment information for each customer meal at each node.
