#include<iostream>
#include <algorithm>
using namespace std;

/*
    Warning: This solution gives 40/100
*/

void fill_array(int *array,  int n)
{
    int i;
    int number;
    for(i = 0; i< n; i++)
    {
        cin >> number;
        array[i] = number; 
    }
}

int solve_test()
{
   int n;
   cin >> n; 
   int arr[n];
   fill_array(arr, n);
   sort(arr, arr+n);
   // If N = 2;
   if(n==2)
   {
        if(arr[0] + arr[1] <= n)
            return arr[0]+arr[1];
        else
            return -1;
   }
   int sum;
   for(int i =0; i < n-1; i++)
   {
       for(int j= i+1; j<n; j++)
       {

           sum = arr[i] + arr[j];
           if( i < j && sum <=n)
                return sum; 
       }
   }   
   // Something went wrong
   return -1;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
        cout<<solve_test()<<endl;

    return 0;
}