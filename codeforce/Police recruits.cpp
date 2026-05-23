#include<iostream>
using namespace std;
int main()
{
	int n;cin>>n;
	int sum=0,c=0;
	int arr[n];
	for (int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for (int i=0;i<n;i++)
	{
		if (sum +arr[i] <0)
		{
			c++;
		}
		else
		{
			sum+=arr[i];
		}
	}
	cout<<c;
}
