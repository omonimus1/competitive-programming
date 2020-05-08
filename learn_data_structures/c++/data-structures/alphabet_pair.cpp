#include <bits/stdc++.h>
using namespace std;

int main()
{
    int character_code=1;
    vector<pair<char,int>> myAlphabet;
    for(char  i='a'; i<= 'z'; i++)
    {
        myAlphabet.push_back(make_pair(i, character_code));
        character_code++; 
    }
    for(int i =0; i< myAlphabet.size(); i++)
    {
        cout << myAlphabet[i].first << " " << myAlphabet[i].second <<endl; 
    }
    return 0; 
}