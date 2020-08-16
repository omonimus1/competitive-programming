//https://hack.codingblocks.com/app/practice/3/1039/problem 
// Warning: This solution gives 66.77/100
#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(long int n)
{
	if(n <=1)
		return false; 
	for(int i =2; i <= sqrt(n); i++)
	{
		if(n% i == 0)
			return false; 
	}
	return true; 
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long int t, a, b, solution;
	cin >> t;
	int i; 

	while(t--)
	{
		solution = 0;
		cin >> a>> b;
		for(i =a; i <=b; i++)
		{
			if(isPrime(i))
				solution++;
		}
		cout <<solution<<endl; 
	}
	return 0;
}