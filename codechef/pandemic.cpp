// https://www.codechef.com/APRIL20B/problems/COVIDLQ
#include <bits/stdc++.h>
using namespace std;

bool is_socia_distance_respected()
{
    int  queue_length;
    bool slot_state , social_distance_respected = false;
    vector<bool> people_queue; 

    // Read number of people that are staying in the queue
    cin>>queue_length;
    for(int j=0;  j< queue_length; j++)
    {
        cin >> slot_state;
        people_queue.push_back(slot_state);
    }


    if(queue_length < 7)
    {
        unsigned short int number_of_busy_slot = 0;
        for(int i =0; i< queue_length; i++)
        {
            if(people_queue[i] == true)
                number_of_busy_slot++;

            if(number_of_busy_slot >1)
                return false;
        }
        return true;
    }

    int last_busy_slot_position;
    for(int a=0; a< queue_length; a++)
    {
        if(people_queue[a] == true)
        {
            for(int b=a+1; b<a+6; b++)
                if(people_queue[b] == true)
                    return false;
        }

    }
    return true; 
}


int main()
{
    bool distance_check;

   int cases;
   cin >> cases;    
    for(int i =0; i< cases; i++)
    {
        distance_check = is_socia_distance_respected();
        if(distance_check)
            cout <<"YES"<<endl;
        else
            cout <<"NO"<<endl;       
    }
    return 0; 
}