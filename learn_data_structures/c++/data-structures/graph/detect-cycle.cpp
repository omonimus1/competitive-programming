#include<bits/stdc++.h>

using namespace std; 

class Graph
{
    int v; 
    list<int> *adj;
    bool isCyclicUtil(int v, bool visited[], bool*rs);

    public:
        Graph(int v);
        void addEdge(int v, int e);
        bool isCyclic();
};

Graph:: Graph(int v)
{
    this->v = v;
    adj = new list<int>[v];
}

void Graph::addEdge(int v, int e)
{
    adj[v].push_back(e);
}

bool Graph::isCyclicUtil(int v, bool visited[], bool *recStack)
{
    if(visited[v] == false)
    {
        // Set our current node as visited 
        visited[v] = true;
        // Add current node in the Stack
        recStack[v] = true;

        list<int>::iterator i;
        for(i= adj[v].begin(); i != adj[v].end(); ++i)
        {
            if( !visited[*i] && isCyclicUtil(*i, visited, recStack))
                return true;
            else if(recStack[*i])
                return true; 
        }
    }
    // Remove vertex from recursion stack
    recStack[v] = false;
    return false;
}

bool Graph::isCyclic()
{
    // Set all vertices as not visited
    bool *visited = new bool[v];
    bool *recStack = new bool[v];
    for(int i =0; i < v; i++)
    {
        visited[i] = false;
        recStack[i] = false;
    }

    // Call recursively helper function 
    for(int i =0; i < v; i++)
    {
        if(isCyclicUtil(i, visited, recStack))
            return true;
        return false; 
    }
}

int main()
{
    Graph g(4);
    g.addEdge(0,1);
    g.addEdge(0,3);
    g.addEdge(1,2);
    g.addEdge(3,3);
    g.addEdge(2,0);
    g.addEdge(2,3);

    if(g.isCyclic())
        cout << "Graph contains cycles"<<endl;
    else
        cout << " Graph do not contains cycles"<<endl;

    return 0; 
}