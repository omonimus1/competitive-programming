//  https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/a-movement-1/submissions/
#include <bits/stdc++.h>
using namespace std; 
  
int main() 
{ 
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int number;
    cin >> number;

    if(number <= 5)
        cout << 1 <<endl;
    else
    {
        if(number %5 == 0)
            cout <<number/5<<endl; 
        else
        {
            int solution = 0;
            while(number >5)
            {
                number -=5;
                solution+=1;
            }
            cout<<solution +1<<endl; 
        }

    }
    
    
  
    return 0; 
} 