// https://www.codechef.com/problems/KOL15A
#include<string>
#include <iostream>
#include <stdlib.h>
#include <ctype.h>

using namespace std;

// const int basic_digits[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

int  get_sum_digits(string word)
{
    // Case 1 : string is empty
    if(word.size() == 0)
        return 0; 
    // Case 2: string is NOT empty
    int sum = 0;
    for(int i=0; i < word.size(); i++)
    {
        cout << "sum is: "<<sum<<endl;
        cout << "single char: "<<word[i]<<endl;
        if(isdigit(word[i]))
        {
            // 49: is the ASCI Value of 1
            sum += (int)word[i] - 48;
        }
    }
    return sum; 

}

int main()
{
    int test_cases=1;
    cin >> test_cases;
    string word;
    while(test_cases--)
    {
        cin >> word;
        cout << get_sum_digits(word)<<endl;
    }
    return 0;
}


 
