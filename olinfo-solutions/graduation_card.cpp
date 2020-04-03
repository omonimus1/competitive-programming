#include <bits/stdc++.h>

using namespace std;

int main()
{
    int number_of_words;
    int number_of_chars_for_rows;

    cin >> number_of_words >> number_of_chars_for_rows;
    vector<string> words;

    // Read text to insert in graduation card
    for(int i =0; i< number_of_words; i++)
        cin >> words[i];

    string word_to_potentially_insert; 
    int counter; 
    for(int i <number_of_words;i++)
    {
        counter = 0; 
        word_to_potentially_insert = words[i];
        counter = word_to_potentially_insert.size() +1;
        if()
    }
    
}