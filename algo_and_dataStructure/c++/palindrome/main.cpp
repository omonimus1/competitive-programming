#include <bits/stdc++.h>
bool isPalindrome(char my_string[]);
using namespace std;

int main()
{
    char string1[30];

    cout << "Enter a string: "; cin >> string1;

    if(isPalindrome(string1))
    {
        cout << string1 << " is a palindrome" << endl;
    }
    else
    {
       cout << string1 << " is not Palindrome" << endl;
    }
    // To avoid that the windows will be close atumatically;
    system("pause");
    // system("pausa") can be
}


bool isPalindrome(char my_string[])
{
    int lenght = strlen(my_string);
    for (int i =0; i< lenght; i++)
    {
        if(my_string[i] != my_string[lenght-i-1])
        {
            return false;
        }
    }
    return true;
}
