// Date: 07/02/2020
// Summary: Implement a Linked List in C for the Algo and DataStructure Lab
#include <stdio.h>
#include<malloc.h>


struct node
{
    int data;
    struct node * link; 
};


void display(struct node * list)
{
    while(list != NULL)
    {
        printf("%d ", list -> data);
        list = list ->  link; 
    }
    printf("\n");
}


int count( struct node *list)
{
    int counter = 0; 
    while(list != NULL)
    {
        list= list -> link;
        counter++;
    }
    return counter;
}




void append(struct node **list , int num)
{
    struct node *temp , *r;
    if (*list == NULL)
    {
        temp = (struct node *) malloc (sizeof(struct node));
        temp -> data = num;
        temp -> link = NULL;
        *list = temp; 
    }
    else
    {
        temp = *list;
        while(temp -> link != NULL)
            temp = temp -> link;

        r = (struct node *) malloc(sizeof(struct node));
        r->data = num;
        r->link = NULL;
        temp -> link = r;

    } 
}

void prepend(struct node ** list , int num)
{
    struct node *temp;
    temp = (struct node *) malloc(sizeof(struct node));
    temp ->data = num;
    temp -> link = *list;
    *list = temp; 
}


void insert_after(struct node *list , int location , int num)
{
    struct node *temp , *r;
    int i;
    temp = list;
    for (i = 0; i< location; i++)
    {
        temp = temp ->link;
        if(temp == NULL)
        {
            printf("Lenght of the list is %d but supplied location i s%d " , i , location);
            return ; 
        }
    }
    r = (struct node *) malloc (sizeof(struct node));
    r ->data = num;
    r -> link = temp -> link; 
    temp -> link = r; 
}


void delete_a(struct node ** list , int num)
{
    struct node *old , *temp; 
    temp = *list;

    while(temp != NULL)
    {
        if(temp -> data == num)
        {
            if(temp == *list)
            {
                *list = temp -> link; 
            }
            else
            {
                old -> link = temp -> link;
                free(temp);
                return;
            }
            
        }
        else
        {
            old = temp;
            temp = temp -> link; 
        }
    }
    printf (" Element %d not found in the supplied list \n", num );
}


int main()
{
    struct node *list; 
    list = NULL;

    printf ("No of elements in linked list = %d\n", count ( list ) ) ;
    append(&list , 14);
    append(&list , 2);  
    append(&list , 14); 
    append(&list , 45);
    append(&list , 88);
    prepend(&list , 999);
    display(list); 
    int c = count(list);
    printf("\n Number of elements in the list: %d" , c); 
    delete_a (&list , 14) ;
    printf ("No of elements in linked list = %d\n", count (list)) ;
    display (list);
    return 0;   
}



