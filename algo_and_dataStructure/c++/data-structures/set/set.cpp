#include<iostream>
#include<set>
#include<iterator>

using namespace std; 

int main()
{
    set<int , greater<int>>mySet; 

    mySet.insert(33);
    mySet.insert(54);
    mySet.insert(11);
    mySet.insert(23);
    
    // printing the content of the set 
    set <int, greater <int> > :: iterator iter;
    for(iter = mySet.begin(); iter!= mySet.end(); ++iter)
        cout << *iter << " "; 
    cout <<endl;

    int target = 33;
    // Find returns end of iterator if target does not exists in the est, 
    //     else it returns the iterato to the target
    if(mySet.find(target) == mySet.end())
        cout << target << " does not exists in the set"<<endl;
    else
        cout <<target << " has been found in the set"<<endl;

    return 0;
}