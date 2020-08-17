#include<bits/stdc++.h> 

using namespace std;
vector<vector<int>>all_subarrays;



void generate_subarrays(int arr[], int n)
{

    vector<int>temp;
    for(int i =0;  i< n; i++)
    {
        for(int j=i; j < n; j++)
        {
            for(int k = i; k <=j; k++)
            {
                temp.push_back(arr[k]);
            }
            all_subarrays.push_back(temp);
            temp.clear();    
        }
    }


    // Print all generated subarrays
    for(int i =0; i < all_subarrays.size(); i++)
    {
        for(int j=0; j < all_subarrays[i].size(); j++)
        {
            cout << all_subarrays[i][j] <<" ";

        }
        cout <<endl; 
    }
}


/*
    In how many subarrays it is the smallest
*/
int in_how_many_is_the_smallest(int number)
{
    int solution = 0;
    int smallest;
    for(int i =0; i < all_subarrays.size(); i++)
    {
        smallest = INT_MAX;
        for(int j=0; j < all_subarrays[i].size(); j++)
        {
            if(smallest > all_subarrays[i][j])
                smallest = all_subarrays[i][j];
        }
         if(smallest == number)
            solution += 1;
    }

    return solution; 
}

int main()
{
    int arr[] = {1,2,3,4,6};
    int n = sizeof(arr)/ sizeof(arr[0]);

    generate_subarrays(arr, n);

    cout << "--Smallest in how many subarrays" <<endl;
    
    for(int i =0; i < n; i++)
        cout<<arr[i] << " :" << in_how_many_is_the_smallest(arr[i]) << endl;

    return 0; 
}