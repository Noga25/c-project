#include "graph.h"
#include <stdexcept>

Edge::Edge(GraphNode* a, GraphNode* b, int value) {
    A = a;
    B = b;
    Value = value;
    A->Edges.push_back(this);
    B->Edges.push_back(this);
}

GraphNode* Edge::Other(GraphNode* self) {
    if (A == self) {
        return B;
    }
    if (B == self) {
        return A;
    }
    else {
        throw std::invalid_argument("Not a node");
    }
}

void Edge::RemoveFromNodes() {
    if (A) {
        A->Edges.remove(this);
    }
    if (B) {
        B->Edges.remove(this);
    }
}

Edge::~Edge() {
    RemoveFromNodes();
}

GraphNode::GraphNode(int value) {
    Value = value;
}

void GraphNode::Add(int nodeValue, int edgeValue) {
    GraphNode* node = new GraphNode(nodeValue);
    Edge* edge = new Edge(this, node, edgeValue);
}

GraphNode* GraphNode::GetShortest(std::list<Edge*> edgeList) {
    if (edgeList.empty()) {
        throw std::invalid_argument("Edge list is empty");
    }

    Edge* shortestEdge = edgeList.front();
    for (auto edge : edgeList) {
        if (edge->Value < shortestEdge->Value) {
            shortestEdge = edge;
        }
    }
    return shortestEdge->Other(this);
}

GraphNode::~GraphNode() {
    for (auto edge : Edges) {
        edge->RemoveFromNodes();
        edge->A = nullptr;
        edge->B = nullptr;
    }
    for (auto edge : Edges) {
        delete edge;
    }
    Edges.clear();
}

Graph::Graph() {
    Root = nullptr;
}

Graph::~Graph() {
    if (Root) {
        delete Root;
    }
}
