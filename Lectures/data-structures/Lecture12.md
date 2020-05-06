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

### Essentials
1. [Create new Node](#Create-new-node)
2. [Insert new node at the head of the Linked List](#Add-new-element-on-the-front-of-the-list)
3. Insert new node at the end of the Linked List]
4. Count the number of elements in the Linked List
5. Remove the Nth Node from the Linked List (Use the Exercise 4 to achieve this solution)
6. How to sort a Linked List
7. Check if a LinkedLIst is Palindrome **without use extra space in memory**.
8. [Reverse Linked list](#Reverse-linked-list)
9. [Print reverse of a linked list](#Print-reverse-of-the-Linked-LIST-Without-reverse-the-list)

### Create new node
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

### Add new element on the front of the list
```
void push(Node **head, int elment_to_store)
{
    Node *new_node = new Node();
    new_node -> data = element_to_store;
    new_node->next = (*head);

    *head = new_node;
}
```
### Delete a node

1)Find previuos node of the node to be deleted
2) Change the next of the orevius node
3) Free the memory of node to be deleted.

void deteleNode(struct Node **head, int position)
{
    if(*head == NULL )
        return;
    struct Node *temp = *head;

    if(position == 0)
    {
        *head = temp->next;
        free(temp);
        return;
    }

    for(int i=0; temp !=NULL && i< position-1; i++)
        temp = temp->next;
    
    if(temp == NULL || temp->next == NULL)
        return;
    
    // Store pointer to the next of the niode to be deleted;
    Struct Node *next = temp->next->next;
    free(temp->next);
    temp->next = next;
}

### Print reverse of the Linked LIST Without reverse the list

```
/*
printReverse(head):
    printReverse(head->next)
    print(head->data)
*/

void printReverse(Node *head)
{
    if(head == NULL)
        return;
    printReverse(head->next);
    cout << head->data << " ";
}
```

### Reverse linked list
1. Create three pointers, ```prev=NULL```, ```current = head``` and ```next=NULL```
2. Iterate trough the linked list. In loop, do following.
    // Before changing next of current,
    // store next node
    next = curr->next
    // Now change next of current
    // This is where actual reversing happens
    curr->next = prev

    // Move prev and curr one step forward
    prev = curr
    curr = next

## Sort linked list

Merge sort is the preferred algorithm for sorting linked list. Quicksort for example, cause the slow random-access, would result in poorer performance than merge sort. 



[Operations on a doubly linked list](https://www.interviewbit.com/tutorial/doubly-linked-list/)
[Introduction to Linked List -  video-tutorial](https://www.interviewbit.com/tutorial/doubly-linked-list/)
[Doubly Linked List - Implementation](https://www.youtube.com/watch?v=VOQNf1VxU3Q)
##### Source: Interviewbit and mycodeschool

### Extra Exercises
1. [Interview bit - Linked List](https://www.interviewbit.com/courses/programming/topics/linked-lists/#problems)
2. [Geeks For Geeks - Linked List](https://practice.geeksforgeeks.org/explore/?category%5B%5D=Linked%20List&page=1)


