#include<iostream>
using namespace std;
int main()
{
	long long n,b,d,s=0;
	int x=0;
	cin>>n>>b>>d;
	long long a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	for(int i=0;i<n;i++)
	{
		if( a[i] <=b)
		{
			s=s+a[i];
			if (s>d)
			{
				++x;
				s=0;
			}
		}
	}
	cout<<x;
	x=0;
	
	
}

