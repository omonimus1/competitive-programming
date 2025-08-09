#include<iostream>
using namespace std;
int main()
{
	int n;cin>>n;
	int gp=1;
	string temp,value;
	for (int i =0;i<n;i++)
	{
		cin>>value;
		if (i ==0)
		{
			temp=value;
			continue;
		}
		if (temp[1] == value[0])
		{
			++gp;
		}
		temp=value;
		
	}
	cout<<gp;
}
