/**
 *  Author: Davide Pollicino
 *  Github: omonimus1
 * */
#include <iostream>
#include <deque>

using namespace std; 
  
void print_deque(deque <int> deq) 
{ 
    deque <int> :: iterator it; 
    for (it = deq.begin(); it != deq.end(); ++it) 
        cout << '\n' << *it; 
    cout << '\n'; 
} 
int main()
{
    deque <int> mydeque; 
    mydeque.push_back(89); 
    mydeque.push_front(77); 
    mydeque.push_back(1); 
    mydeque.push_front(34); 

    cout << "\n Element  mydeque.at(3) : " << mydeque.at(3); 
    cout << "\n Element at mydeque.front() : " << mydeque.front(); 
    cout << "\n Element at mydeque.back() : " <<mydeque.back(); 

    cout<<"Content of the deque:" <<endl;
    print_deque(mydeque);
}