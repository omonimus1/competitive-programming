// https://www.codechef.com/problems/TSORT
#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int n , number;
    cin >>n;
    
    vector<int>elements;
    for(int i=0; i<n;i++)
    {
        cin >> number;
        elements.push_back(number);
    }

    sort(elements.begin() , elements.end());
    for(int i=0; i< elements.size();i++)
    {
        cout <<elements[i]<<endl;
    }
}