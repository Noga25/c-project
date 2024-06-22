#ifndef GRAPH_H
#define GRAPH_H

#include <list>

class Edge;
class GraphNode;

class Edge {
public:
    int Value;
    GraphNode* A;
    GraphNode* B;

    Edge(GraphNode* a, GraphNode* b, int value);
    GraphNode* Other(GraphNode* self);
    void RemoveFromNodes();
    ~Edge();
};

class GraphNode {
public:
    int Value;
    std::list<Edge*> Edges;

    GraphNode(int value);
    void Add(int nodeValue, int edgeValue);
    GraphNode* GetShortest(std::list<Edge*> edgeList);
    ~GraphNode();
};

class Graph {
public:
    GraphNode* Root;

    Graph();
    ~Graph();
};

#endif 