// Source: GeeksForGeeks
#include <iostream>
using namespace std; 

int arr[] = {-2,3,4,-2-7,3,1,-9};
int n = sizeof(arr)/sizeof(arr[0]);

void print_array()
{
    for(int i =0; i < n; i++)   
        cout << arr[i] << " ";
    cout <<endl; 
}

int main()
{
    int max_so_far = 0;
    int max_ending_here = 0;
    print_array();
    for(int i=0; i < n; i++)
    {
        max_ending_here += arr[i];
        if(max_ending_here < 0)
            max_ending_here = 0;
        if(max_so_far < max_ending_here)
            max_so_far = max_ending_here;
    }
            cout <<max_so_far<<endl; 
}