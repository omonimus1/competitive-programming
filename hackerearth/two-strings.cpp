//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/two-strings-4/submissions/
/* Given two strings of equal length, you have to tell whether they both strings are identical.

Two strings S1 and S2 are said to be identical, if any of the permutation of string S1 is equal to the string S2. */
#include <bits/stdc++.h>
using namespace std; 
  
int main() 
{ 
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int test_cases; 
    cin >> test_cases; 
    string word1, word2;
    while(test_cases--)
    {
        cin >> word1 >> word2;
        sort(word1.begin(), word1.end());
        sort(word2.begin(), word2.end());

        if(word1 == word2)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }
  
    return 0; 
} 