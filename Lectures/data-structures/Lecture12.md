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

```
void deleteNode(struct Node **head_ref, int key) 
{ 
    // Store head node 
    struct Node* temp = *head_ref, *prev; 
  
    // If head node itself holds the key to be deleted 
    if (temp != NULL && temp->data == key) 
    { 
        *head_ref = temp->next;   // Changed head 
        free(temp);               // free old head 
        return; 
    } 
  
    // Search for the key to be deleted, keep track of the 
    // previous node as we need to change 'prev->next' 
    while (temp != NULL && temp->data != key) 
    { 
        prev = temp; 
        temp = temp->next; 
    } 
  
    // If key was not present in linked list 
    if (temp == NULL) return; 
  
    // Unlink the node from linked list 
    prev->next = temp->next; 
  
    free(temp);  // Free memory 
} 
## Source: Geeks for geeks
```
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

## Reverse Linked list (Iterative with O(N) space)

The easyest but inefficient way to do it is to:
1. iterate the linked list, storing all the data in a vector(in C++), or an arrayList(Java);
2. Iterate again the linked list, storing the data provided by the vector, in reverse order. 

```
// Time complexity: O(N);
// Space complexity: O(N);
Node* reverse(Node* head)
{
    if(head == NULL || head ->next == NULL)
        return head; 
    
    vector<int>s;
    Node* current = head;
    while(current != NULL)
    {
        s.push_back(current->data);
        current = current->next;
    }

    for(current = head; current != NULL; current = current->next)
    {
        current->data = s.back();
        s.pop_back();
    }
}
```
## Reverse Linked List (Iterative with O(1) space)

```
/* Function to reverse the linked list */
void reverse(Node *head) 
{ 
    if(head == NULL || head ->next == NULL)
        return head; 
    // Initialize current, previous and 
    // next pointers 
    Node* current = head; 
    Node *prev = NULL, *next = NULL; 

    while (current != NULL) { 
        // Store next 
        next = current->next; 
        // Reverse current node's pointer 
        current->next = prev; 
        // Move pointers one position ahead. 
        prev = current; 
        current = next; 
    } 
    return prev; 
} 
```



## Sort singly  linked list

Merge sort is the preferred algorithm for sorting linked list. Quicksort for example, cause the slow random-access, would result in poorer performance than merge sort. 

## Detect a loop

To remove any loop/cycle in a linked list or in a graph we need first to detect them.
For loop detection we can use the Floyd Cycle detectin algorithm.

There are different ways to find a loop but the concept is the same: we have
to se the pointe to the loop_node ->next = NULL;

We can:
* Hash the adress of the Linked list nodes and ceck if te element already exists in the hashmap. If it does, we have reached a node which already exists by a cycle and we need to se the last node's next pointer to NULL. 
* Use a support pointer for detect nodes.

```
bool detectloop(Node *head) {
     if(head == NULL && head->next == NULL)
        return false; 
     Node *slow = head;
     Node *fast = head;
     while(slow && fast && fast->next)
     {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
            return true;
     }
     return false;
}
```
## Detect and remove loop if exists
```
bool detect_and_remove_loop_if_exists(Node * head)
{
    Node *slow = head;
    Node *fast = head;
    // Search for loop using slow and 
    // fast pointers 
    while (fast && fast->next) { 
        if (slow == fast) 
            break; 
        slow = slow->next; 
        fast = fast->next->next; 
    } 
  
    /* If loop exists */
    if (slow == fast) 
    { 
         slow = head;
         // Find loop point
         while(slow->next != fast->next)
         {
             slow = slow->next;
             fast = fast ->next;
         }
         // Because fast->next is the loop pint, we set it to NULL
         fast->next = NULL;
         // there was a loops and it has been remove
         return true; 
    }
    else
        // There were not loops
        return false; 
}
```
## Check if a Linked List is palindrome or not  O(N) time and O(1) Space
1. Get Middle element of the Linked List
2. Reverse the second half of the linked list
3. Check if the first half and the second are identical
4.  Construct the original linked list by reversing the second half again
and attaching it back to thefirst half. 
```
bool isPalindrom(Node *head)
{
    Node *slow = head, *fast = head; 
    Node * second_half, *prev_of_slow; 
    Node *middle_node = NULL;

    if(head!= NULL && head->next != NULL)
    {
        //reac middle node of the linked list
        while(fast != NULL && fat->next != NULL)
        {
            fast = fast->next->next;

            prev_of_slow = slow;
            slow = slow->next; 
        }

        
    }
}
```

