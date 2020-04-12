
## Stack(LIFO) and Queue(FIFO)

Even if you probably understimate the value of the se two Data structures, they are used in the daily life.

### Stack
* Push: add in iteam in the stack (If the stack is full: Overflow condition)
* Pop: removes an iteam from the stack. (If we pop without every pushed: Underflow condition) 
* Peek or Top: returns the top element of the stack. 
* isEmpty(): returns True if Stack is empty, false otherwise.


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

[Check the stack implementation with the Linked List](../algo_and_dataStructure/c++/data-structures/stack/stack-Linked-list.cpp)





