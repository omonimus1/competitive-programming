## Graph

Is a non/linear data structure consisting of nodes and edges. The nodes are also called vertices and the edges are lines
or arcs that connect any two nodes in the graph.

### Formal Definition of a graph
A Graph consists of a finite set of vertices(or nodes) and set of Edges which connect a pair of nodes.
![grpah](../images/graph.png)

### kind of Graphs

* **Undirected Graph** :order of the vertices in the pairs does not matter.
* **Directed Graph**: order of the vertices matter. Graphically we use arrows for the arcs between vertices.
An arrow from u to v id drawn only if 
(u,v) is in the Edge set.
* **Cycling Graph**:A cyclic graph is a directed graph with at least one cycle. 
A cycle is a path along the directed edges from a vertex to itself. The vertex labeled graph above as several cycles. One of them is 2 � 4 � 5 � 7 � 6 � 2
* **Weighted Graph**: is a labelled graph where the label is usually used for arithmetic operators.
* **Directed acyclic graph**: graphically present with arrows that indicates a path between an edge a to and edge b. As the
name suggest, it does not contains and cycle / loop.


### Graph representations

Two are the most commonly used representations of a graph.
1. Adjacency Matrix
2. Adjacency List

* [Source - Grpah representation Geeks for Geeks](https://www.geeksforgeeks.org/graph-and-its-representations/)
```
// A utility function to add an edge in an 
// undirected graph. 
void addEdge(vector<int> adj[], int u, int v) 
{ 
    adj[u].push_back(v);  
} 
  
// A utility function to print the adjacency list 
// representation of graph 
void printGraph(vector<int> adj[], int V) 
{ 
    for (int i = 0; i < V; ++i) 
    { 
        cout << "\n Adjacency list of vertex "
             << i << "\n head "; 
        for (auto x : adj[v]) 
           cout << "-> " << x; 
        printf("\n"); 
    } 
}

int sum_of_depency(vector<int>adj[], int V)
{
    int sum = 0; 
    //  Sum the size at each vector's index
    for(int i=0; i < V; i++)
        sum += adj[i].size();
    
    return sum;
}

// Driver code 
int main() 
{ 
    // V: Number of vertex. 
    int V = 5; 
    vector<int> adj[V]; 
    addEdge(adj, 0, 1); 
    addEdge(adj, 0, 4); 
    addEdge(adj, 1, 2); 
    addEdge(adj, 1, 3); 
    addEdge(adj, 1, 4); 
    addEdge(adj, 2, 3); 
    addEdge(adj, 3, 4); 
    printGraph(adj, V); 
    return 0; 
} 
```

## Depency Graph

A depency graph is a directed graph representing dependencies of several objects towards each other. If it possible to derive an evaluation order or theabsence of an evaluation order that repspects the given dependencies from the dependency graph.

![Depency example](../../images/depency.png)

In a Graph we use the array of visited to avoid to process again the same node more than one time considering that in the graph there could be cycles. 

* [BFT: Breath First search](https://www.geeksforgeeks.org/breadth-first-search-or-bfs-for-a-graph/)

In the mathematical theory of directed graphs, a graph is said to be strongly connected if every vertex is reachable from every other vertex. The strongly connected components of an arbitrary directed graph form a partition into subgraphs that are themselves strongly connected.

Bipartite graph: is a graph whise vertices can be diided into two djoint and indepent sets U and V such that every dege connects a vertex in U t oone in V. Vertex set U and V are usually claled the parts of the graph. 

## Depth First Seach or DFS

Depth first Traversarst Traversal of  a tree. 
It is used for:
1. FOr a weighted graph, DFS traverls poduces the minmum spanning tree and all pair shorted tree.
2. Detect cycle in a graph
3. Path finding: 
4. Check if a graph is bipartirte.
5. Find strongly connected components. 
6. Solve puzzles with only one solution. 