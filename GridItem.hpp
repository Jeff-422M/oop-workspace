#pragma once

class GridItem {
protected:
    int x, y;

public:
    GridItem(int x = 0, int y = 0) : x(x), y(y) {}

    virtual ~GridItem() {}

    int getX() const { return x; }
    int getY() const { return y; }
};

