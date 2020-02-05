// Author: Davide Pollicino
// Date: 09/01/2019
/*
  Summary: program that shows how to declare a map, add elements in it,
    check if a specific key exists or not, print the size of the map and print out
    the map.
*/
#include <iostream>
#include <map>

using namespace std;


int main ()
{
  map<int , int> my_map;

  // iF one key already exists, it will not be added in the map
  my_map.insert({1 , 11});
  my_map.insert({2 , 22});
  my_map.insert({3 , 33});
  my_map.insert({4 , 44});
  my_map.insert({5 , 55});


  // Find : used to check if a key exists or not
  // The auto keyword will allow to the compiler the datatype of search in compiling time
  auto search = my_map.find(2);
  if (search != my_map.end())
    cout << "FOUND " << search->first << " " << search ->second <<  endl;
  else
    cout <<"Not found" << endl;

  // prints the content of the map
   cout << "KEY\tELEMENT\n";
   for (auto itr = my_map.begin(); itr != my_map.end(); ++itr) {
       cout << itr->first << '\t' << itr->second << '\n';
   }

   // Print out the the size of a map
   cout << "Size: " << my_map.size() << endl;

  return 0;
}
