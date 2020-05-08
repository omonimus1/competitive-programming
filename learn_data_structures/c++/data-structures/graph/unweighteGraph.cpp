/*
    Author: Davide Pollicno
    Date: 30/03/2020

    Summary: Represent an undirected and unweighted graph usign vectors.
*/

#include <bits/stdc++.h>
using namespace std;

// add an edges in an undirected graph
void addEdge(vector<int> adj[]  DFS(adj, V);
    return 0; , int u , int vertices_number)
{
    adj[u].push_back(vertices_number);
    adj[vertices_number].push_back(u);
}

// DFS of a graph from a given vertex u]
void DFSutil(int u , vector<int> adj[] , vector<bool> &visited)
{
    visited[u] = true;
    cout << u << " ";
    for(int i =0; i< adj[u].size(); i++)
        if(visited[adj[u][i]]  == false)
            DFSutil( adj[u][i] , adj , visited);
}


void DFS(vector<int> adj[] , int vertices_number)
{
    vector<bool> visited(vertices_number, false);
    for(int u =0; u< vertices_number; u++)
        if(visited[u] == false)
            DFSutil(u , adj , visited);
}

int main()
{
    int number_of_vertices = 5;

    vector<int> adj[number_of_vertices];
 // Vertex numbers should be from 0 to 4.
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj , 0 , 3);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    DFS(adj, number_of_vertices);
    return 0;
}

