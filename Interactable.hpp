#ifndef INTERACTABLE_HPP
#define INTERACTABLE_HPP

#include "GridItem.hpp"
#include "Robot.hpp"

enum class InteractableType { GOAL, OBSTACLE };

class Interactable : public GridItem {
private:
    static int activeInteractableCount;

public:
    Interactable(int x, int y, int width, int height) : GridItem(x, y, width, height) { activeInteractableCount++; }
    Interactable() : GridItem() { activeInteractableCount++; }
    virtual ~Interactable() { activeInteractableCount--; }

    static int getActiveInteractableCount() { return activeInteractableCount; }

    virtual bool interact(Robot* player) = 0;
    virtual InteractableType getType() const = 0;
};

int Interactable::activeInteractableCount = 0;

#endif

