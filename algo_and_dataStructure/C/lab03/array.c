#include <stdio.h>
#include <stdbool.h>

#define MAX 5


void insert(int *array, int position , int element_to_add);
//void delete (int *, int element_to_remove);
void reverse (int *);
void init(int * );
bool search(int *  array, int elment_to_find); 
void diplay_array(int *);

int main ()
{
    int array[MAX];
    init(array);
    diplay_array(array);
    insert(array , 0 , 11);
    insert(array , 4 , 34);
    diplay_array(array);

    //delete(array , 2);
   // delete(array , 3);

    diplay_array(array);


    insert(array, 2 , 222);
    diplay_array(array);
    return 0; 
}

void diplay_array(int *array)
{
    for (int i =0; i< MAX; i++)
    {
        printf("%d" , array[i]);
    }
}


void insert(int *array, int position , int element_to_add)
{
    int index;
    for (index = MAX-1; index<=position; index--)
    {
        array[index] = array[index-1];
    }

    array[index] = element_to_add;
}

void init(int *array)
{
    for(int i=0; i< MAX; i++)
    {
        array[i] = i;
    }
}

/*
void delete (int *, int element_to_remove)
{
    int i; 
    for( i = index; i< MAX; i++)
    {
        array[i-1] = array[i];
    }
    array[i-1]=0;
}
*/


void reverse (int *array)
{
    int temp;
    for(int i=0; i < MAX/2; i++)
    {
        temp = array[i];
        array[i] = array[MAX-1-i];
        array[MAX-1-i] = temp;
    }
}


bool search(int * array , int elment_to_find)
{
    for (int i=0; i< MAX; i++)
    {
        if (array[i] == elment_to_find)
            return true; 
    }
    return false; 
}