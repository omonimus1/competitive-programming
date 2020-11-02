#include <iostream>
using namespace std;

int get_first_digit(long int n)
{
    while (n >= 10)
        n /= 10;
    return n;
}

int get_last_digit(long int n)
{
    return n % 10;
}


int main() {
    unsigned int t;
    long int number;
    cin >> t;
    while (t--) {
        cin >> number;

        cout << get_first_digit(number) + get_last_digit(number) << endl;
    }
    return 0;
}
