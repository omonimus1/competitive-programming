//https://www.codechef.com/IIITDS20/problems/MAY19F1
#include <bits/stdc++.h>
using namespace std;

/*
    WARNING: THIS SOLUTION GIVES 35/100
*/

void solver()
{
    long int n_of_queries ,n_of_games, element;
    cin >> n_of_games >> n_of_queries;
    long int single_query , max;
    vector<long int> games;
    vector<long int> queries; 
    // Store the scores of every games
    for(int j=0; j<n_of_games; j++)
    {
        cin >> element;
        games.push_back(element);
    }
    // Stores queries
    for(int j=0; j<n_of_queries; j++)
    {
        cin >> element;
        queries.push_back(element);
    }

    
  
    for(int i =0; i< n_of_queries; i++)
    {
        max=-1;
        single_query = queries[i];
        for(int i =0; i < single_query; i++)
        {
            if(games[i] > max)
                max = games[i];
        }
        cout << max <<endl;
    }   
}

int main()
{
    long int n_of_cases;
    cin >> n_of_cases;
    if(n_of_cases == 0)
        return 0; 
    else
    {
        for(int i=0; i< n_of_cases; i++)
            solver();
    }
    
   
    return 0; 
}