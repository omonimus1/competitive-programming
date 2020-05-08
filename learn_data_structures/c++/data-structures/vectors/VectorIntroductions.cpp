// VectorIntroductions.cpp : Console application that shows: 
//  1) How to implement a vector
//  2) Descending and ascending sorting of a vector
//  3) Use of the binary search algorithm
/*
    Author: Davide Pollicino
    Date: 29/12/2019
*/

#include <iostream> // Imported to use the I/O stream. 
#include <vector>   // Imported to create and manage Vectors
#include<algorithm> // Imported to use the sort() function.
using namespace std;

void printVector(vector<int> myVector);

int main()
{
    // Declare a vector of integer
    vector<int> myVector = { 1,4,3,2,6,21,8,6 };

    cout << "\n Size of the vector: " << myVector.size() << endl;
    cout << "\n Content of the vector: " << endl; 
    printVector(myVector);

    // pop_back() : remove last element of the vector
    cout << "\n After pop_back() operation:  "<<endl;
    myVector.pop_back();
    printVector(myVector);
   
    // push_back() : add a new element at the end of the vector
    cout << "\n Push_back operation to add the value 17 in the vector: " << endl; 
    myVector.push_back(17); 
    printVector(myVector);

    // Descending sorting
    cout << "\n Array sorted in descending order: " << endl;
    sort(myVector.begin(), myVector.end(), greater<>());
    printVector(myVector);

    // Ascending sorting
    cout << "\n Array sorted in ascending order: " << endl;
    sort(myVector.begin(), myVector.end());
    printVector(myVector);

    
    // Binary search works JUST with vector completely sorted in ascending order (from the smallest to the bigghest).
    // Check if 17 exists, using Binary search.
    if (binary_search(myVector.begin(), myVector.end(), 17))
    {
        cout << " \n 17 exists" << endl;
    }
    else
    {
        cout << "Probably our binary search operation did not word properly" << endl;
    }
}

void printVector(vector<int> myVector)
{
    for (vector<int>::iterator it = myVector.begin(); it != myVector.end(); ++it)
        std::cout << ' ' << *it;
}