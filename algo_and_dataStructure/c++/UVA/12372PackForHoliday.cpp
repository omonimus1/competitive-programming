// Author: Davide Pollicino
// Date: 04/02/1999

#include <iostream>

using namespace std;

int main ()
{
  int n , l , w, h;
  cin >> n;
  for (int i =1 ; i<=n ; i++)
  {
    cin >> l >> w >> h;
    if (l > 20 || w > 20 || h > 20)
      cout << "Case " << i << ": bad"<<endl;
    else
      cout << "Case " << i << ": good"<<endl;
  }
  return 0;
}
