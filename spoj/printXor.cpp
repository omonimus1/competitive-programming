#include <iostream>
using namespace std;

int get_xor(int a, int b)
{
	return a^b;
}

int main() {
	int a, b;
	// Read two numbers in input
	cin >> a >> b;
	cout <<get_xor(a,b)<<endl;
}