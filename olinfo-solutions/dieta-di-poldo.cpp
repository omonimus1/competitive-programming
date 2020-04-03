#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream in;
    int sandwich;
    vector<int> sandwich_list;
    in.open("input.txt");
    while(in >> sandwich)
    {
        sandwich_list.push_back(sandwich);
    }

    in.close();
    int record_sandwitches = -999;
    int counter = 0;  

    for(int i =0; i< sandwich_list.size()-1; i++)
    {

        if(sandwich_list[i] < sandwich_list[i+1])
        {
            counter++;
            continue;
        }
        else 
        {
            if(counter > record_sandwitches)
            {
                record_sandwitches = counter;
            }
            counter = 0;
        }
    }

    ofstream out;
    out.open("output.txt");
    out << record_sandwitches;
    out.close();
}