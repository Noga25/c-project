#include "InputHandler.h"
#include <nlohmann/json.hpp>
#include <fstream>
#include <iostream>

Graph InputHandler::readGraphFromFile(const std::string&& filePath) {
    Graph graph;

    std::ifstream file(filePath);
    std::string line;
    nlohmann::json jsonData;

    if (!file) {
        std::cerr << "Error: unable to open file " << filePath << std::endl;
        return graph;
    }

    else if (file.is_open()) {
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }
        file.close();
    }
    else {
        std::cerr << "Error opening file!" << std::endl;
    }

    file.close();

    return graph;
}
