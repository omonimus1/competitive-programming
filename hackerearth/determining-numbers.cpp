// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/find-the-numbers-75f24949/submissions/
#include <iostream>
#include <unordered_map>
#include <string.h>
#include<vector>
#include <algorithm>
using namespace std;

int main()
{
    unordered_map<int, int>mp;
    int n, i, number;
    cin >> n;
    for(i=0; i < n; i++)
    {
        cin >> number;
        mp[number]++;
    }
    vector<int>solution; 

    for(auto x: mp)
    {
        if(x.second == 1)
            solution.push_back(x.first);
    }
    sort(solution.begin(), solution.end());
    for(int i =0; i < solution.size(); i++) 
        cout << solution[i] << " ";
    cout <<endl; 

    return 0; 
}
