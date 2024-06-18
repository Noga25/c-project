#include <string>
#include "Graph.h"
#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

class InputHandler {
public:
    Graph readGraphFromFile(const std::string&& filePath);
    // Other input handling methods...

private:
    // Input handling data structures (e.g. file parser)
    // ...
};

#endif // INPUTHANDLER_H

