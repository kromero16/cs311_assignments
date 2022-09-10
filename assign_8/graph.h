//CS311 graph.h
//INSTRUCTION:
//undirected graph class - header file template
//You must complete the TODO parts and then complete graph.cpp. Delete "TODO" after you are done.
//You should always add comments to each function to describe its PURPOSE and PARAMETERS
#pragma once
#include <vector>
#include <list>
#include <iostream>
using namespace std;

struct Edge {
    int adj_vtx; // index of adjacent vertex.
    Edge* next; // the pointer to the next node in the list.
};

class Graph
{
public:
    int V;    // No. of vertices
    Edge** adj;
    void DFSUtil(int v, bool visited[]); // A function used by DFS
    Graph(int V); // Constructor
    ~Graph();
    void addEdge(int v, int w); // function to add an edge to graph
    void BFS(int s); // BFS traversal of the vertices reachable from s
    void DFS(int v); // DFS traversal of the vertices reachable from v
    bool hasCycle(); // Check whether the graph has cycles.
    bool hasCycleUtil(int v, bool visited[], int parent); //helper function used with hasCycle
    void displayAdj(Edge* ptr, int i); // Displays the adjacent nodes of an edge ptr at
};