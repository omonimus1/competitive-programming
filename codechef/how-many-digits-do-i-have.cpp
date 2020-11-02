// https://www.codechef.com/problems/HOWMANY
#include <iostream>
using namespace std;

void get_number_of_digits()
{
    int number;
    cin >> number;
    int number_digits = 0;
    while (number > 0)
    {
        number_digits++;
        number /= 10;
    }
    if (number_digits > 3)
        cout << "More than 3 digits" << endl;
    else
        cout << number_digits << endl;
}

int main() {

    get_number_of_digits();

    return 0;
}
