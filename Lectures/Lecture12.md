### Linked List

A linked lists is an alternative to the dynamic array that overcomes some of the limitations of the basics array. 
First of all, what could a limitation of the array?
* The size is fixed. 
* The need contiguous space memory (every element of the array needs to be stored concequentially). 

A linked list is so a linear data structure where:
* The first element of the list is called ```head```. 
* Each element points to the next iteam. 
* We iterate the list thourght by accessign the current iteam, pointing to the next iteam so so on... 


#### Characteristics of the Linked List

We have constant time for insertion and deletion time because we don't need any reoallocation or sorting of the linked list. It is dynamic, but it uses more memory than arrays (to keep always track of the next or previous elements, depends which Linked List we are using). 

#### Types of linked list

* **Singly linked list:** Each element stores it's own data and points to the next element. We can travers/iterate it in only one direction (from the start to the end). 
* **Doubly Linked List:** each element stores it's own data and pointer to both the next and previous elements. Of course, we can traverse/iterate it in both directiions. 
* **Circular linked list:**: A linked list is called circular if it not NULL terminated and all nodes are connected in the form of a cycle. In case of empty linked list is considered as circular.

### Node structs
```
//Single Linked List node struct
struct node
{
    int data;
    struct node *next;
}

// Doubly linked list
struct node
{
    int data;
    struct node *next, *prev;
}
```
Doubly linked list allows us to to a reverse look-up but of course, a double linked will use extra memory to keep track of all the pointers to the preview node;

[Operations on a doubly linked list](https://www.interviewbit.com/tutorial/doubly-linked-list/)
[Introduction to Linked List -  video-tutorial](https://www.interviewbit.com/tutorial/doubly-linked-list/)
[Doubly Linked List - Implementation](https://www.youtube.com/watch?v=VOQNf1VxU3Q)
##### Source: Interviewbit and mycodeschool


### Essentials
1. Create new Node
2. Insert new node at the head of the Linked List
3. Insert new node at the end of the Linked List
4. Count the number of elements in the Linked List
5. Remove the Nth Node from the Linked List (Use the Exercise 4 to achieve this solution)
6. How to sort a Linked List
7. Check if a LinkedLIst is Palindrome **without use extra space in memory**.
8. Sort Linked List

### Extra Exercises
1. [Interview bit - Linked List](https://www.interviewbit.com/courses/programming/topics/linked-lists/#problems)
2. [Geeks For Geeks - Linked List](https://practice.geeksforgeeks.org/explore/?category%5B%5D=Linked%20List&page=1)