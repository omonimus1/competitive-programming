// https://www.codechef.com/problems/BROKENPHONE
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int repair = 0, newPhone = 0;

        cin >> repair >> newPhone;

        if (repair < newPhone)
        {
            cout << "REPAIR" << endl;
        }
        else if (newPhone < repair)
        {
            cout << "NEW PHONE" << endl;
        }
        else
        {
            cout << "ANY" << endl;
        }
    }
    return 0;
}