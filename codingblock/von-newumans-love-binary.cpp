// https://hack.codingblocks.com/app/practice/3/219/problem
#include<iostream>
#include<string>
#include <math.h>
using namespace std;

int solve_test(string binary)
{
	int result=0;
	int power  =1;
	for(int i= binary.size()-1; i >=0; i--)
	{
		if(binary[i] == '1')
			result += pow(2, power);
		power+=1;
	}
	return result/2;
}

int main() {
	long int n;
	cin >>n;

	string binary;
	while(n--)
	{
		cin >> binary;
		cout<< solve_test(binary) << endl;
	}

	return 0;
}