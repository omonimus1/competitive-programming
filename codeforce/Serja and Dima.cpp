#include<iostream>
using namespace std;
int main()
{
	int n;cin>>n;
	int s=0,d=0;
	int l=0,r=n-1;
	bool p=true;
	int arr[n];
	for (int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	while (l<=r)
	{
		if (arr[l] > arr[r])
		{ 
			if(p){
				s+=arr[l];
			}
			else
			{
				d+=arr[l];
			}
			l++;
		}
		else
		{
			if(p)
			{
				s+=arr[r];
			}
			else
			{
				d+=arr[r];
			}
			r--;
		}
		if (p)
		{
			p=false;
		}
		else
		{
			p=true;
		}
	}
	cout<<s<<" "<<d;
	
	
}
