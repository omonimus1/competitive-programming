/*
    Author: Davide Pollicono
    Date: 20/01/2019

    Write a C program that uses an array to store my grades for the first year modules.
    Then, we want to make space for the second year, modifying the first part.

    FIX NEEDED

*/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool doesUserWantContinue();
void add( int element, int *vector);
void display_vector( int *vector );
void initialize_vector( int **vector );

int elements = 0;
int size = 10;

int main(void)
{
    int *vector = 0; 
    initialize_vector(&vector);
    int grade_to_add;
   // char value; 
    while(1)
    {
        printf("Add to value: ");
       // value = getchar();
        scanf("%d", &grade_to_add);
        add(grade_to_add , vector);
        if (doesUserWantContinue())
        {
            continue;  
        }
        else
        {
            return 0; 
        }
    }
    
    display_vector(vector); 

    return 0;
}

void add( int element, int *vector)
{
    vector[elements++] = element;
    return;
}

void display_vector( int *vector )
{
    int i;
    for( i = 0; i < elements; i++)
    {
        printf("%2d\t", vector[i]);
        if( (i + 1) % 5 == 0 )
            printf("\n");
    }
    printf("\n");
    return; 
}



bool doesUserWantContinue()
{

        char answer = 'y';

        printf("Would u like to add another grade? (y or n)");
       answer = getchar();
        if (answer == 'y')
        {
            return true;
        }
        return true;
}

void initialize_vector( int **vector )
{
    *vector = (int *)malloc(sizeof(int) * size);
}