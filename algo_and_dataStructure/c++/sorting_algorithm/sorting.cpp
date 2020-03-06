/*
    Author; Davide Pollicino
    Date: 28/02/2020
*/

#include <iostream>
using namespace std; 


#define SIZE 10
int arr[SIZE] = {26 , 34543 , 17 , 31 , 13 , 543 , 456 , 1, 0, 2};

void reset_array(int *list_of_elements)
{
   // list_of_elements = {26 , 17 , 10,  31 , 13 , 543 , 456 , 1, 0, 2};
}

void print_array(int *list_of_elements)
{
    for(int i = 0; i<SIZE; i++)
        cout << list_of_elements[i] << " ";
}

void quick_sort(int *list_of_elements);
void merge_sort(int *list_of_elements);
void tim_sort(int *list_of_elements);
void shell_sort(int *list_of_elements);
void heap_sort(int *list_of_elements);
void bucket_sort(int *list_of_elements);
void radix_sort(int *list_of_elements);
void bubble_sort(int *list_of_elements);
void selection_sort( int *list_of_elements)
{
    int min_index;
    for(int i=0; i< SIZE-1; i++)
    {
        min_index = i;
        for(int j=0; j< SIZE; j++)
            if(list_of_elements[j] < list_of_elements[min_index])
                min_index = j;
            // Swap the found minimum element with the first element 
            swap(list_of_elements[min_index], list_of_elements[i]);    
    }
}
void insertion_sort(int *list_of_elements);


int main()
{
    print_array(arr);
    
    selection_sort(arr);
    print_array(arr);
    return 0; 
}