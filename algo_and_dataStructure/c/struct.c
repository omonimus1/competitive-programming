/*
    Author: Davide Pollicino 
    Date: 22/01/2020
    struct.c Summary: C console application that create a struct that contains info about one employee
*/

#include <stdio.h>

typedef struct 
{
    int id; 
    char name[20];
}employee;

int main()
{
    // Create an instance of the struct 
    employee e1 = {1 , "Davide"};
    // Output: 1 Davide 
    printf("ID: %d %s" , e1.id , e1.name);
}
