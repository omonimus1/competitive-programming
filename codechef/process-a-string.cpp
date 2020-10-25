// https://www.codechef.com/problems/KOL15A
#include <bits/stdc++.h>

using namespace std;



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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test_cases;
    cin >> test_cases;
    string word;
    while(test_cases--)
    {
        cin >> word;
        cout << get_sum_digits(word)<<endl;
    }
    return 0;
}


 
