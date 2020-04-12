/* 
 Author: Davide Pollicino
 Date: 23/02/2020
 Summary: Implement in C a Linear sorting Algorithm  
 • Implement a test harness for your algorithms
 • Consider the factors that might affect the performance of an algorithm
 • Understand the circumstances that lead to the best, worst, and average performance charateristics for your algorithm
*/

#include <stdio.h>
#include <time.h>

#define MAX 5

void search( int num)
{
    int array[MAX] = {1,2,3,4,5};
    int idx; 
    for(idx = 0; idx < MAX; idx++)
    {
        if(array[idx] == num)
        {
            printf("\n %d found in position %d  ", num , idx+1);
            return; 
        }
    }
    
    printf("Element not found");
    return; 
}

void code()
{
    for(int i =0; i<20;i++)
    {
        search(i);
    }
    printf ("\n") ;
}

int main()
{
    clock_t t;
    printf("Start: %d \n" , (int) (t=clock()));

    code();

    printf("Stop %d \n" , (int) (t=clock() -t));
    printf (" Elapsed : %f seconds \n", ( double ) t / CLOCKS_PER_SEC ) ;
    return 0; 
}