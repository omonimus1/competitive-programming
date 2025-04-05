#include<iostream>
using namespace std;
int main()
{
	int n;cin>>n;
	int arr[n];
	int temp;
	for (int k=0;k<n;k++)
	{
		cin>>arr[k];
	}
	for(int i = 0;i<n;i++)
	{
		for (int j = i+1;j<n;j++)
		{
			if(arr[j] <arr[i] )
			{
				temp=arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for ( int k=0;k<n;k++)
	{
		cout<<arr[k]<<" ";
	}
	
	
}
