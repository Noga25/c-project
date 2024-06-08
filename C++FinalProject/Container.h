#include "FileManager.h"

#pragma once
class Container
{
public:
    static void ReadFile(FileManager& fm) {
        fm.ReadFile();
    }

    static void ValidateFormatFile(FileManager& fm) {
        fm.ValidateFormatFile();
    }

    static void ValidateFileData(FileManager& fm) {
        fm.ValidateFileData();
    }

    static void buildgraph(FileManager& fm) {
        fm.buildgraph();
    }

    static void PrintData(FileManager& fm) {
        fm.PrintData();
    }

    /*std::cout << "Hello World!\n";

    FileManager fileManager;

    Container::ReadFile(fileManager);
    Container::ValidateFormatFile(fileManager);
    Container::ValidateFileData(fileManager);
    Container::buildgraph(fileManager);
    Container::PrintData(fileManager);

    return 0;*/
};

