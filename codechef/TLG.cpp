// https://www.codechef.com/problems/TLG
#include <iostream>
using namespace std;

int main()
{
	int rounds;
	cin >> rounds;

	int P1[rounds] = {0};
	int P2[rounds] = {0};
	int lead = 0;
	int SumOne = 0;
	int SumTwo = 0;
	int winner;

	for (int i = 0; i < rounds; i++)
	{
		cin >> P1[i] >> P2[i];
		SumOne += P1[i];
		SumTwo += P2[i];
		if (SumOne > SumTwo)
		{

			if (SumOne - SumTwo > lead)
			{
				lead = SumOne - SumTwo;
				winner = 1;
			}
		}
		else
		{
			if (SumTwo - SumOne > lead)
			{
				lead = SumTwo - SumOne;
				winner = 2;
			}
		}
	}

	cout << winner << " " << lead;

	return 0;
}
