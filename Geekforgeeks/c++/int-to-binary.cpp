#include <iostream>
using namespace std; 

void bin (unsigned number)
{
    if(number > 1)
        bin(number/2);
    cout<<number%2;
}

int main()
{
    bin(9);
    return 0; 
}