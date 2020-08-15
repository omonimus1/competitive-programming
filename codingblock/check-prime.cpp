//  https://hack.codingblocks.com/app/practice/3/919/problem
#include<iostream>
#include <math.h>

using namespace std; 

bool isPrime(long int number)
{
	for(int i=2; i <= sqrt(number); i++)
	{
		if(number % i ==0)
			return false;
	
	}
	return true;
}

int main() {

	long int n;
	cin>> n;
	if(isPrime(n))
		cout<<"Prime"<<endl;
	else
		cout <<"Not Prime"<<endl;

	return 0;
}