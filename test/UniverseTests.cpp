#include <gtest/gtest.h>
#include "../src/Universe.hpp"

TEST(UniverseTest, ToggleCell) {
    std::vector<Ant> ants;
    Universe universe(10, 10, ants);

    EXPECT_FALSE(universe.isPainted(1, 1));
    universe.toggleCell(1, 1);
    EXPECT_TRUE(universe.isPainted(1, 1));
    universe.toggleCell(1, 1);
    EXPECT_FALSE(universe.isPainted(1, 1));
}

TEST(UniverseTest, TickWithAnt) {
    std::vector<Ant> ants = {Ant(0, 0, 1)}; // Один муравей, идет вправо
    Universe universe(10, 10, ants);

    universe.tick(1); // Один шаг
    EXPECT_TRUE(universe.isPainted(0, 0));  // Клетка (0, 0) закрашена
    EXPECT_EQ(universe.ants[0].x, 1);      // Муравей переместился вправо
    EXPECT_EQ(universe.ants[0].y, 0);
    EXPECT_EQ(universe.ants[0].direction, 2); // Повернул вниз (правая клетка не закрашена)
}

TEST(UniverseTest, ToroidalMovement) {
    std::vector<Ant> ants = {Ant(9, 9, 1)}; // Муравей в нижнем правом углу
    Universe universe(10, 10, ants);

    universe.tick(1); // Муравей шагнет вправо (цикл по краю)
    EXPECT_EQ(universe.ants[0].x, 0); // Переместился на другой край (тороидальное поле)
    EXPECT_EQ(universe.ants[0].y, 9); 
}
