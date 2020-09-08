// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/i-am-easy/
#include <bits/stdc++.h>
using namespace std; 
  
int main() 
{ 
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int number; 
    cin >> number;
    for(int i =1; i <=10; i++)
        cout << number * i<<endl;
    return 0; 
} 