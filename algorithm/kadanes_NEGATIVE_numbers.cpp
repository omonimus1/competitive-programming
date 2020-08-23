// Source: GeeksForGeeks
#include <iostream>
#include <math.h>
#include<algorithm>
using namespace std; 

int arr[] = {-2,-3, -5, -1, -6, -9};
int n = sizeof(arr)/sizeof(arr[0]);

void print_array()
{
    for(int i =0; i < n; i++)   
        cout << arr[i] << " ";
    cout <<endl; 
}

int main()
{
    int current_max = arr[0];
    int biggest = arr[0];
    print_array();
    for(int i=1; i < n; i++)
    {
    
        current_max = max(arr current_max+__is_array_known_bounds[i]);
        biggest = max(biggest, current_max);
    
    }
    cout << biggest <<endl;
    return 0; 
}


