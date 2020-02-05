// Author: Davide Pollicino
// Date: 04/01/2019

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main ()
{
  vector<int> myVector;
  int n , a , b, c ;
  cin >> n;

  for (int i = 1; i<=n; i++)
  {
    cin >> a >> b >> c;
    myVector.push_back(a);
    myVector.push_back(b);
    myVector.push_back(c);
    sort(myVector.begin() , myVector.end());
    cout << "Case " << i << ": " << myVector[1] << endl;
    myVector.clear();
  }
  return 0;
}
