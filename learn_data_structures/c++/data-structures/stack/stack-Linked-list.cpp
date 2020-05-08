/**
 *  Author: Davide Pollicino
 *  Github: omonimus1
 *  Date: 12/04/2020
 * */
#include <bits/stdc++.h>
using namespace std;

// Structure to represe a stack 
class Node
{
    public:
        int data; 
        Node * next; 
};

Node* newNode(int data)
{
    Node* stackNode = new Node();
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode; 
}

int isEmpty(Node* head)
{
    return !head; 
}

void push(Node** head , int data)
{
    Node* stackNode = newNode(data);
    stackNode ->next = *head;
    *head = stackNode;
    cout << data << " correctly pushed inside our stack"<<endl;
}

int pop(Node** head)
{
    if(isEmpty(*head))
        return 1; 
    Node* temp = * head;
    *head = (*head)->next;
    int popped = temp->data;
    // Release the memory used by the temporary node
    free(temp);
    return popped; 
}

int peek(Node *root)
{
    if(isEmpty(root))
        return 1; 
    return root->data;
}

int main()
{
    Node* root = NULL;

    push(&root, 10);
    push(&root, 20);
    push(&root, 30);

    cout << pop(&root) << " popped from stack\n";

    cout << "Top element is "<<peek(root)<< endl;

    return 0;
}

