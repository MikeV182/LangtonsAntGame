#include <gtest/gtest.h>
#include "../src/FileHandler.hpp"

TEST(FileHandlerTest, LoadUniverse) {
    // Создаем тестовый файл для проверки загрузки
    std::ofstream outfile("test_universe.txt");
    outfile << "#N Test Universe\n";
    outfile << "#S 5 5\n";
    outfile << "#A 1\n";
    outfile << "2 2 1\n";
    outfile << "1 1\n";
    outfile.close();

    Universe universe = FileHandler::loadUniverse("test_universe.txt");

    EXPECT_EQ(universe.width, 5);
    EXPECT_EQ(universe.height, 5);
    EXPECT_EQ(universe.ants.size(), 1);
    EXPECT_EQ(universe.ants[0].x, 2);
    EXPECT_EQ(universe.ants[0].y, 2);
    EXPECT_EQ(universe.ants[0].direction, 1);
    EXPECT_TRUE(universe.isPainted(1, 1));
}

TEST(FileHandlerTest, SaveUniverse) {
    std::vector<Ant> ants = {Ant(2, 2, 1)};
    Universe universe(5, 5, ants);
    universe.toggleCell(1, 1);

    FileHandler::saveUniverse(universe, "output_universe.txt");

    std::ifstream infile("output_universe.txt");
    std::string line;
    std::getline(infile, line);
    EXPECT_EQ(line, "#N My Universe");

    std::getline(infile, line);
    EXPECT_EQ(line, "#S 5 5");

    std::getline(infile, line);
    EXPECT_EQ(line, "#A 1");

    std::getline(infile, line);
    EXPECT_EQ(line, "2 2 1");

    std::getline(infile, line);
    EXPECT_EQ(line, "1 1");

    infile.close();
}
