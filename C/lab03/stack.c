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

int main ()
{
    struct stack s; 
    init_stack(&s);

    push(&s, 11);
    push(&s , 23);
    push(&s , -21);
    push(&s , 15);

    int *i = NULL;
    i = pop(&s);
    
    if (i) { printf("Iteam popped %d ", *i); }
    i = pop(&s);
    if (i)  {printf("Iteam popped %d " , *i);}
    return 0; 
}

