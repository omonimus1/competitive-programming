//  https://www.codechef.com/problems/CHEFSTR1
#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long int test_cases;
    cin >> test_cases;
    long int result, guitar_string, smallest, biggest;
    while(test_cases--)
    {   // Number of guitar strings
        
        result = 0;
        cin >> guitar_string;
        long int arr[guitar_string];
        long int i;
        for(i =0; i < guitar_string; i++)
            cin >> arr[i];
            
        for(i =0; i < guitar_string-1; i++)
        {
            if(arr[i] == arr[i+1])
                continue;
            else
            {
                smallest = min(arr[i], arr[i+1]);
                biggest = max(arr[i], arr[i+1]);
                result += (biggest-smallest)-1;  
            }

        }
        cout << result<<endl;
    }
	return 0;
}