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
    //graph.buildGraph();
    //graph.findShortestPath(sourceNode, targetNode);
    graph.Root = new GraphNode(1); // create root node with value 1

    // add nodes and edges to the graph
    graph.Root->Add(2, 3); // add node with value 2 and edge with value 3
    graph.Root->Add(3, 2); // add node with value 3 and edge with value 2
    graph.Root->GetShortest(graph.Root->Edges)->Add(4, 1); // add node with value 4 and edge with value 1

    // traverse the graph to verify nodes and edges
    GraphNode* node = graph.Root;
    while (node) {
        std::cout << "Node value: " << node->Value << std::endl;
        for (auto edge : node->Edges) {
            std::cout << "  Edge value: " << edge->Value << std::endl;
            GraphNode* otherNode = edge->Other(node);
            std::cout << "  Connected node value: " << otherNode->Value << std::endl;
        }
        node = node->GetShortest(node->Edges);
    }

    // Find the shortest path between two nodes
    int sourceNode, targetNode;
    cout << "Enter source node: ";
    cin >> sourceNode;
    cout << "Enter target node: ";
    cin >> targetNode;

    // Render the graph
    Renderer renderer;
    renderer.renderGraph(graph);

    return 0;
}