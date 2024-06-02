#pragma once
#include <iostream>

class FileManager
{
/// <summary>
/// Singelton
/// </summary>
public:
    static FileManager& getInstance()
    {
        if (!instance) {
            instance = new FileManager();
        }
        return *instance;
    }

    FileManager(const FileManager&) = delete;
    FileManager& operator=(const FileManager&) = delete;

private:
    FileManager()
    {
        std::cout << "Singleton instance created."
            << std::endl;
    }

    ~FileManager()
    {
        std::cout << "Singleton instance destroyed."
            << std::endl;
    }

    static FileManager* instance;

/// <summary>
/// regular methods which are being used
/// </summary>
public:
    //Read what written in the file
    void readFile(const std::string& filename)
    {
    }

    //Check the format of the file
    bool CheckFile(const std::string& filename)
    {
        std::cout
            << "Singleton reads files."
            << std::endl;
    }

    //Validate the data in the file
    bool validateData() 
    {
    }

    // Build the graph from the date that written
    void buildGraph()
    {
    }

    // Write the graph to a console
    void writeGraph(const std::string& filename)
    {
    }
};

// Initialize the static instance variable to nullptr
FileManager* FileManager::instance = nullptr;

int main()
{
    // Access the Singleton instance
    FileManager& singleton = FileManager::getInstance();

    return 0;
}

