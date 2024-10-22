#include <iostream>

class Ant {
public:
    int x, y;
    int direction; // 1 - вправо, 2 - вниз, 3 - влево, 4 - вверх

    Ant(int startX, int startY, int startDir)
        : x(startX), y(startY), direction(startDir) {}

    void turnRight() {
        direction = (direction % 4) + 1;
    }

    void turnLeft() {
        direction = (direction - 2 + 4) % 4 + 1;
    }

    void move(int width, int height) {
        switch (direction) {
            case 1: x = (x + 1) % width; break;  // вправо
            case 2: y = (y + 1) % height; break; // вниз
            case 3: x = (x - 1 + width) % width; break; // влево
            case 4: y = (y - 1 + height) % height; break; // вверх
        }
    }
};
