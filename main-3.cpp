#include "Game.hpp"

int main() {
    std::vector<std::pair<int, int>> obstacleCoords = {{2, 2}};
    Game game(4, 6, obstacleCoords);

    game.printGrid();

    game.movePlayer(0, 1);
    game.displayState();
    game.printGrid();

    game.movePlayer(0, 1);
    game.displayState();
    game.printGrid();

    game.movePlayer(2, 0);
    game.displayState();
    game.printGrid();

    game.movePlayer(1, 3);
    game.displayState();
    game.printGrid();

    return 0;
}
