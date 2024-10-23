#include <iostream>
#include "GridItem.hpp"
#include "Helper.hpp"

int main() {
    GridItem item1(0, 0, 4, 3);
    GridItem item2(3, 2, 4, 3);

    std::cout << "Initial coordinates of item1: (" << item1.getCoordinates().first << ", " << item1.getCoordinates().second << ")\n";
    std::cout << "Grid dimensions: " << item1.getGridWidth() << "x" << item1.getGridHeight() << "\n";
    std::cout << "Total active GridItems: " << GridItem::getActiveGridItemCount() << "\n";

    double distance = Helper::euclideanDistance(item1.getCoordinates(), item2.getCoordinates());
    std::cout << "Euclidean distance between item1 and item2: " << distance << std::endl;

    return 0;
}
