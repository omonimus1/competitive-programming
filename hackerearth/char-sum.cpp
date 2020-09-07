// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/char-sum-2d3a6ab5/submissions/
#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <math.h>
using namespace std;


int main()
{
    char letter = 'a';
    int number = 1;
    string word;
    int result = 0;

    unordered_map<char, int>mp;
    while(letter != 'z')
    {
        mp[letter] = number;
        number +=1;
        letter+=1;
    }
    number +=1;
    mp['z'] = number; 

    cin >> word;
    for(int i =0; i < word.size(); i++)
        result += mp[word[i]];
    cout << result<<endl;
    return 0; 
}