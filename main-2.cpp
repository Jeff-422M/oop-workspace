#include "Robot.hpp"
#include "Goal.hpp"
#include "Obstacle.hpp"
#include <iostream>

int main() {
    Robot player(5, 5);
    Goal goal(5, 5);
    Obstacle obstacle(2, 2, 5, 5);

    std::cout << "Initial health: " << player.getHealth() << std::endl;

    if (player.move(2, 2)) {
        std::cout << "Player moved to obstacle." << std::endl;
        if (obstacle.interact(&player)) {
            std::cout << "Interaction with obstacle: Health now " << player.getHealth() << std::endl;
        }
    }

    if (player.move(-2, -2)) {
        std::cout << "Player moved to origin." << std::endl;
        if (goal.interact(&player)) {
            std::cout << "Player has reached the goal!" << std::endl;
        } else {
            std::cout << "Player did not reach the goal." << std::endl;
        }
    }

    return 0;
}
