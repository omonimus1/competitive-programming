// https://www.codechef.com/viewsolution/31269850
#include <iostream>
#include<vector>
using namespace std;

void solve_test_case()
{
    long int n, money_availability, customer_widthdraw;
    vector<int>client;

    // Read information about the single test case
    cin >> n >> money_availability;
    for (int i = 0; i < n; i++)
    {
        cin >> customer_widthdraw;
        client.push_back(customer_widthdraw);
    }

    for (int i = 0; i < n; i++)
    {
        // Case 1: NO money in the atm
        if (money_availability <= 0)
        {
            // Print 0 for the rest of costumer and stop the execution of the checks
            for (int a = i; a < n; a++)
                cout << '0';
            break;
        }

        //Case 2: There are enough money and the customer can get them
        else if ((money_availability - client[i]) >= 0)
        {
            //Give money to the customer and so subtract its widthdra from the ATM availability
            money_availability -= client[i];
            cout << '1';
        }

        // Case 3: The request is to high 
        else if (client[i] > money_availability)
        {
            cout << '0';
        }


    }

}

int main()
{
    // number of test cases
    int t = 1;
    // Read number of test cases
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve_test_case();
        cout << "\n";
    }
    return 0;
}