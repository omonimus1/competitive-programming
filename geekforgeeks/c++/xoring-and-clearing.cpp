#include <iostream>
#include <vector>
using namespace std;

void print_list(vector<int> &vett)
{
    //Print vector
    
}

void solve_test()
{
    int e , n;
    cin >> n;
    vector<int>vett;
    // Store list in the vector
    for(int i =0; i<n; i++)
    {
        cin >> e;
        vett.push_back(e);
    }

    // Do the xor of all the elements with their index
    

    print_list(vett);
   
    // Set the all the elements to 0 

   

    print_list(vett);
}

int main()
{
    int t=1;
    cin >>t;
    while(t--)
    {
        solve_test();
    }
    return 0; 
}