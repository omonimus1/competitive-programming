/*
    Author: Davide Pollicino 
    Date: 31/01/2020
    Summary: Implement the basics Stack API in C. 
*/
#include <stdio.h>
#define MAX 5

struct stack
{
    int array[MAX];
    int top; 
};

void init_stack(struct stack *s)
{
    s->top = -1;
}

// Add an element in the stack 
void push(struct stack *s , int iteam)
{
    int *data;
    if(s->top == MAX-1)
    {
        printf("stack is ful=l , could not push onto stack");
        return; 
    }
    s->top++;
    s->array[s->top] = iteam;
}


// Remove the last element inserted in the stack 
int *pop(struct stack *s)
{
    int *data;
    if(s->top == 1)
    {
        printf("Stack is empty");
        return NULL; 
    }
    data = &s->array[s->top];
    s->top--;
    return data; 
}


// Drive method
int main ()
{
    // Create instance of the stack struct
    struct stack s; 
    init_stack(&s);
    // Push / add element in the task 
    push(&s, 11);
    push(&s , 23);
    push(&s , -21);
    push(&s , 15);

    int *i = NULL;
    // Pop/ Get element for the stack and print them out
    i = pop(&s);
    if (i) { printf("Iteam popped %d ", *i); }
    i = pop(&s);
    if (i)  {printf("Iteam popped %d " , *i);}
    return 0; 
}

