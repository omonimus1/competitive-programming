// https://hack.codingblocks.com/app/practice/6/1044/problem
#include<iostream>
using namespace std;

int main() {
	int n, target;
	cin >> n;
	int arr[n];
	for(int i =0; i < n; i++) cin >> arr[i];
	cin >> target;

	for(int i=0; i < n; i++)
	{
		if(target == arr[i])
		{
			cout<<i<<endl;
			break; 
		}
	}

	return 0;
}