// https://hack.codingblocks.com/app/practice/1/929/problem
#include<iostream>
using namespace std;
int main() {
	long int n;
	cin >> n;
	string word= "";
	for(int i =1; i <= n; i++)
	{
		if(i % 2 != 0 || i <= 3)
		{
			for(int j= 0; j < i; j++)
			{
				cout<<1;
			}
			
		}
		else
		{
			for(int j= 0; j < i; j++)
			{
				if(j == 0 || j == i-1)
					cout<<1;
				else	
					cout <<0;
			}	
		}	
		cout<<endl; 
	}	
	return 0;
}