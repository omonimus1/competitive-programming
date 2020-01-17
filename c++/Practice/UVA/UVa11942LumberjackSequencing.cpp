// Author: Davide pOLLICINO
// Date: 05/01/2019
#include <iostream>
#include<vector>
using namespace std;

int main()
{
  int n , foreman_element;
  vector<int> foremen_vector;
  cin >> n;
  cout << "Lumberjacks:"<< endl;
  for (int a = 0; a < n; i++)
  {
    for (int i =0; i<10; i++)
    {
        cin >> foreman_element;
        foremen_vector.push_back(foreman_element);
    }
    //Check here if sorter or not
    if(is_sorted(foremen_vector.begin(), foremen_vector.end()))
    {
      cout <<"Ordered"<<endl;
    }
    else
    {
      cout <<"Unordered" <<endl;
    }
    foremen_vector.clear();
  }
  return 0;
}
