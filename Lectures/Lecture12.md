

### Lists

In python, Java, Lists and Prolog, we have lists. List are used as Array,
threat always as a sequential structure. It is dynamic, this means that we can change its size (adding or removing new elements).
In c++, it will is called: vector.


### Circualr Queue pr Ring Buffer (LIFO)

It is a variation of the queue,every elements needs to be shifted of place closer to the head (start of the queue), when 
one element is removed (dequeued). 
The queus is fixes in size so; 

### Deques

A deques is a version of a queue in which elements can be added or removed from either end (front and back). 
We cna think to, that a deque is a data structurre that joins the functionalities of the stack and queue. 

A lists cna usually support all the behaviours of a Dequue (but generally has more feature than a dequue should officialy support). 

It could be usefull when we have  achain oof items to model in our program where these can be processes at each end but not in the middle. 

![Deque](../images/deuque.png)


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

* Singly linked list : Each element stores it's own data and points to the next element. We can travers/iterate it in only one direction (from the start to the end). 
* Doubly Linked List: each element stores it's own data and pointer to both the next and previous elements. Of course, we can traverse/iterate it in both directiions. 
* Circolar linked list:  

#### Use of the Linked list

LInked list is foundamental for the use of other D.S. as: tree or graph. 

### Tree


### Graph



###### Images and lectures flow source: C++ reference, Geeks for Geeks, Tutorial Point, Algorithm and Data Structures Lectures at Napier University (created by Dt.Simon Powers, and Dt. Simon Wells).