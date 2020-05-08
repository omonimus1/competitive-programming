#include <bits/stdc++.h>
using namespace std;

void more_than_one_occurrency()
{
    vector<string>vett;
    string word; 
    int index; 
    while(cin >> word && word != '')
        cin >> word;
        vett.push_back(word);
    }
 
    for(int i=0; i< vett.size(); i++)
    {
        index = i; 
        word = vett[i];
        for(int j =0; j<= vett.size(); j++)
        {
            if(j != index && vett[j] == word)
            {
                vett.erase(remove(vett.begin() , vett.end() , word));
            }
        }
    }
    
    for(int i =0; i< vett.size(); i++)
        cout << vett[i] << " " << endl;
}

int main()
{
    int tests = 1;
    //cin >> tests; 
    for(int i =0; i< tests; i++)
    {
        more_than_one_occurrency();
    }
   
    return 0; 
}