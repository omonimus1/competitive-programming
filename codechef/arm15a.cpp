//https://www.codechef.com/submit/AMR15A
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >>t;
	
	int odd=0, even=0;
	int e;
	for(int i =0; i< t; i++)
	{
	    cin >> e;
	    if(e%2 == 0)
	        even++;
	    else
	        odd++;   
	}
	if(even > odd)
	    cout<<"READY FOR BATTLE"<<endl;
	else
	    cout<<"NOT READY"<<endl;
	return 0;
}
