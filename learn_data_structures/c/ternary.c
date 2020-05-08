/*
    Author: Davide Pollicino
    Date: 24/02/2020
    Summary: Implement the Ternary searching algorithm 
*/

#include <iostream>

int ternarySearch(int array[] , int start, int end , int element_to_find)
{
    if(start <=end)
    {
        int midFirst = (start + (end-start)/3); // First of fiest and second block.
        int midSecond = (midFirst + (end-start)/3); // mid of first and second block 

        if(array[midFirst] == element_to_find)
            return midFirst;
        else if(array[midSecond] == element_to_find)
            return midSecond;
        
        else if(element_to_find < array[midFirst])
            return ternarySearch(array , start , midFirst-1 , element_to_find);
        else if(element_to_find > array[midSecond])
            return ternarySearch(array , midSecond+1 , end , element_to_find);
        
        return ternarySearch(array , midFirst+1 , midSecond-1 , element_to_find);
    }
    return -1; 
}

int main()
{
    int array_size , element_to_find = 4 , element_index; 
    array_size = 6;
    int arr[array_size] = {1,2,3,4,5,6};
   if((element_index = ternarySearch(arr, 0, array_size, element_to_find)) >= 0)
      printf("Item found at location: %d" , element_index);
   else
      printf("Element is not in the array ");

    
}