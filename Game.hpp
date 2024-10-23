#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>
#include <vector>
#include <string>
#include "Robot.hpp"
#include "Goal.hpp"
#include "Obstacle.hpp"
#include "GameState.hpp"

class Game {
private:
    int width;
    int height;
    Robot player;
    Goal goal;
    std::vector<Obstacle> obstacles;
    GameState state;

public:
    Game(int width, int height, std::vector<std::pair<int, int>> obstacleCoordinates)
        : width(width), height(height), player(width, height), goal(width, height), state(GameState::PLAYING) {
        goal.setCoordinates(width - 1, height - 1);

        for (auto& coord : obstacleCoordinates) {
            if (coord.first != 0 || coord.second != 0 && coord.first != width - 1 || coord.second != height - 1) {
                obstacles.emplace_back(Obstacle(coord.first, coord.second, width, height));
            }
        }
    }

    bool displayState() {
        switch (state) {
            case GameState::WIN:
                std::cout << "You win!" << std::endl;
                return true;
            case GameState::LOSE:
                std::cout << "You lose :(" << std::endl;
                return true;
            case GameState::PLAYING:
                std::cout << "Game on" << std::endl;
                return false;
        }
        return false;
    }

    void movePlayer(int dx, int dy) {
        if (state == GameState::PLAYING) {
            if (player.move(dx, dy)) {
                for (auto& obstacle : obstacles) {
                    if (obstacle.interact(&player)) {
                        state = GameState::LOSE;
                        return;
                    }
                }
                if (goal.interact(&player)) {
                    state = GameState::WIN;
                }
            }
        }
    }

    void printGrid() {
        std::vector<std::string> grid(height, std::string(width, '_'));
        auto [px, py] = player.getCoordinates();

        grid[py][px] = 'P';

        auto [gx, gy] = goal.getCoordinates();
        grid[gy][gx] = 'G';

        for (const auto& obstacle : obstacles) {
            auto [ox, oy] = obstacle.getCoordinates();
            grid[oy][ox] = 'O';
        }

        for (const auto& line : grid) {
            std::cout << line << std::endl;
        }
    }
};

#endif
