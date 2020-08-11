//  https://codeforces.com/problemset/problem/118/A
/*
deletes all the vowels,
inserts a character "." before each consonant,
replaces all uppercase consonants with corresponding lowercase ones.
*/

#include<iostream>
#include<string>
using namespace std;

bool isVocal(char letter)
{
    if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
        return true;
    return false; 
}


int main()
{
    string word, result ="";
    cin >> word;
    char single_letter;


    // Set all characters as lowercase
    int len = word.size();
    for(int i =0; i< len; i++)
    {
        single_letter = tolower(word[i]);
        // Remove vowel         
        if(isVocal(single_letter))
            continue;
        // if it is not a vowel push_it
        else
        {   //inserts a character "." before each consonant,
            result.push_back('.');
            result.push_back(single_letter);
        }

    }
    cout << result << endl;


    return 0; 
}