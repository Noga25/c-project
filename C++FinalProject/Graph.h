#ifndef GRAPH_H
#define GRAPH_H

class Graph {
public:
    Graph();
    void buildGraph();
    void findShortestPath(int sourceNode, int targetNode);
    // Other graph methods...

private:
    // Graph data structures (e.g. adjacency matrix, adjacency list)
    // ...
};

#endif // GRAPH_H