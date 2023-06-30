#include<stdio.h>

typedef struct node{
    int v;
    struct node *next;
}vertex;

typedef struct {
    int numVer;
    vertex *adjList[100];
}graph;

vertex* createNode(int v )
{
    vertex *newNode = (vertex*) malloc(sizeof(vertex));
    newNode->v = v;
    newNode->next = NULL;
    return newNode;
}

graph* createGraph(int numVer)
{
    graph *newGraph = (graph*) malloc(sizeof(graph));
    newGraph->numVer = numVer;
    for(int i = 0; i < numVer; i++)
    {
        newGraph->adjList[i] = NULL;
    }
    return newGraph;
}

void addEdge(int s, int d, graph * newGraph)
{
    //from source to destination (s to d)
    vertex *newNode = createNode(d);
    newNode->next = newGraph->adjList[s];

    //from destination to source (d to s)
}
