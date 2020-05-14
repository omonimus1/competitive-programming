//https://www.codechef.com/submit/CFRTEST
#include <bits/stdc++.h>
using namespace std;

int test_case()
{
    int f, d, result;
    cin >> f;
    vector<int>dates;
    for(int i=0; i<f ; i++)
    {
        cin >>d;
        // Stored dates
        dates.push_back(d);
    } 

    // sort the vector
    sort(dates.begin() ,dates.end());
    result = dates.size(); 
    for(int i =0; i< dates.size()-1; i++)
        if(dates[i] == dates[i+1])
            result--;


    return result; 
}

int main()
{
    // number of test cases
    int t, result=-1;
    // Read number of test cases
    cin >>t;
    for(int i =0; i<t; i++)
    {
        result = test_case();
        cout << result <<endl;
    }
    return 0;
}