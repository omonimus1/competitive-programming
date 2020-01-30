#include <stdio.h>
#include<malloc.h>

int count (struct node * list);
void display (struct node *list);
void append(struct node **list , int num);
void prepend(struct node ** list , int num);


int main()
{
    struct node *list; 
    list = NULL;


    append(&list , 14);
    append(&list , 2);  
    append(&list , 14); 
    append(&list , 45);
    append(&list , 88);
    prepend(&list , 999);
    display(list); 
    int c = count(list);
    printf("\n Number of elements in the list: %d" , c);   
}

struct node
{
    int data;
    struct node * link; 
};



int count (struct node * list)
{
    int count = 0;
    while(list != NULL)
    {
        list = list -> link;
        count++;
    }
    return count;
}


void display (struct node *list)
{
    while(list != NULL)
    {
        printf("\n %d " , list->data);
        list = list ->link; 
    }
}

// Add an element at the end of the list
void append(struct node **list , int num)
{
    struct node *temp , *r; 
    // If we are at the end of the Linked List , alloce space for new node
    if(*list == NULL)
    {
        temp = (struct node *) malloc(sizeof(struct node));
        temp -> data = num;
        temp -> link = NULL; 
        *list = temp; 
    }
    else
    {
        temp= *list;
        while(temp -> link != NULL)
            temp = temp -> link; 
        r = (struct node *) malloc (sizeof(struct node));
        r -> data = num;
        r -> link = NULL; 
        temp ->link = r; 
    }
    
}

// Remove an element at the end of the list
void prepend(struct node ** list , int num)
{
    struct node * temp;
    temp = (struct node *) malloc(sizeof(struct node));
    temp -> data = num;
    temp ->link = *list;
    *list = temp; 
}


