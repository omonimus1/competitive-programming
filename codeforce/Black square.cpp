#include<iostream>
using namespace std;
int main()
{
	int sum=0,a=0,b=0,c=0,d=0;
	int arr[4];
	for (int i=0;i<4;i++)
	{
		cin>>arr[i];
	}
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		if (s[i] == '1')
		{
			a++;
		}
		else if ( s[i] == '2')
		{
			b++;
		}
		else if ( s[i] == '3')
		{
			c++;
		}
		else {
			d++;
		}
	}
	sum = (a*arr[0])+(b*arr[1])+(c*arr[2])+(d*arr[3]);
	cout<<sum;
}
