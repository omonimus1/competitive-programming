// Source: GeeksForGeeks
#include<iostream>
#include <list>

using namespace std; 

class Graph
{
    // Number of vertices
    int v; 
    // Pointer to the array containing adjancency lists
    list<int> *adj;

    public:
        Graph(int v); // Constuctor

        void addEdge(int v, int e);

        void BST(int s);
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

void Graph::BST(int s)
{
    bool *visited = new bool[v];
    for(int i =0; i < v; i++)
        visited[i] = false;

    // Creade queue for BFS
    list<int> queue; 

    //  Set current node as visited and enqueue (Add it) in the queue
    visited[s] = true;
    queue.push_back(s);

    list<int>::iterator i; 

    while(!queue.empty())
    {
        s = queue.front();
        cout << s << " ";
        queue.pop_front();

        // Get all adjance tvertices of the dequed
        for(i = adj[s].begin(); i != adj[s].end(); i++)
        {
            if(!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
}

int main()
{
    // Create Graph object with 4 vertices
    Graph g(4);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(2,0);
    g.addEdge(2,3);
    g.addEdge(3,3);

    cout<< "Starting the BST"<<endl;

    g.BST(2);

    return 0;
}