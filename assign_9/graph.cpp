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
    for (int i = 0; i < V; i++)
    {
        delete[] adj[i];
    }
    delete[] adj;
}

// @brief depth first search utility function
void Graph::DFSUtil(int v, bool visited[])
{
    // current node v is visited 
    visited[v] = true;
    cout << v << " ";

    // recursively process all the adjacent vertices of the node 

    Edge* current = adj[v];
    while (current)
    {
        if (!visited[current->adj_vtx])
        {
            DFSUtil(current->adj_vtx, visited);
        }
        current = current->next;
    }
}

// @brief adds a new adjacent pointer to connect the indices between vertices at v and w
void Graph::addEdgeDirected(int v, int w, int d)
{
    // TODO: add the point to connect the vertices from v to w with distance d
}

// @brief adds a pointer to connect the vertices both from v to w and from w to v
void Graph::addEdgeUndirected(int v, int w, int d)
{
    addEdgeDirected(v, w, d);
    addEdgeDirected(w, v, d);
}

// @brief searches your graph using breadth first search starting at s
void Graph::BFS(int s)
{
    vector<bool> visited;
    visited.resize(V, false);
    list<int> queue;
    visited[s] = true;
    queue.push_back(s);
    while (!queue.empty())
    {
        s = queue.front();
        cout << s << " ";
        queue.pop_front();

        Edge* current = adj[s];
        while (current)
        {
            if (!visited[current->adj_vtx])
            {
                visited[current->adj_vtx] = true;
                queue.push_back(current->adj_vtx);
            }
            current = current->next;
        }
    }
    cout << endl;
}

// @brief searches your graph using depth first search starting at s
void Graph::DFS(int s)
{
    bool* visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;
    DFSUtil(s, visited);
    cout << endl;
}

// @brief a function that searches through your graph for cycles 
// @returns true if a cycle was found and false otherwise
bool Graph::hasCycle() {
    // Mark all the vertices as not
    // visited and not part of recursion
    // stack
    bool* visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    // Call the recursive helper
    // function to detect cycle in different
    // DFS trees
    for (int u = 0; u < V; u++) {
        // Don't recur for u if
        // it is already visited
        if (!visited[u])
            if (hasCycleUtil(u, visited, -1))
                return true;
    }
    return false;
}

// @brief a helper function that searches through your graph for cycles 
// and checks if points are visited
// @returns true if a cycle was found and false otherwise
bool Graph::hasCycleUtil(int v, bool visited[], int parent)
{
    // Mark the current node as visited
    visited[v] = true;

    // Recur for all the vertices
    // adjacent to this vertex
    Edge* current = adj[v];
    while (current)
    {
        if (!visited[current->adj_vtx])
        {
            if (hasCycleUtil(current->adj_vtx, visited, v))
                return true;
        }
        else if (current->adj_vtx != parent)
            return true;
        current = current->next;
    }
    return false;
}

// @brief displays the adjacent vertices of i for testing purposes
void Graph::displayAdj(Edge* ptr, int i)
{
    cout << i << ": ";
    while (ptr != nullptr) {
        cout << ptr->adj_vtx;
        if (ptr->next != nullptr)
            cout << "->";
        ptr = ptr->next;
    }
    cout << endl;
}

// @brief prints the shortest path from vertex v using Dijkstras algorithm using the distances between points
void Graph::dijkstra(int v)
{

    cout << "Vertex|\t" << "Distance[v]|\t" << "Previous vertex|\t" << "Visited" << endl;
    cout << "--------------------------------------------------------------------" << endl;
    cout << v << "\t" << "0" << "\t\tNone\t\t\t" << "True" << endl;
}

// @brief Searches to see if there is a path from v to w, prints the path if it exists
void Graph::search(int v, int w)
{
    // TODO look for a path from v to w. This doesn't need to be the least cost but can be.
}