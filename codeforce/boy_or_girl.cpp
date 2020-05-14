//http://codeforces.com/problemset/problem/236/A
#include <iostream>
using namespace std;

int count_number_distinct_chars(string word)
{
    bool is_it_unique;
    int counter=0; 
    int word_size = word.size(); 
    char single_character;
    for(int i =0; i< word_size; i++)
    {
        is_it_unique = true;
        single_character = word[i];
        for(int a = i+1; a < word_size; a++)
        {
            if(word[a] == single_character)
            {
                is_it_unique = false;
                break;
            }
        }
        if(is_it_unique)
            counter++;
    }
    return counter;
}

int main()
{
    const string CHAT ="CHAT WITH HER!";
    const string IGNORE = "IGNORE HIM!";
    string user_name; 
    cin >> user_name;

    // Get number of distinct characters
    int number_distinc_character = count_number_distinct_chars(user_name);
    if(number_distinc_character % 2 == 0)
        cout <<CHAT<<endl;
    else 
        cout <<IGNORE<<endl;
}
