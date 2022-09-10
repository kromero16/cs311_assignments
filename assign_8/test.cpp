#include <iostream>
#include "graph.h"
/**
 * This file tests the implementation of an undirected Graph data structure
 *
 */
int main()
{
    cout << "Testing results:" << endl;
    //Testing adding edges
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    //Displaying the vertices and connections
    cout << "Iterate through the graph to display the vertices that were added" << endl;
    for (int i = 0; i < g.V; i++)
    {
        g.displayAdj(g.adj[i], i);
    }
    cout << "testing BFS from 3" << endl;
    g.BFS(3);
    cout << "testing DFS from 3" << endl;
    g.DFS(3);

    cout << "testing BFS from 2" << endl;
    g.BFS(2);
    cout << "testing DFS from 4" << endl;
    g.DFS(4);
    Graph g1(5);
    g1.addEdge(1, 0);
    g1.addEdge(0, 2);
    g1.addEdge(2, 1);
    g1.addEdge(0, 3);
    g1.addEdge(3, 4);
    if (g1.hasCycle())
        cout << "Graph contains a cycle" << endl;
    else
        cout << "Graph does not contain a cycle" << endl;
    Graph g2(3);
    g2.addEdge(0, 1);
    g2.addEdge(1, 2);
    if (g2.hasCycle())
        cout << "Graph contains a cycle" << endl;
    else
        cout << "Graph does not contain a cycle" << endl;

    return 0;
}