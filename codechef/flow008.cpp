#include <iostream>
using namespace std;

int main() {
	int t, e;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> e;
		if (e < 10)
			cout << "What an obedient servant you are!" << endl;
		else
			cout << "-1" << endl;
	}
	return 0;
}
