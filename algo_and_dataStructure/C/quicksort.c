#include <stdio.h>

#define SIZE 10

void quicksort(int * , int , int);
int partititon(int * , int , int);

int main(void)
{
    int data[SIZE] = { 9, 88, 79 , 63 , 7 , 45 , 17 , 22 , 1 , 3};
    int i; 

    printf("Quicksort\n");
    printf("Before sorting.... \n");


    for(i=0; i< SIZE ; i++)
    {
        printf("%d \t" , data[i]);
    }
    printf("\n");

    quicksort(data , 0, SIZE-1);

    printf("After sorting.... \n");
        for(i=0; i< SIZE ; i++)
    {
        printf("%d \t" , data[i]);
    }
    printf("\n");

    return 0; 
}


int partition (int data[] , int lower , int upper)
{
    int pivot = data[upper];
    int idx = lower-1; 
    int temp; 

    for(int j=lower; j< upper; j++)
    {
        if(data[j] <= pivot)
        {
            idx++;
            temp = data[idx];
            data[idx] = data[j];
            data[j] = temp;
        }
    }

    temp = data[idx+1];
    data[idx+1] = data[upper];
    data[upper] = temp;

    return idx+1; 
}

void quicksort(int data[] , int lower , int upper)
{
    int pivot; 
    if(upper > lower)
    {
        pivot = partititon(data , lower , upper);
        quicksort(data , lower , pivot-1);
        quicksort(data , pivot+1 , upper);
    }
}

