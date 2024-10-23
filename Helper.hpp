#ifndef HELPER_HPP
#define HELPER_HPP

#include <cmath>
#include <utility>

class Helper {
public:
    static double euclideanDistance(const std::pair<int, int>& item1, const std::pair<int, int>& item2) {
        int x1 = item1.first, y1 = item1.second;
        int x2 = item2.first, y2 = item2.second;
        return std::sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    }
};

#endif