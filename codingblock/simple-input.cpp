//  https://hack.codingblocks.com/app/practice/3/206/problem
#include<iostream>

using namespace std;

int main() {
	long int number;
	int sum=0;
	while(true)
	{
		cin >> number;
		sum += number;
		if(sum < 0)
			break;
		cout<< number<<endl;

	}
	return 0;
}