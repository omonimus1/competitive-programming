// https://www.codechef.com/problems/MATCHES
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int n = 0; n < t; n++)
    {
        int array[10]={6,2,5,5,4,5,6,3,7,6};

        // for (int i = 0; i < 10; i++)
        // {
        //     cout<<i<<" - "<<array[i]<<endl;
        // }

        int x,y;
        cin>>x>>y;

        int sum =x+y;
        int sticks=0;

        while(sum>0)
        {
            int rem=sum%10;
            sticks+= array[rem];
            sum=sum/10;
        }

        cout<<sticks<<endl;
        

    }
        return 0;
    }
