// https://hack.codingblocks.com/app/practice/1/42/problem
#include<iostream>

using namespace std; 

int main() {
	char c;
	cin >> c;
	if( c >= 'a' && c <= 'z')
		cout <<"lowercase"<<endl;
	else if( c >= 'A' && c <= 'Z')
		cout << "UPPERCASE" <<endl;
	else	
		cout <<"Invalid"<<endl; 
	return 0;
}