#include "Graph.h"
#include <string>
#include <vector>

struct Edge {
    int target_id;
    int value;
};

struct Node {
    int id;
    std::vector<Edge> edges;

    Node(int id) : id(id) {}
};

Graph::Graph()
{
}

void Graph::buildGraph() {
}

void Graph::findShortestPath(int sourceNode, int targetNode) {
}