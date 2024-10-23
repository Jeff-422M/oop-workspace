#include <iostream>
#include "Robot.h"
#include "Goal.h"
#include "Obstacle.h"

int main() {
    Robot player(5, 5);

    Goal goal(2, 2);
    Obstacle obstacle(1, 0);

    std::cout << "Initial Health: " << player.getHealth() << std::endl;

    player.move(1, 0);
    if (obstacle.interact(&player)) {
        std::cout << "Robot hit the obstacle! Health: " << player.getHealth() << std::endl;
    }

    player.move(1, 2);
    if (goal.interact(&player)) {
        std::cout << "Goal reached!" << std::endl;
    } else {
        std::cout << "Goal not reached." << std::endl;
    }

    std::cout << "Active Interactable Count: " << Interactable::getActiveInteractableCount() << std::endl;

    return 0;
}

