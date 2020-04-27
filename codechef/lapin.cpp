#include <bits/stdc++.h>
using namespace std; 

// Core of the program 
void solve_test()
{
    string word = "rotor";
    cin >>  word;
    unsigned long int word_size = word.size();
    unsigned long int start_second_half = word_size/2;
    unsigned long int end_first_half = start_second_half;
    // We ignore the middle character if the string size is odd
    if(word_size %2 !=0)
       start_second_half++;
       
    for(int i =0; i < end_first_half; i++)
    {
        if(word[i] != word[start_second_half])
        {
            cout<<"NO"<<endl;
            return;
        }
        start_second_half++;
    }
    cout<<"YES"<<endl;
} 

int main()
{
    // To have low I/O operations time cost
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned long int t; // t: used to store the number of test cases  
    cin >> t; 
    while(t--)
    {
        solve_test();
    }   
	return 0;
}