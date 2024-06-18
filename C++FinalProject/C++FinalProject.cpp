#include <iostream>
#include "Graph.h"
#include "InputHandler.h"
#include "Renderer.h"
using namespace std;

// Driver code
int main(void)
{
    // Read graph data from file (XML, JSON, CSV)
    InputHandler inputHandler;
    Graph graph = inputHandler.readGraphFromFile("C:\\Users\\nogal\\Documents\\Study\\C++ GraphReader\\JsonFiles\\Script1.json");

    // Build the graph
    graph.buildGraph();

    // Find the shortest path between two nodes
    int sourceNode, targetNode;
    cout << "Enter source node: ";
    cin >> sourceNode;
    cout << "Enter target node: ";
    cin >> targetNode;
    graph.findShortestPath(sourceNode, targetNode);

    // Render the graph
    Renderer renderer;
    renderer.renderGraph(graph);

    return 0;
}