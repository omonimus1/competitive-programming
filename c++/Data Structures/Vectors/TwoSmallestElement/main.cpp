/*
    Author: Davide Pollicino
    Date: 12/01/2019

    Get a vector, find the two smallest element
*/

#include <iostream>
#include <vector>
#include <algorithm>

void print_two_smallest(int a ,int b);
void find_two_smallest(vector<int> myVett);
void print_vector(vector<int> myVett);

using namespace std;

int main()
{
    //test 1
    vector<int> myvector = {1,4,7,88,34,21,9,3,45,23,12};
    print_vector(myvector);
    find_two_smallest(myvector);
    myvector.clear();


    //test 2
    myvector = {-3,5,12,44,13,45,5,71,-9374};
    print_vector(myvector);
    find_two_smallest(myvector);
    myvector.clear();


    // test 3
    myvector = {3,5,7,9,1,4,56,78,98};
    print_vector(myvector);
    find_two_smallest(myvector);
    return 0;
}


void find_two_smallest(vector<int> myVett)
{
    sort(myVett.begin() , myVett.end());
    print_two_smallest(myVett[0] , myVett[1]);
}


void print_vector(vector<int> myVett)
{
    for(int i =0; i < myVett.size(); i++)
    {
        cout << myVett[i] << " ";
    }
    cout << "End of the vector" << endl;
}


void print_two_smallest(int a ,int b)
{
    cout << "The two smallest one are: " << a << " " << b <<endl;
}
