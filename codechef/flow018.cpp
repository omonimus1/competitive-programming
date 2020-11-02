#include <iostream>
using namespace std;

void calculate_factorial()
{
	unsigned int number;
	unsigned int factorial = 1;
	cin >> number;
	for (int i = 1; i <= number; i++)
		factorial = factorial * i;

	cout << factorial << endl;
}


int main() {
	unsigned int test_cases;
	cin >> test_cases;
	for (int i = 0; i < test_cases; i++)
	{
		calculate_factorial();
	}
	return 0;
}
