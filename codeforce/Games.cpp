#include<iostream>
using namespace std;
int main()
{
	int ans=0;
	int n;cin>>n;
	int h[n],a[n];
	for(int k=0;k<n;k++)
	{
		cin>>h[k]>>a[k];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if (i!=j && h[i] == a[j]	)
			{
				++ans;
			}
		}
	}
	cout<<ans;
}
