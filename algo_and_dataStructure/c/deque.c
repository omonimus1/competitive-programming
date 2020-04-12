/*
    Author: Davide Pollicino 
    Date: 31/01/2020
    Summary: Implement the basics APIs of a deque
        Data Structure in C. 
*/

#include <stdio.h>
#define MAX 5


void enqueue(int *arr , int item , int *pfront , int *prear)
{
    if(*prear == MAX-1)
    {
        print("The queue is full");
        return; 
    }
    else
    {
        printf("Enqueue %d ", item);
        (*prear)++;
        arr[*prear] = item;

        if(*pfront == -1)
            *pfront = 0;
    }  
}

void dequeue()
{

}

bool empty()
{
    if(*pfront == -1)
    {
        printf("Queue is empty");
        return 1; 
    }
    else
    {
        return 0; 
    }
    
}



int main ()
{
    enqueue ( arr, 32, &front , &rear );
    enqueue ( arr, 25, &front , &rear );
    enqueue ( arr, 11, &front , &rear );
    enqueue ( arr, -4, &front , &rear );
    
    int i;
    for (int i =0; i< MAX-1; i++)
    {
        if (!empty ())
    }
    return 0; 
}
