
// LinkedListAPIImplementation.cpp 
/*
    Author: Davide Pollicino
    Date: 30/12/2019 
*/

#include<iostream>
#include<stdlib.h>
using namespace std; 

struct Node
{
    int data;
    Node* next; 
};

void push(struct Node** node, int new_element);
void printList(Node* node); 
int getSizeList(Node* node);


int main()
{
    struct Node* head = NULL;
    
    // Add new element to the list 
    push(&head, 10); 
    push(&head, 20); 
    push(&head, 35);
    push(&head, 36);
    push(&head, 20);
    push(&head, 41); 
    printList(head); 
   
    // Print number of element in the list 
    cout << " \n \n Number of the Elements in the LinkedList: " << getSizeList(head); 
   
}

void push(struct Node** node, int new_element)
{
    // Create new node of the LinkedList and instantiate memory in the Heap Memory using malloc 
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
    // Assign the new value to the node 
    new_node -> data = new_element;
    
    new_node -> next = (*node);
    (*node) = new_node;
   
}

int getSizeList(Node* node)
{
     
    Node* current_node = node; 
    // For optimization purposes, if the LinkedList is empty, we return immediatley 0 
    if (current_node == NULL)
    {
        return 0; 
    }
    else
    {
        int number_of_elements = 0; 
        while (current_node != NULL)
        {
            current_node = current_node -> next;
            number_of_elements++;
        }
        return number_of_elements;
    }
    
}


void printList(Node* node)
{
    while (node != NULL)
    {   
        //Print data of the current node
        cout << node->data << " "; 
        // Assign pointer to the next node
        node = node->next; 
    }
}





