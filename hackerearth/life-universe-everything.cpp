//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/life-the-universe-and-everything/submissions/
#include <bits/stdc++.h>
using namespace std; 
  
int main() 
{ 
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int number; 
    while(cin >> number)
    {
        if(number == 42)
            break;
        cout <<number <<endl; 
    }
    return 0; 
} 