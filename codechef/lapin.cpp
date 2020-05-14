// https://www.codechef.com/LRNDSA01/problems/LAPIN
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool is_lapindrome(string word)
{

    int half_size  = word.size()/2;
    int second_half_start, end_first_half;
    end_first_half = half_size-1;
    if(word.size() % 2 == 0)
        second_half_start = half_size;
    else
        second_half_start = half_size+1;
  
    string first_half,second_half;
    int i;
    for(i=0; i<= end_first_half; i++)
    {
        first_half.push_back(word[i]);
        second_half.push_back(word[second_half_start]);
        second_half_start++;
    }   
    
    sort(first_half.begin(), first_half.end());
    sort(second_half.begin(), second_half.end());
    for(i =0; i< first_half.size(); i++)
    {
        if(first_half[i] != second_half[i])
            return false;
    }
    return true;
}

int main()
{
    int test_cases;
    string word;
    cin >> test_cases;
    while(test_cases--)
    {
        cin >> word;
        if(is_lapindrome(word))
            cout<<"YES"<<endl;
        else
        {
            cout <<"NO"<<endl;
        }
        
    }
    return 0; 
}