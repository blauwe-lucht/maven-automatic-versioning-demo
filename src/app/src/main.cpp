// main.cpp
#include <iostream>

// Declare external function from the library
void printLibraryVersion();

std::string getExecutableVersion() {
    // EXECUTABLE_VERSION will be passed to the compiler by maven.
    return "Executable version: " + std::string(EXECUTABLE_VERSION);
}

int main() {
    std::cout << getExecutableVersion() << std::endl;
    printLibraryVersion();
    return 0;
}
