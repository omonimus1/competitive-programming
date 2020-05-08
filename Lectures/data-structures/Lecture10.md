
## Stack(LIFO), Queue(FIFO), Binary Heap

Even if you probably understimate the value of the se two Data structures, they are used in the daily life.

### Stack
* Push: add in iteam in the stack (If the stack is full: Overflow condition)
* Pop: removes an iteam from the stack. (If we pop without every pushed: Underflow condition) 
* Peek or Top: returns the top element of the stack. 
* isEmpty(): returns True if Stack is empty, false.


#### How to implement a stack
We can use array, vectors or Linked List. In c++, we can also use the ```<stack>```from the STL. 

### Applications of the Strack

* Infix to Postfix / Prefix conversion
* Undo / redo operation
* Topological sorting (for graph)
* Balancing of Symbols
* Used to implement the N queen problem, sudoku solver or Knight tour problem. 

```
// Author: Davide Pollicino
// Date: 08/01/2019

#include <iostream>
#include <stack>

using namespace std;

void print_stack(stack <int> stackImplementation);

int main ()
{
  stack <int> stackArray;
  // Add an element on top of the stack
  stackArray.push(1);
  stackArray.push(2);
  stackArray.push(3);

  // Adds a new element at the top of the stack, above its current top element.
  stackArray.emplace(4);
  stackArray.push(5);

  cout << "Size: " << stackArray.size() << endl;

  print_stack(stackArray);
}

// Display element of the Stack
void print_stack(stack <int> stackArray)
{
  while(!stackArray.empty())
  {
      cout << stackArray.top() << endl;
      stackArray.pop();
  }
}

```

[Check the stack implementation with the Linked List](../algo_and_dataStructure/c++/data-structures/stack/stack-Linked-list.cpp)'

## Application of the queue
* CPU or Disk Scheduling (in general, wehn a resource is shared between multiple costumers / users).
* When data is transferrred asynchrounsly (file IO, IO Buffers , pipe).

Again, we can implement a queue using arrays, vectors or using the ```<queue>``` from the C++ STL. 

In the queue STL, remember at least the following buit-in methods:
* empty()
* swap(): exchange the contens of the two queues, even if they have different size(they two queues must be of the type).
* emplace(): insert a new element at the end of the queue
* push() : **add** element at  thee ne dof the queue
* pop(): **remove** the first element from the queue

```
// Create a queue of integers
queue<int>queue_example;

// Insert element inside the queue
queue_example.push(10);
queue_example(15);
queue_example(33);

// Print a the queue
while(!queue_example.empty())
{
		cout<<" "<<queue_example.front();
		queue_example.pop();
}
```

### Deques

A deques is a version of a queue in which elements can be added or removed from either end (front and back). 
We cna think to, that a deque is a data structurre that joins the functionalities of the stack and queue. 

A lists can usually support all the behaviours of a Deque (but generally has more feature than a deque should officialy support). 

It could be usefull when we have a chain of items to model in our program where these can be processes at each end but not in the middle. 

![Deque](../../images/deuque.png)
[Learn more about deques](https://www.geeksforgeeks.org/deque-cpp-stl/)

## Priority Queue

A priority queue is a container deisng such that its first elment is alway the greatest of the elment it contains. 
Useful essentials built-in methods are:
* empty()
* size()
* top() : access to the top element
* push() : insert an element
* pop() : remove top element


## Binary Heap

Before to start to talk about Binary Heap, memorize the following definitions:
* **Binary Tree:** data structure in which each node has at most two children, which are referred to as the left child and the right child. The left node is always smaller than the root and the right right node is always greater than root. 
* **Complete Binary Tree:** all the level of the B..T are fillex expect possibly the last level and the last has level has all keyrs as left as possible. 

Now,  A Binary Heap is a complete binary tree either Min Heap Or Max Heap. In a Min Binary Heap, the root must been the smallest value in all the Binary Heap(and this property must be recoursively true for all the nodes in Binary Tree).


### Application of Heap
* Use for the Heap sort 0(n lon n) time.
* Heap sort can be used to implement priority queue  with insert, extractmax() and delete() peration in O(log n) time/
* Used to implement the Dijkstra's shortest Pah and Prim's Minimum Spanning Tree
* Sort an almost sorted array efficienty, K'th Larget Element in in array. 

[Larn more about Binary Search Tree](https://www.geeksforgeeks.org/binary-search-tree-data-structure/)

We can implement a Max Binary Heap using a Priority Queue. 

```
#include <bits/stdc++.h>
using namespace std;

// Driver code
int main ()
{
    // Creates a max heap
    priority_queue <int> myHeap;
    myHeap.push(17);
    myHeap.push(1);
    myHeap.push(10);
    myHeap.push(30);
    myHeap.push(15);

    // One by one extract items from max heap
    while (myHeap.empty() == false)
    {
        cout << myHeap.top() << " ";
        myHeap.pop();
    }

    return 0;
}
```
Output will be ```30 17 15 10 1```

We can as well implement a Min Binary Heap 
```
#include <bits/stdc++.h>
using namespace std;

// Driver code
int main ()
{
    // Creates a min heap
    priority_queue <int, vector<int>, greater<int> > myMinHeap;
    myMinHeap.push(5);
    myMinHeap.push(1);
    myMinHeap.push(1033);
    myMinHeap.push(12);
    myMinHeap.push(20);

    // One by one extract items from min heap
    while (myMinHeap.empty() == false)
    {
        cout << myMinHeap.top() << " ";
        myMinHeap.pop();
    }

    return 0;
}
```

Output will be : ```1 5 12 20 1033```




