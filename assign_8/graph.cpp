#include "graph.h"

// @brief default constructor
Graph::Graph(int V)
{
    this->V = V;
    adj = new Edge * [V]();
    for (int i = 0; i < V; i++)
        adj[i] = nullptr;
}

// @brief destructor
Graph::~Graph()
{
    //TODO destructor to delete pointers
}

// @brief depth first search utility function
void Graph::DFSUtil(int v, bool visited[])
{
    //TODO check if vertices has been visited
    //TODO recursively search the graph
}

// @brief adds a new adjacent pointer to connect the indices between vertices at v and w
void Graph::addEdge(int v, int w)
{

    // TODO add edge pointer to connect your vertices at v and w
    // TODO new edge should be at the last value of the pointer
}

// @brief searches your graph using breadth first search starting at s
void Graph::BFS(int s)
{
    // TODO search your pointer at s for values that have not been visited previously
    // TODO a vector or list can be used to keep track of values to check
}

// @brief searches your graph using depth first search starting at s
void Graph::DFS(int s)
{
    // TODO handle visitation information and initalization and then hand off to DFS utility
}

// @brief a function that searches through your graph for cycles 
// @returns true if a cycle was found and false otherwise
bool Graph::hasCycle() {
    bool cycleFlag = false;
    // TODO iterate through your pointers to check for a cycle
    // TODO you will want to keep track of initial pointer and then send it to the hascycleutil function
    return cycleFlag;
}

// @brief a helper function that searches through your graph for cycles 
// and checks if points are visited
// @returns true if a cycle was found and false otherwise
bool Graph::hasCycleUtil(int v, bool visited[], int parent)
{
    // Searches the current adjacent vertices v recursively.
    // Keep track of vertices visited in the boolean array
}

// @brief displays the adjacent vertices of i for testing purposes
void Graph::displayAdj(Edge* ptr, int i)
{
    if (ptr == nullptr)
    {
        // nothing to display
    }
    else
    {
        while (ptr != nullptr) {
            cout << "(" << i << ", " << ptr->adj_vtx << ") ";
            ptr = ptr->next;
        }
        cout << endl;
    }
}