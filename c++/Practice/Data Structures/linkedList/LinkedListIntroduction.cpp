/*
    Summary: Application that show how to implement a list with two elements 
             and print the list starting from a specific element of the list (in our case the Head / first element of the LinkedList)

    Author: Davide Pollicino
    Date: 30/12/2019
*/

#include<iostream> 
using namespace std; 

class Node
{
    public:
        int data;
        Node* next;
};          


void printList(Node* node);

int main()
{
    Node* head = new Node();
    Node* firstElement = new Node();

    // Assign value to the first element of the Linkedlist
    head->data = 20;
    // Assign pointer to the next element in the List
    head->next = firstElement; 

    
    firstElement->data = 50;
    firstElement->next = NULL; 

    // Print list from the first element of the list 
    printList(head);
}

// Print the list startig from a determinated node of the List
void printList(Node* node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next; 
    }
}