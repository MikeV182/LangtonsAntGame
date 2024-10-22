#include <fstream>
#include <sstream>

#include "Universe.hpp"

class FileHandler {
public:
    static Universe loadUniverse(const std::string& filename) {
        std::ifstream infile(filename);
        if (!infile) {
            throw std::runtime_error("Cannot open file.");
        }

        std::string line;
        std::getline(infile, line); // считываем имя вселенной (не используем)

        std::getline(infile, line); // размеры поля
        std::istringstream iss(line);
        int width, height;
        iss >> width >> height;

        std::getline(infile, line); // количество муравьев
        iss.clear();
        iss.str(line);
        int num_ants;
        iss >> num_ants;

        std::vector<Ant> ants;
        for (int i = 0; i < num_ants; ++i) {
            std::getline(infile, line);
            iss.clear();
            iss.str(line);
            int x, y, dir;
            iss >> x >> y >> dir;
            ants.emplace_back(x, y, dir);
        }

        Universe universe(width, height, ants);

        while (std::getline(infile, line)) {
            iss.clear();
            iss.str(line);
            int x, y;
            iss >> x >> y;
            universe.painted_cells.insert({x, y});
        }

        return universe;
    }

    static void saveUniverse(const Universe& universe, const std::string& filename) {
        std::ofstream outfile(filename);
        if (!outfile) {
            throw std::runtime_error("Cannot open file for writing.");
        }

        outfile << "#N My Universe\n";
        outfile << "#S " << universe.width << " " << universe.height << "\n";
        outfile << "#A " << universe.ants.size() << "\n";
        for (const auto& ant : universe.ants) {
            outfile << ant.x << " " << ant.y << " " << ant.direction << "\n";
        }
        for (const auto& cell : universe.painted_cells) {
            outfile << cell.first << " " << cell.second << "\n";
        }
    }
};
