#include <bits/stdc++.h>
using namespace std;

string can_give_the_change()
{
    int n;
    cin >> n;
    int client[n];
    //for (int i=0; i<n; i++) cin >> client[i];
    int change = 0;

    int change_to_give=0;
    for(int i=0; i< n; i++)
    {
        change_to_give = client[i];
        change_to_give -=5;
        // We don't have enough money for change
        if(change_to_give > change)
            return "NO";        
        // Note is bigger than 5
        else if(change_to_give == 0)
            change += 5;
        else if(change_to_give == change)
        {
            change = 0;        
        }

        else if(change_to_give < change)
        {
            change -= change_to_give;
        }
    }
    return "YES";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // number of test cases
    int t;    
    cin >>t;
    
    while(t--)
    {
        cout<<can_give_the_change()<<endl;
    }
 
    return 0;
}