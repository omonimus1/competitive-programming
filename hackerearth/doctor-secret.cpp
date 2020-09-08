// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/doctors-secret/
#include <bits/stdc++.h>
using namespace std; 
  
int main() 
{ 
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int lenght_name, number_of_pages;
    cin >>lenght_name >> number_of_pages;
    if(lenght_name <= 23 && number_of_pages >=500 && number_of_pages <=1000)
    {
        cout << "Take Medicine"<<endl;
    }
    else
        cout << "Don't take Medicine" <<endl; 
    return 0; 
} 