// QueueImplemenentation.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Summary: Cpp console application that shows how to implement C++ stl queue and how to use queue's functions. 
    Author: Davide Pollicino
    Date: 31/12/2019
*/

#include <iostream>
#include <queue>
using namespace std; 

void print_queue(queue<int> queueToPrint);

int main()
{
    // Declare a queue of int
    queue<int> myQueue; 

    // push(x) will add x at the end of the queue
    myQueue.push(22);
    myQueue.push(15);
    myQueue.push(35);
    myQueue.push(11);

    // fron() returns the first element of the queue
    cout << myQueue.front() << endl;
    // back() return the last element of the queue
    cout << myQueue.back() << endl;
    print_queue(myQueue);
    cout << "Size of the queue: " << myQueue.size() << endl;

    // Pop remove the first element of the queue
    myQueue.pop();
    cout << "\nQueue after the pop operation" << endl;
    print_queue(myQueue);
    cout << "\n Size of the queue: " << myQueue.size() << endl;

}


void print_queue(queue<int> queueToPrint)
{
    while (!queueToPrint.empty())
    {
        cout << queueToPrint.front() << " ";
        queueToPrint.pop();
    }
}
