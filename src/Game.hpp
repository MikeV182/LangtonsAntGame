#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>

#include "Universe.hpp"

class Game {
public:
    Universe universe;

    Game(Universe u) : universe(u) {}

    void start() {
        std::string command;
        while (true) {
            std::cout << "Enter command (help for options): ";
            std::getline(std::cin, command);
            if (command == "exit") {
                std::cout << "Exiting the game.\n";
                break;
            } else if (command.substr(0, 4) == "dump") {
                std::string filename = command.substr(5);
                dump(filename);
            } else if (command.substr(0, 4) == "tick" || command[0] == 't') {
                int n = 1;
                if (command.size() > 4) {
                    n = std::stoi(command.substr(5));
                }
                universe.tick(n);
                universe.print();
            } else if (command == "help") {
                printHelp();
            } else {
                std::cout << "Unknown command. Type 'help' for the list of available commands.\n";
            }
        }
    }

    void dump(const std::string& filename) {
        std::cout << "Saving universe to " << filename << "...\n";
        // Реализация сохранения состояния в файл
    }

    void printHelp() {
        std::cout << "Commands:\n";
        std::cout << "  dump <filename>  - save the universe to a file\n";
        std::cout << "  tick <n> or t <n> - calculate n iterations and print the result\n";
        std::cout << "  exit            - exit the game\n";
        std::cout << "  help            - show this help message\n";
    }
};

#endif
