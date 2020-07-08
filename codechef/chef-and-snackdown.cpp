//https://www.codechef.com/problems/SNCKYEAR
#include <iostream>
using namespace std;

int main() 
{
    int test_cases;
    cin >> test_cases;
    int year;
    while(test_cases--)
    {
        cin >> year;
        // 2010, 2015, 2016, 2017 and 2019.
        if(year == 2010 ||  year == 2015 || year == 2016 || year == 2017 || year == 2019)
            cout <<"HOSTED"<<endl;
        else
            cout << "NOT HOSTED"<<endl;
    }
    
    return 0;
}