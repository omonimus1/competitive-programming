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
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL; 
    }
};

// Doubly linked list
struct Node
{
    int data;
    Node *next, *prev;
    Node (int x)
    {
        data = x;
        prev = next = NULL; 
    }
};
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
### Insert at the end (tail) of the linked list
```
Node * InsertAtEnd(Node *head, int new_data)
{
    Node * new_tail = new Node(new_data);
    if(head == NULL)
        return new_tail;
    else
    {
        Node *current = head; 
        while(current-> next != NULL)
            current = current->next;

        current->next = new_tail;
        return head; 
    }
}
```

### Delete head of the Single Linked List
```
Node * DeleteHead(Node * head)
{
    if(head == NULL)
        return head;

    Node *new_head = head->next;
    free(head);
    return new_head;
}
```

### Delete last node of the linked list O(N) time complexity
```
Node * DeleteTail( Node *head)
{
    if(head == NULL) return NULL; 
    if(head-> next == NULL)
    {
        delete(head);
        return NULL; 
    }
    // There are at leazst 2 nodes in the linked list
    Node *current = head;
    while(current->next->next != NULL)
        current = current->next;
    // Remove last node
    delete(current->next);
    // Set next pointer to NULL (current->nexgt was before pointing to the old tail node that has been now deleted)
    current->next = NULL;
    return head;
}
```

### Search in a linked list

```
// Iterative solution
int GetPositionOfAElement (Node *head, int x)
{
    if(head == NULL)
        return -1; 
    Node *current = head;
    int i=0; 
    while(current != NULL)
    {
        i++;
        if(current->data == x)
        {
            return i; 
        }
        current = current->next;
    }
    return -1; 
}
// Recursive function
// O(N) time - O(N) space
int SearchElement(Node *head, int x)
{
    if(head == NULL) return -1;
    if(head ->data = x)
        return 1; 
    else
    {
        int result = search(head->next, x);
        // used to return non-existing position when the elements DOES NOT exists in the linked list
        if(result == -1) 
            return -1;
        else 
            return (result+1);
    }
}
```

## Doubly Linked LIst: Insert new Head
```
Node * InsertInHead (Node *head, int x)
{
    Node *new_node = new Node(x);
    new_node = head;
    if(head != NULL)
        head->prev = new_node;
    return new_node;
}
```

## Doubly Linked LIst: Remove Head
```
Node * DeleteHeadFromDoublyLinkedList(Node *head)
{
    if(head == NULL)
        return NULL; 
    if(head->next == NULL)
    {
        delete(head);
        return NULL; 
    }
    Node *original_head = head;
    head = head->next;
    head->prev = NULL; 
    delete (original_head);
    return head;
}
```

## Doubly Linked LIst: Insert new Tail

```
Node * RemoveTailFromDoublyLinkedList(Node *head, int x)
{
    Node *new_end = new Node(x);
    if(head == NULL)
        return new_end;
    Node *current = head;
    while(current->next != NUL)
        current = current->next;

    current->next = new_end;
    new_end->prev = current;

    return head;   
}
```
## Doubly Linked LIst: Remove Tail

```
Node * DeleteTailFromDoublyLinkedList(Node *head)
{
    if(head == NULL) return NULL;
    if(head->next == NULL)
    {
        free(head);
        return NULL; 
    }
    // There are at least 2 elements int he doubly linked list
    else
    {
        Node *current = head;

        // Reach end of the doubly linked list
        while(current->next != NULL)
        {
            current = current->next; 
        }
        current->prev->next = NULL;
        delete(current);
        return head; 
    }

}
```

## Clone list with next and random pointer

```
Node * Clone(Node *head)
{
    Node *current = head, *temp;
    while(current != NULL)
    {
        current->next = new Node(current->data);
        current->next->next = temp;
        current = temp;
    }
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
    // Prev is the new head (origianly the tail element of the linked list) 
    return prev; 
} 
```
## Reverse linked list in group of k; 


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

By clloning we emean create a copy of the linked list, where nodes contains the same values, the nodes are in the same 
order of the original linked list, including the random pointers.
```
struct Node{
    int data;
    Node *next;
    Node *random;
};
```
O(N) time and O(N) space.
We use an hashtable to keep track the random pointers and next's pointers of each node;

