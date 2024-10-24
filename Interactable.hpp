#ifndef INTERACTABLE_HPP
#define INTERACTABLE_HPP

#include "Robot.hpp"

enum class InteractableType { GOAL, OBSTACLE };

class Interactable : public GridItem {
public:
    Interactable(int x, int y, int width, int height) : GridItem(x, y, width, height) {}
    virtual ~Interactable() {}

    virtual bool interact(Robot* player) = 0;
    virtual InteractableType getType() const = 0;
};

#endif
