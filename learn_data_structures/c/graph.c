/*
 Implement a Direct graph using adjacency list
 Author: Davide Pollicino - Dt. Simon Wells -> Lecture of Algo e Data Structure
 Date: 23/03/2020
*/
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include <stdbool.h>



#define NUM_VERTICES 6

struct Node{
    int target;
    struct Node *next;
};

struct Edge
{
    int source; 
    int target; 
};

struct Graph 
{
    struct  Node *head[NUM_VERTICES];
};

struct Graph* create_graph(struct Edge edges[] , int num_edges)
{
    int i;
    struct Graph *graph = (struct Graph*) malloc(sizeof(struct Graph));

    for(i=0; i< NUM_VERTICES; i++)
        graph ->head[i] = NULL;

    for (i=0; i< num_edges; i++)
    {
        int source = edges[i].source;
        int target = edges[i].target;
        struct Node * new_node = (struct Node*) malloc(sizeof(struct Node));
        new_node ->target = target;
        new_node->next = graph->head[source];
        graph ->head[source] = new_node;
    }

    return graph;
}


void print_graph (struct Graph * graph)
{
    int i; 
    for (i= 0; i < NUM_VERTICES; i++)
    {
        struct Node *ptr = graph->head[i];
        while(ptr != NULL)
        {
            printf ("(%d -> %d)\t", i , ptr -> target );
            ptr = ptr -> next; 
        }  
        printf ("\n") ; 
    }
}


int main(void)
{
    struct Edge edges[] = 
    {
        { 0, 1 } , { 1, 2 }, { 2 , 0 }, { 2, 1 } , { 3, 2 }, { 4 , 5 }, { 5, 4 }
    };

    int n= sizeof(edges) / sizeof(edges[0]);

    struct Graph *graph = create_graph(edges , n);

    print_graph(graph);
    return 0; 
}