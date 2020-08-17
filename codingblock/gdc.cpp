// https://hack.codingblocks.com/app/practice/3/1040/problem

#include<iostream>

using namespace std; 
int gcd(long long int a,long long int b)
{
	if(a == 0)
		return b; 
	if(b == 0)
		return a; 

	if(a == b) 
		return a;
	
	if(a > b)
		return gcd(a-b, b);
	return gcd(a, b-a);
}

int main() {
	long long int a, b;
	cin >> a;
	cin >> b;
	cout << gcd(a, b) <<endl;

	return 0;
}