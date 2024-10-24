#ifndef GRIDITEM_HPP
#define GRIDITEM_HPP

#include <utility>

class GridItem {
private:
    int x, y, width, height;
    static int activeInstances;

public:
    GridItem() : x(0), y(0), width(0), height(0) { ++activeInstances; }
    GridItem(int x, int y, int width, int height) : x(x), y(y), width(width), height(height) { ++activeInstances; }

    virtual ~GridItem() { --activeInstances; }

    void setCoordinates(int x, int y) {
        this->x = x;
        this->y = y;
    }

    std::pair<int, int> getCoordinates() const {
        return {x, y};
    }

    int getGridWidth() const { return width; }
    int getGridHeight() const { return height; }

    static int getActiveGridItemCount() { return activeInstances; }
};

int GridItem::activeInstances = 0;

#endif
