// https://hack.codingblocks.com/app/practice/3/853/problem
#include <bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	long int t, a, sum_odds, sum_even, single_digit;
	cin >> t;
	while(t--)
	{
		sum_odds = sum_even = 0;
		cin >> a;
		while(a >0)
		{
			single_digit = a%10;
			a /=10;
			if(single_digit % 2 == 0)
				sum_even += single_digit;
			else
				sum_odds += single_digit;
		}
		if(sum_even % 4 ==0 || sum_odds % 3 ==0)
			cout<< "Yes"<<endl;
		else
			cout<< "No" <<endl;
	}

	return 0;
}