// https://www.codechef.com/problems/FLOW001
#include <iostream> 

using namespace std;

int main() {
	// Read the number of test cases.
	int t;
	cin >> t;
	int a, b;
	while (t--) {
		// Read the input a, b
		cin >> a >> b; 

		// Compute the ans.
		int ans = a + b;
		cout << ans << endl;
	}

	return 0;
}
