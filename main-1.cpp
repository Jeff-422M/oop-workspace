#include "GridItem.hpp"
#include "Helper.hpp"
#include <iostream>

int main() {
    GridItem item1(0, 0, 4, 3), item2(3, 2, 4, 3);

    auto coords1 = item1.getCoordinates();
    auto coords2 = item2.getCoordinates();
    std::cout << "Item 1 coordinates: (" << coords1.first << ", " << coords1.second << ")" << std::endl;
    std::cout << "Item 2 coordinates: (" << coords2.first << ", " << coords2.second << ")" << std::endl;

    double distance = Helper::euclideanDistance(coords1, coords2);
    std::cout << "Euclidean distance between Item 1 and Item 2: " << distance << std::endl;

    std::cout << "Active GridItem instances: " << GridItem::getActiveGridItemCount() << std::endl;

    return 0;
}
