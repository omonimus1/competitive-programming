// https://www.codechef.com/problems/VOWELTB

#include <iostream>
using namespace std;

int main()
{
     char character;
     cin >> character;
     if(character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U')
         cout << "Vowel"<<endl;
    else
    {
        cout << "Consonant"<<endl;
    }
    return 0;
}