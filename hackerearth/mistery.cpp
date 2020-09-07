//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/mystery-30/submissions/
#include <bits/stdc++.h>
using namespace std; 
  
int main() 
{ 
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int number;
    // The number of test cases is unkown, so I iterate until the input is not finished
    while(cin >> number)
        cout << __builtin_popcount(number) <<endl;
  
    return 0; 
} 