# Questions # 

#### How do we find the Vertical Sum of BT?

#### How to we fid the max with of a BST?
Remember that the MAX with is the highest number of nodes present at the same level.


We simply do a level traversal using a queues, applying so the BFS algorithms, keep track of the element in queue level by level and keep note of the biggest number of nodes in a single level.

#### How is Map internall stored in C++

MAP in C++ STL is implemented uisng a self balancing binary search tree (usually a Red Black Tree).
This allows us to have O(Log N) time complexity for search, insert and delete operations. 

## Suppose that we have a huge numbers of libraries in different applications and these libraries have dependencies between them? How do we sort the libraries such that we will no have problems with dependency?

We use a Directed Acyclic graph to repersent the order in which dependencies must be added and then apply tolopogical sorting to th graph, to obtain the order in which dependencies should be added for adding the library. 

We consider any node in the graph as the depency and the arrows represent the order in which they must be added.

#### Difference betwee Thread and a Process
Thread is a path of execution within a process, a process can contain multiple threads.


The thread withing the same process run in a shared memory space, while processes run in a seperated memory spaces.

##### What is a stack frame


A stack frame a procedure which contains all necessary information to save and restore the state of a program.

The stack frame is of course an allocated region of the memory stack. 

## What is a race condition?#

A race condition is a state that is verifies when a device or systems attempts to perform to or more operations at the same time,possibly on the same data. 

To avoid race condiiton we use the Thread synchronization Techiques that blocks two or more thread to execute particular code blocks at the same time. 

One pratical way to avoid race condition is to give access to a memory portion used by a thread via mutual access.

A mutex is a lock set before the use of a shared resource and release after have a thread finished to use that resource. 

## Permutations of a string

## Find Missing Number

* There are no duplicates numbers
* There are all the number from to 1 to N, expect for one that is missing. 
* The list of numbers could not be sorted. 

Solution: 
1. Get the sum of all the number from 1 to N with the formula: sum = (n+1)*(n+2)/2;
2. Iterate all the elements of the list, subtracing the values of the number Ith from the sub. 
3. The result of the values stored in **sum** after the subtractions will be the missing number. 

## Largest Sum Contigous Subarray

* If all the elements of the array are positive, it's enought to sum all the elements of the array.
* If the are both positive and integer values, there is a different approach, using the Kadane's algorithm. 

Mind that, this solutions does not return the subarray with the max value but, the value of the max between all the possible contiguos subarray. 

And, the Kadanes' algorithm do not work if all the numbers are negative, this means that if all the numbers are negative, the result will be 0. 
```
// Source: GeeksForGeeks
// It does not work when all the numbers are negative. 
#include <iostream>
using namespace std; 

int arr[] = {-2,3,4,-2-7,3,1,-9};
int n = sizeof(arr)/sizeof(arr[0]);

void print_array()
{
    for(int i =0; i < n; i++)   
        cout << arr[i] << " ";
    cout <<endl; 
}

int main()
{
    int max_so_far = 0;
    int max_ending_here = 0;
    print_array();
    for(int i=0; i < n; i++)
    {
        max_ending_here += arr[i];
        
        if(max_ending_here < 0)
            max_ending_here = 0;
        if(max_so_far < max_ending_here)
            max_so_far = max_ending_here;
    }
    cout <<max_so_far<<endl;
    return 0; 
}

```i`

Let's see how to make it work when all numbers are negative. 
