// Author: Davide Pollicino
// Date: 04/01/2020
#include <iostream>
#include <string>

using namespace std;

int main()
{
  string word = " ";
  int counter = 1;
  while(word != "*")
  {
       cin >> word;
       if (word == "Hajj")
          cout << "Case " << counter <<": " <<"Hajj-e-Akbar"<<endl;
        else if (word == "Umrah")
          cout << "Case " << counter<<": " <<"Hajj-e-Asghar"<<endl;
        ++counter;
    }
  return 0;
}
