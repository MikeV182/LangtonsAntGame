#ifndef UNIVERSE_H
#define UNIVERSE_H

#include <set>
#include <vector>
#include <iostream>
#include <algorithm>
#include "Ant.hpp"

class Universe {
public:
    int width, height;
    int iteration;
    std::vector<Ant> ants;
    std::set<std::pair<int, int>> painted_cells;

    Universe(int w, int h, const std::vector<Ant>& ants_list)
        : width(w), height(h), ants(ants_list), iteration(0) {}

    bool isPainted(int x, int y) const {
        return painted_cells.count({x, y}) > 0;
    }

    void toggleCell(int x, int y) {
        if (isPainted(x, y)) {
            painted_cells.erase({x, y});
        } else {
            painted_cells.insert({x, y});
        }
    }

    void tick(int n = 1) {
        for (int i = 0; i < n; ++i) {
            iteration++;
            for (Ant& ant : ants) {
                if (isPainted(ant.x, ant.y)) {
                    ant.turnLeft();
                } else {
                    ant.turnRight();
                }
                toggleCell(ant.x, ant.y);
                ant.move(width, height);
            }
        }
    }

    void print() const {
        std::cout << "Universe: " << iteration << " iterations\n";
        for (int y = 0; y < height; ++y) {
            for (int x = 0; x < width; ++x) {
                if (std::any_of(ants.cbegin(), ants.cend(), [&](const Ant& ant) {return ant.x == x && ant.y == y;})) {
                    std::cout << "A";
                } else if (isPainted(x, y)) {
                    std::cout << "#";
                } else {
                    std::cout << ".";
                }                
            }
            std::cout << "\n";
        }
    }
};

#endif
