#include <gtest/gtest.h>
#include "../src/Game.hpp"

TEST(GameTest, TickCommand) {
    std::vector<Ant> ants = {Ant(0, 0, 1)};
    Universe universe(10, 10, ants);
    Game game(universe);

    game.universe.tick(3);
    EXPECT_EQ(game.universe.ants[0].x, 9); // Проверка перемещения муравья
    EXPECT_EQ(game.universe.ants[0].y, 0); // после 3 шагов
}
