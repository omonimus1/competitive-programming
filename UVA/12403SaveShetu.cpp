// Author: Davide Pollicino
// Date: 04/01/2019

#include <iostream>
using namespace std;

int main()
{
  int n, totatAumount=0 , valuetoAdd = 0;
  string word;
  cin >> n;
  for (int i=0; i < n; i++)
  {
    cin >> word;
    if( word == "report")
      cout <<totatAumount<< endl;
    else
    {
      cin >> valuetoAdd;
      totatAumount+= valuetoAdd;
    }
  }
    return 0;
}
