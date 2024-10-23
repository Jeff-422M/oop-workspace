#pragma once
#include "GridItem.h"

enum InteractableType { GOAL, OBSTACLE };

class Robot;

class Interactable : public GridItem {
protected:
    static int activeInteractableCount;

public:
    Interactable(int x = 0, int y = 0) : GridItem(x, y) {
        ++activeInteractableCount;
    }

    virtual ~Interactable() {
        --activeInteractableCount;
    }

    static int getActiveInteractableCount() {
        return activeInteractableCount;
    }

    virtual bool interact(Robot* player) = 0;
    virtual InteractableType getType() const = 0;
};

int Interactable::activeInteractableCount = 0;
