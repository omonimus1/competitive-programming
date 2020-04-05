//https://www.codechef.com/problems/LUCKFOUR
#include <iostream>
using namespace std;

int main()
{
    int t,counter;
    // Read number of test cases
    cin >> t;
    string number; 
    while(t--)
    {
        counter = 0; 
        // read number to analize
        cin >> number;
        for(int i =0; i< number.size(); i++)
         {   
             if (number[i] == '4')
                counter ++;
         }
         // Print number of '4' present in the number
         cout << counter << endl;
    }

    return 0; 
}
