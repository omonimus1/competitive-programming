/*
    Author: Davide Pollicino
    Date: 20/01/2020

    First real lab of Algorithm and dataStructure. The goal of this lab is to understand
    the "memory pressure" created by one variable, struct, array and so on, using quite useful
    functions as sizeof()
*/
#include <stdio.h>


int main()
{
    int integerVarible;
    // size_t is a data-type used to represent the size of an object. It is used many times with sizeof; 
    size_t size; 
    size = sizeof(integerVarible);
    printf("Size of integer Variable is %zu bytes " , size);

    // Parallel implementation:
    printf("-- Size of the integer variable: %zu bytes ",sizeof(integerVarible));
    return 0;
}
