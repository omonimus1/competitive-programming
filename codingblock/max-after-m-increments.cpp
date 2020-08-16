// https://hack.codingblocks.com/app/dcb/315
#include <bits/stdc++.h>

using namespace std; 

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n, queries,a, b, k;
	cin >>n >> queries;
	vector<int> arr(n, 0); 
	while(queries--)
	{
		cin >> a >> b >>k;
		for(int i =a; i <=b; i++)
		{
			arr[i] +=k;

		}
	}

	int biggest = INT_MIN; 
	for(int i =0; i < n; i++)
	{
		if(biggest < arr[i])
			biggest =arr[i];
	}
	cout <<biggest<<endl; 

	return 0;
}