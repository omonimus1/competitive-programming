// https://www.codechef.com/submit/CHN15A
#include <iostream>
using namespace std;

void solve_test()
{
    int n, k, current;
    cin >> n >> k;
    int arr[n];
    int i; 
    for(i=0; i < n; i++)    cin >> arr[i];
    int result = 0;
    for(i=0; i < n; i++)
    {
        current = arr[i] +k;
        if(current % 7 == 0)
            result++;
    }
    cout << result << endl;
}

int main() {
    int t;
    cin >> t; 
    while(t--)
        solve_test();
	return 0;
}
