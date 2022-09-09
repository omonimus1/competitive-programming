// https://www.codechef.com/problems/PRACTICEPERF
#include <iostream>
using namespace std;

int main() {
    int count=0;
for (int i = 0; i < 4; i++) {
    int x ;
    cin>>x;
    if(x>=10)
    {
        count++;
    }
}
cout<<count;
	return 0;
}
