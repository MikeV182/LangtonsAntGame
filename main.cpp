#include <iostream>
#include <string>
#include <cstdlib>

#include "src/FileHandler.hpp"
#include "src/Game.hpp"

void parseArgs(int argc, char* argv[], int& iterations, std::string& inputFile, std::string& outputFile) {
    for (int i = 1; i < argc; ++i) {
        std::string arg = argv[i];
        if (arg == "-i" || arg == "--iterations") {
            if (i + 1 < argc) {
                iterations = std::atoi(argv[++i]);
            }
        } else if (arg == "-o" || arg == "--output") {
            if (i + 1 < argc) {
                outputFile = argv[++i];
            }
        } else {
            inputFile = arg;
        }
    }
}
 
int main(int argc, char* argv[]) {
    int iterations = 0;
    std::string inputFile;
    std::string outputFile;

    parseArgs(argc, argv, iterations, inputFile, outputFile);

    try {
        Universe universe = FileHandler::loadUniverse(inputFile);
        Game game(universe);

        if (iterations > 0 && !outputFile.empty()) {
            universe.tick(iterations);
            FileHandler::saveUniverse(universe, outputFile);
            std::cout << "Simulation completed and saved to " << outputFile << "\n";
        } else {
            game.start();
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << "\n";
        return 1;
    }

    return 0;
}
