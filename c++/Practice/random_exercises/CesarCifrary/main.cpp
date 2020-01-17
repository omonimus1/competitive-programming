// Author: Davide Pollicino
// Date: 08 / 12/2019
/*
    Summary: Create a function  that encrypt text using the Caesar Cipher.
*/

#include <iostream>
#include <ctype.h>

using namespace std;


void encrypt(string text);
void print_encrypted_text(string text);


int main()
{
    // Test
    encrypt("aaBBcc");
    encrypt("Hello");
    encrypt("123Ciaone");
    encrypt("Z");
    encrypt(".23!cdfsjfbisibZw");

    return 0;
}


void encrypt(string text_to_encipher)
{
    // Encipher the text
    for (char& c : text_to_encipher)
    {
        // Add 3 to the ASCII value of our character  / number;
        // a will became d , 1 will became 4 etc..
        if (c =='x'|| c == 'X')
        {
           if(islower(c))
                c = 'a';
           else
                c = 'A';
        }
        if (c =='y'|| c == 'Y')
        {
           if(islower(c))
                c = 'b';
           else
                c = 'B';
        }
        if (c =='z'|| c == 'Z')
        {
           if(islower(c))
                c = 'c';
           else
                c = 'C';
        }
        else
        {
            c +=3;
        }
    }
    print_encrypted_text(text_to_encipher);
}


void print_encrypted_text(string tect_encrypted)
{
    // Print encrypted text
    for (char& c : tect_encrypted)
    {
        cout<<c;
    }
    cout << "\n";
}
