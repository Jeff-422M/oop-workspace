#include <iostream>
#include "Robot.hpp"
#include "Goal.hpp"
#include "Obstacle.hpp"

int main() {
    Robot player(4, 3);
    Goal goal(4, 3);
    Obstacle obstacle(1, 1, 4, 3);
    player.move(3, 2);
    if (goal.interact(&player)) {
        std::cout << "Player reached the goal!" << std::endl;
    }

    player.move(-2, -1);
    if (obstacle.interact(&player)) {
        std::cout << "Player hit an obstacle and lost!" << std::endl;
    } else {
        std::cout << "Player's remaining health: " << player.getHealth() << std::endl;
    }

    return 0;
}