## Pairwise swap nodes of a Linked list

Suppose that the linked list is:
1->2->3->4, the result will be: 2->1->4->3;

If the total number of nodes is odd, we simply leave the last node at it is presented in the original position; 

A first approach shown belowe will have a O(N) time complexity and
will consist in simply swap the data between two consecutive nodes.
The problem with this solution is that, swap many times complex data like objects, long strings and other data-types could be an high cost operation. 

```
Node* pairswap(Node *head)
{
    Node *current = head;
    while(current != NULL && current->next != NULL)
    {
        swap(current->data, current->next->data);
        current = current->next->next;
    }

    return head; 
}
```

A second approach could be simply swap the pointers bewteen the pairs of nodes of a linked list, without phisically swap the data stored in these two nodes; 


```
Node *pairswap(Node *head)
{
    if(head == NULL || head->next == NULL)
        return head;
    
    Node *current = head->next->next;
    Node *prev = head;
    head = head->next;
    head->next = prev;

    while(current != NULL && current->next != NULL)
    {
        prev->next = current->next;
        prev = current;
        current = current->next->next;
    }

    
    prev->next  = current;
    return head;
}

```

## Clone Linked list using a random pointer

This is a typical problem where, every node has two pointers, one the points to the next node and another node that points to a random node of the linked list. 

## Merge two sorted linked list

Suppose we have to linked list:
```
ll1 : 5->20
ll2: 10->20->25->30
Result linked list: 5->10->20->20->25->30;
```

What we do is:
1. Maintain a  pointer to the two head of the linked list
2. Maintain a pointer to the tail of the result linked list.
3. Set at a first step the head and tail of the linked list to point to the node with the smallest value betweent the two head; 

```
// O(m+n)time and O(1) space
Node *sortedMerge(Node *a, Node *b)
{
    if(a == NULL)
        return b;
    if(b == NULL)
        return a;
    
    Node *head = NULL, *tail = NULL;

    if(a->data <= b->data)
    {
        head = tail = a;
        a = a->next;
    }
    else
    {
        head = tail = b;
        b = b->next;
    }

    while(a!= NULL && b != NULL)
    {
        if(a->data <= b->data)
        {
            tail->next =  a;
            tail = a;
            a = a->next;
        }
        else
        {
            tail->next = b;
            tail = b;
            b = b->next;
        }
    }

    if(a == NULL)
        tail->next = b;
    else
        tail->next = a;

    return head;
}
```

## Find intersection Point of Two Linked List
* **Naive Solution [Time O(m+n)]**:  We traverse the first list and mark all nodes as visited. Then we traverse the second list, if we see a visited node again, then there is an intersection point; 



## XOR Linked List

XOR Linked list: is an Memory Efficient Implementation of Doubly Linked Lists. This DDL can be created instead of storing actually memory addrress, every node stores the XOR of address of previus and next nodes. 

* [Operations on a doubly linked list](https://www.interviewbit.com/tutorial/doubly-linked-list/)
* [Introduction to Linked List -  video-tutorial](https://www.interviewbit.com/tutorial/doubly-linked-list/)
[Doubly Linked List - Implementation](https://www.youtube.com/watch?v=VOQNf1VxU3Q)
* [Cycle detection](https://en.wikipedia.org/wiki/Cycle_detection#Floyd's_Tortoise_and_Hare)
##### Source: Interviewbit and mycodeschool




### Extra Exercises
1. [Interview bit - Linked List](https://www.interviewbit.com/courses/programming/topics/linked-lists/#problems)
2. [Geeks For Geeks - Linked List](https://practice.geeksforgeeks.org/explore/?category%5B%5D=Linked%20List&page=1)


