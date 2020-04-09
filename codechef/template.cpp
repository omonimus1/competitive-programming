#include <bits/stdc++.h>
using namespace std;


int main()
{
    // It makes the I/O faster
    // use cout << “\n”; instead endl
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    // number of test cases
    //int t=1;
    // Read number of test cases
    //cin >>t;
    
    string s = "CBACD";
    if(s.size() %2 == 0)
    {
        int p1 =s.size()/2 , p2 = (s.size()/2) -1;

        for(int i = p1; i< s.size(); i++)
        {
            if( (s[i] == 'A' && s[p2] == 'B') || (s[i] == 'B' && s[p2] == 'A') )
                s[i] = s[p2] = ' ';
            else if( (s[i] == 'C' && s[p2] == 'D') || (s[i] == 'D' && s[p2] == 'C') )
                s[i] = s[p2] = ' ';
            p2--;
        }  
    }
    
    else {
        for(int i=0; i< s.size()-1; i++)
        {
            if( (s[i] == 'A' && s[i+1] == 'B') || (s[i] == 'B' && s[i+1] == 'A') )
                s[i] = s[i+1] = ' ';
            else if ( (s[i] == 'C' && s[i+1] == 'D') || (s[i] == 'D' && s[i+1] == 'C'))
                s[i] = s[i+1] = ' ';
        }
   
    }
    string solution; 
  for(int i=0; i< s.size(); i++)
        {
            if(s[i] == ' ')
                continue; 
            solution.push_back(s[i]);
        }

    cout << solution;
 
    return 0;
}