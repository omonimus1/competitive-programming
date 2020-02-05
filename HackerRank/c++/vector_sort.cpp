#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Author: Davide Pollickno 
// Date: 05/02/2020

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N , element; // size of the Vector
    vector<int> myVector; 
    cin >> N; 
    for(int i =0; i<N; i++)
    {
        cin >> element;
        myVector.push_back(element);   
    }
    sort(myVector.begin() , myVector.end());
    for (int i =0; i<myVector.size(); i++)
    {
        cout<< myVector[i] << " ";
    }    
    return 0;
}
