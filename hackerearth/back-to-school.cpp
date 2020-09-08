// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/back-to-school-1/submissions/
#include <bits/stdc++.h>
using namespace std; 
  
int main() 
{ 
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int a, b, c;
	cin >> a>> b>> c;
	a = max(a, b);
	cout << max(a, c)<<endl; 
    return 0; 
} 