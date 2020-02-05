// Author: Davide Pollicino
// Date: 04/01/2010
// 12289 - One-Two-Three
// To fixxxxx
#include <iostream>
#include <string>

using namespace std;

int main ()
{
  int n; // Number of words in input
  cin >> n;
  if (n <=0 )
      return 0;
  else
  {
    string word;
     for(int i= 0 ; i< n; i++)
     {
       cin >> word;
       if (word.length() == 5)
          cout << "3" << endl;
      else if (word.length() == 3)
      {
        if (word[0] == 't' || word[1] == 'w' || word[2] == 'o')
            cout << "2" << endl;
        else
            cout << "1" << endl;
      }
     }
  }
  return 0;
}