```
Node* clone(Node *head) 
{ 
    unordered_map<Node*,Node*> mp;
    for(Node *current=head;current!=NULL; current=current->next)
        mp[current]=new Node(current->data);
    
    for(Node *current=head;current!=NULL; current=current->next){
        Node *cloneCurrent=mp[current];
        cloneCurrent->next=mp[current->next];
        cloneCurrent->random=mp[current->random];
    }
    Node *head2=mp[head];
    
    return head2;
}

```
O(N) time and O(1) space;
We create a copy node for each node and we simply attach it (insert it) next to our current node;
This means that, if I have a linked list: 5->10->15, the first step will trasform the linked list in 5->5->10->10->15->15;
The second step is simply exploit the existing random pointers, setting also the next' random pointer of our duplicate/cone node, as the next random pointer node the original linked list. 
```
// Create duplicated node
Node *current;
for(current = head; current!= NULL;)
{
    // Store reference to the next node (that will be positionated after our duplicate)
    Node *next = current->next;
    // Create duplicate node
    current->next = new Node(current->data);
    // Link next' pointer of the duplicate to the next value in linked list.
    current->next->next = next;
    current = next;  
}

// Step 2
for(current = head; current != nULL; current = current->next->next)
    current->next->random = (current->random != NULL) ? (current->random->next) : NULL; 

// Step 3
//  Iterate again linked list, removing all the duplicates node and inserting them in our clone linked list. (we just change next pointer in this stage);
     Node* original = head, *copy = head->next; 
  
    temp = copy; 
  
    while (original && copy) 
    { 
        original->next = original->next? original->next->next : original->next; 
        copy->next = copy->next?copy->next->next:copy->next; 
        original = original->next; 
        copy = copy->next; 
    } 

    return temp; 
```

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
    // if first linked list is NULL
    if(a == NULL)
        return b;
    // Check if second linked list is NULL; 
    if(b == NULL)
        return a;
    

    Node *head = NULL, *tail = NULL;
    // Creat head of the new linked list in according with the value of the heads of the two linked list
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
            // We update the tail, considering that we have added a new node; 
            tail = a;
            a = a->next;
        }
        else
        {
            // Add node
            tail->next = b;
            // Update node
            tail = b;
            b = b->next;
        }
    }
    // COntateneate remeaning nodes if the while loop has stopped because we reach the end of one or both linked list; 
    if(a == NULL)
        tail->next = b;
    else
        tail->next = a;

    return head;
}
```

## Find intersection Point(intersaction node) of Two Linked List
* **Naive Solution [Time O(m+n)]**:  We traverse the first list and mark all nodes as visited. Then we traverse the second list, if we see a visited node again, then there is an intersection point; 
```
int GetIntersactionpoint(Node *head1, Node* head2)
{
    // Create an unordere set
    unordered_set<Node *>s;
    Node *current = head1;
    // Iterate all the list 1 and push it inside the unordered_set
    while(current != NULL)
    {
        s.insert(current);
        current = current->next; 
    }
    // Iterate list 2: if a node of the list 2 exists in the list 1, return its' value; 
    current = head2;
    while(current != NULL)
    {
        if(s.find(current) != s.end())
            return current->data;
        current = current->next; 
    }
    // There are No intersaction point
    return -1; 
}
```

Second option works in constant space O(1) space and O(N) time complexity; 
1. We count number of nodes in both lists;
2. We store the absolute difference betweent he length of the two linked list abs(counter1-counter2)
3. We start to iterate from the **longest** linkedln, skipping N nodes, where N is the abs(counter1-counter2)
4. After we have skipped N nodes, we iterate both linked list and if the nodes are equals, return the value->data;
```
int _getIntersection(int d, Node* head1, Node* head2) 
{
    // d: abs(number_nodes_list1 - number_nodes_list2)
    // head1: longest linked list 
    Node* current1 = head1; 
    Node* current2 = head2; 
    // Skip d nodes
    for (int i = 0; i < d; i++) {
        // If we reach the end, there is no interesaction point 
        if (current1 == NULL) { 
            return -1; 
        } 
        current1 = current1->next; 
    } 
    // compare now both pairs of nodes, if pointers are the same, return the value of the node. 
    while (current1 != NULL && current2 != NULL) { 
        if (current1 == current2) 
            return current1->data; 
        current1 = current1->next; 
        current2 = current2->next; 
    }  
    return -1; 
}
```


## LRU Cache Design
What is the Cache? It is a memory phisically located close to the processor that has small availability in terms of quantity of data that it can stores but extremely high access time. 

When the cache is full and we need to store something new in it, the cache will delete the last element of the cache(the less used one).

A simple implementation can be done using an array. 
* To search if an element exists we will have to iterate all the array, if it misses, we will positionated this new element in the first position; 

The best Data-Structure that has fast search and insert operations is the Hash-Table / unordered_map. 


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


