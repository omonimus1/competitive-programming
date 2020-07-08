// https://www.codechef.com/submit/DECINC
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if(n%4 == 0)
        n += 1;
    else
        n -= 1;
    cout <<n;
	return 0;
}

