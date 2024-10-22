#include <gtest/gtest.h>
#include "../src/Ant.hpp"

TEST(AntTest, TurnRight) {
    Ant ant(0, 0, 1); // Направление вправо
    ant.turnRight();
    EXPECT_EQ(ant.direction, 2); // Теперь направление вниз
}

TEST(AntTest, TurnLeft) {
    Ant ant(0, 0, 1); // Направление вправо
    ant.turnLeft();
    EXPECT_EQ(ant.direction, 4); // Теперь направление вверх
}

TEST(AntTest, Move) {
    Ant ant(0, 0, 1); // Направление вправо
    ant.move(10, 10); // Поле 10x10
    EXPECT_EQ(ant.x, 1);
    EXPECT_EQ(ant.y, 0);

    ant.turnRight(); // Вниз
    ant.move(10, 10);
    EXPECT_EQ(ant.x, 1);
    EXPECT_EQ(ant.y, 1);
}
