// https://hack.codingblocks.com/app/practice/3/184/problem
#include<iostream>
#include<math.h>
using namespace std;


int main() {
	string binary;
	cin >> binary;
	int solution = 0;
	int power = 0;
	for(int i = binary.size()-1; i>=0; i--)
	{
		if(binary[i] == '1')
			solution += pow(2, power);
		power +=1;
	}
	cout << solution << endl; 
	return 0;
}