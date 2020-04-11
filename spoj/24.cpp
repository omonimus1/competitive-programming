#include <iostream>
using namespace std;

int get_factorial()
{
    int n; 
    cin >> n;
    if(n==0)
        return 1; 
    int fact=1;
    for(int i =1; i<=n; i++)
        fact = fact*i;
    return fact;  

    
}

int main() {
	
	int t; 
    cin >> t;
	while(t--)
	{
        cout << get_factorial()<<endl;
	}

	return 0;
}