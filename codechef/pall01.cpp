//https://www.codechef.com/submit/PALL01
#include <iostream>
using namespace std;

bool is_palindrome()
{
    string number; 
    cin >> number; 
    int delimiter = number.size()-1; 
    for(int i =0; i< number.size()/2; i++)
    {
        if(number[i] != number[delimiter])
            return false; 
        delimiter--; 
    }
    return true; 
}

int main() {
	int t;
	cin >> t;
	bool palindrome_check;
	for(int i=0; i<t; i++)
	{
	    palindrome_check = is_palindrome();
	    if(palindrome_check)
	        cout <<"wins"<<endl;
	   else
	        cout <<"losses"<<endl;
	    
	}
	return 0;
}
