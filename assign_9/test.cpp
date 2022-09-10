#include <iostream>
#include "graph.h"
/**
 * This file tests the implementation of a directed Graph data structure with dijkstras
 * 
 */
int main()
{
    cout << "Testing results:" << endl;
    //Testing adding edges
    Graph g(5);

    // testing adding directed graph with distance
    g.addEdgeDirected(0, 2, 1);
    g.addEdgeDirected(0, 1, 4);
    g.addEdgeDirected(1, 4, 4);
    g.addEdgeDirected(2, 1, 2);
    g.addEdgeDirected(2, 3, 4);
    g.addEdgeDirected(3, 4, 4);
    // displaying the directed graph
    cout << "Displaying the directed graph:" << endl;
    for (int i = 0; i < g.V; i++)
    {
        g.displayAdj(g.adj[i], i);
    }
    // Searches for a path from vertex 0 to 4
    cout << "Searching for a path from 0 to 4" << endl;
    g.search(0, 4);
    cout << "Searching for a path from 2 to 0" << endl;
    g.search(2, 0);
    //Finding the shortest distance with Dijkastra starting from vertex 0
    cout << "\nChecking the shortest path with Dijkstras from vertex 0:" << endl;
    g.dijkstra(0);
    //Finding the shortest distance with Dijkastra starting from vertex 2
    cout << "\nChecking the shortest path with Dijkstras from vertex 2:" << endl;
    g.dijkstra(2);

    return 0;
}