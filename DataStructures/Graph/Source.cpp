#include "Graph.h"
void main()
{
	Graph g(4);
    g.AddEdge(0, 1);
    g.AddEdge(0, 2);
    g.AddEdge(1, 2);
    g.AddEdge(2, 0);
    g.AddEdge(2, 3);
    g.AddEdge(3, 3);
	g.BFS(2);
	cout<<"DFS"<<endl;
	g.DFS(2);
	}