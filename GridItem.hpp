#ifndef GRIDITEM_HPP
#define GRIDITEM_HPP

#include <utility>

class GridItem {
private:
    int x, y, width, height;
    static int activeCount;

public:
    GridItem() : x(0), y(0), width(0), height(0) { ++activeCount; }
    GridItem(int x, int y, int width, int height) : x(x), y(y), width(width), height(height) { ++activeCount; }
    ~GridItem() { --activeCount; }

    void setCoordinates(int newX, int newY) {
        x = newX;
        y = newY;
    }

    std::pair<int, int> getCoordinates() const {
        return {x, y};
    }

    int getGridWidth() const {
        return width;
    }

    int getGridHeight() const {
        return height;
    }

    static int getActiveGridItemCount() {
        return activeCount;
    }
};

int GridItem::activeCount = 0;

#endif
