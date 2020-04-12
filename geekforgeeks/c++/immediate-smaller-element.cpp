#include <iostream>
#include <vector>
using namespace std;

void solve_test()
{
    long long number_of_elements;
    int element; 
    cin >> number_of_elements;
    vector<int>vett;
    // Store test case input in our vectors
    for(int i =0 ; i<number_of_elements; i++)
    {
        cin >> element;
        vett.push_back(element);
    }
    // Iterate the vector
    for(int i =0; i <vett.size()-1; i++)
    {

        if(vett[i] > vett[i+1])
            cout <<vett[i+1]<< ' ';
        else
            cout <<"-1 "; 
    }
    // Add -1 for the last element because there is no element on the right
    cout<<"-1";
    // Go to next line to separate the test cases output
    cout <<endl;
}

int main()
{
    int t; 
    cin >> t; 
    for(int i=0; i<t; i++)
        solve_test();
	return 0;
}