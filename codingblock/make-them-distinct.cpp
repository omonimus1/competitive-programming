//  https://hack.codingblocks.com/app/practice/3/27/problem
//  WARNING: This solution gives 69.23/100 Points
#include<iostream>

using namespace std; 


bool solve_test()
{
	long int n; 
	cin >> n;
	long int arr[n];
	for(int i =0; i < n; i++) cin >> arr[i];
	if(n==1) return true; 

	if(n == 2)
	{
		if(arr[0] == arr[1]) 
			return false;
		return true; 
	}

	for(int i =1; i < n-1; i++)
	{
		if(arr[i] == arr[i-1])
			swap(arr[i], arr[i+1]);
	}

	for(int i =0; i < n-1; i++)
	{
		if(arr[i] == arr[i+1])
			return false;
	}
	return true; 
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long int t; 
	cin >> t;
	while(t--)
	{
		if(solve_test())
			cout <<"YES"<<endl;
		else
			cout << "NO"<<endl;
	}
	return 0;
}