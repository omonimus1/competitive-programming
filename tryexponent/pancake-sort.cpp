//  https://www.tryexponent.com/practice/prepare/pancake-sort
// https://en.wikipedia.org/wiki/Pancake_sorting
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void flip(vector<int>& arr, int upper_index) 
{
   std::reverse(arr.begin(), arr.begin() + upper_index+1);
}


void printList(vector<int>& a) 
{
   for (int i = 0; i < a.size(); i++) {
     std::cout << a[i] << ",";
   }
   std::cout << std::endl;
}

int GetIndexWithHighestValue(const vector<int>& arr,int  higest_accessible_index){
    int highest_index = 0; 
    for (int i=0; i < higest_accessible_index+1; i++){
        if (arr[highest_index] <  arr[i]){
            highest_index = i;
        }
    }
    return highest_index;
}

vector<int> pancakeSort( const vector<int>& arr ) 
{

  vector<int> a = arr;
  int lenght = a.size();
  int last_index = lenght-1;
  while (last_index >=1){

    int index_of_highest_value = GetIndexWithHighestValue(a, last_index);
    std::cout<< "index_of_highest_value: " << index_of_highest_value << std::endl;
    // ottenuto il valore dell' highest index.
    // faccio il film da 0 a index_of_highest_value, per potera il piu' valore in cima.
    flip(a, index_of_highest_value);
    printList(a);
    // portiamo il piu' valore, alla fine (last_index).
    flip(a, last_index);
    printList(a);
    // decrement last index
    last_index-=1;
  }
  return a;
}

int main() {
  return 0;
}
