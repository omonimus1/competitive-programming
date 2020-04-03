#include <iostream>
using namespace std;

int main() {
    int number; 
    while(1)
    {
        cin >> number; 
        if(number == 42)
            break;
        else
            cout<< number<< endl; 
    }
	return 0;
}
