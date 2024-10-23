#include "Game.hpp"

int main() {
    std::vector<std::pair<int, int>> obstacles = {{2, 2}, {1, 1}};
    Game game(4, 4, obstacles);

    game.printGrid();
    game.movePlayer(1, 0);
    game.displayState();
    game.printGrid();

    game.movePlayer(1, 1);
    game.displayState();
    game.printGrid();

    game.movePlayer(0, 1);
    game.displayState();
    game.printGrid();

    return 0;
}
