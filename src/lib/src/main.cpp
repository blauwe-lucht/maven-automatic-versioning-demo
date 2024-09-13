// version_lib.cpp
#include <iostream>
#include <string>

std::string getLibraryVersion() {
    return "Library version: " + std::string(LIBRARY_VERSION);
}

void printLibraryVersion() {
    std::cout << getLibraryVersion() << std::endl;
}
