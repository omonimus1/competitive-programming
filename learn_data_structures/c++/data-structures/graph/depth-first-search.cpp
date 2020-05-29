#include <bits/stdc++.h>
using namespace std;

// Class used to represet the graoh

class Graph
{
    int V; // N. of vertices

    list<int> *adj; // Pointer to an array containg adjacnecy list

    void DFSUtil(int V, bool visited[]);

    public:
        Graph(int V);

        void addEdge(int V, int w);

        void DFS(int V);
};

Graph:: Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}

void Graph::DFSUtil(int v, bool visited[])
{
    // Set current node as visited 
    visited[v] = true;
    // Print current node
    cout << v << " ";

    // Recurr to all the adjent vertices
    list<int>::iterator i;
    for(i = adj[v].begin(); i != adj[v].end(); ++i)
    {
        if(!visited[*i])
            DFSUtil(*i , visited);
    }
}

// DFS traversal 
void Graph:: DFS(int v)
{
    bool *visited = new bool[v];
    for(int i =0; i< v; i++)
        visited[i] = false;
    
    // Call recursive helper function
    DFSUtil(v, visited);
}

// Driver code
int main()
{
    // Greate Graph object with 4 vertices
    Graph g(4);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,3);

    cout << "DFS "<<endl;
    // Run the DFS algorithm starting from the vertice 2
    g.DFS(2);

    return 0;
}


