#ifndef GAME_HPP
#define GAME_HPP

#include "Robot.hpp"
#include "Goal.hpp"
#include "Obstacle.hpp"
#include "GameState.hpp"
#include <vector>
#include <iostream>
#include <iomanip>

class Game {
private:
    Robot player;
    Goal goal;
    std::vector<Obstacle> obstacles;
    GameState state;
    int width, height;

public:
    Game(int width, int height, const std::vector<std::pair<int, int>>& obstacleCoordinates)
    : player(width, height), goal(width-1, height-1), width(width), height(height), state(GameState::PLAYING) {
        for (auto& coord : obstacleCoordinates) {
            obstacles.emplace_back(coord.first, coord.second, width, height);
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
        if (state != GameState::PLAYING) return;

        if (player.move(dx, dy)) {
            for (auto& obstacle : obstacles) {
                if (obstacle.interact(&player)) {
                    state = player.getHealth() <= 0 ? GameState::LOSE : GameState::PLAYING;
                }
            }
            auto [px, py] = player.getCoordinates();
            auto [gx, gy] = goal.getCoordinates();
            if (px == gx && py == gy) state = GameState::WIN;
        }
    }

    void printGrid() {
        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++) {
                if (x == player.getCoordinates().first && y == player.getCoordinates().second) {
                    std::cout << 'P';
                } else if (x == goal.getCoordinates().first && y == goal.getCoordinates().second) {
                    std::cout << 'G';
                } else {
                    bool isObstacle = false;
                    for (auto& obstacle : obstacles) {
                        if (x == obstacle.getCoordinates().first && y == obstacle.getCoordinates().second) {
                            std::cout << 'O';
                            isObstacle = true;
                            break;
                        }
                    }
                    if (!isObstacle) std::cout << '_';
                }
            }
            std::cout << std::endl;
        }
    }
};

#endif
