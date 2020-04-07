#include <iostream>
#include <iomanip>
using namespace std;
// TO TEST, it gives error
void test_case()
{
    unsigned int possible_withdraw = 4; 
    double balance = 120.00; 
    //cin >> possible_withdraw >> balance;
    cout.precision(2);
    if(possible_withdraw  < 5)
    {
        cout<<fixed << balance<<endl;
        return;
    }

    else if(possible_withdraw %5 != 0)
    {
        cout<<fixed << balance<<endl;
        return;
    }
    else if(possible_withdraw >balance)
    {
        cout << fixed << balance<<endl;
        return;
    }
    else
    {
        balance -= possible_withdraw;
        balance -= 0.50;
        cout<< fixed  << balance<<endl;
    
        
    }
}

int main()
{
    // number of test cases
    int t=1;
    // Read number of test cases
    //cin >>t;
    for(int i =0; i<t; i++)
    {
        test_case();
    }
    return 0;
}