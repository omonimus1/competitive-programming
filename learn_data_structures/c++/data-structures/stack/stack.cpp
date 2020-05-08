/**
 *  Author: Davide Pollicino
 *  Github: omonimus1
 * */

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
