#ifndef DERIVED_HPP
#define DERIVED_HPP

#include "Interactable.hpp"

class Derived : public Interactable {
public:
    Derived(int x, int y, int width, int height) : Interactable(x, y, width, height) {}

    bool interact(Robot* player) override {
        return true;
    }

    InteractableType getType() const override {
        return InteractableType::OBSTACLE;
    }
};

#endif
