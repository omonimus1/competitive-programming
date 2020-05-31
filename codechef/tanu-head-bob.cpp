#include<iostream>

using namespace std;


void fill_array(int *array, int n)
{
    int number;
    for(int i=0; i< n; i++)
    {
        cin >> number;
        array[i] = number;
    }
}

string solve_test()
{
    int NO,YES, I, n;
    NO = YES = I = 0;
    cin >> n;
    int arr[n];
    fill_array(arr, n); 
    
      
}


int main()
{
    int t;
    cin >> t;
    while(t--)
        cout << solve_test()<<endl;
    return 0;
}

