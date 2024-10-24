#ifndef HELPER_HPP
#define HELPER_HPP

#include <cmath>
#include <utility>

class Helper {
public:
    static double euclideanDistance(const std::pair<int, int>& item1, const std::pair<int, int>& item2) {
        int dx = item2.first - item1.first;
        int dy = item2.second - item1.second;
        return std::sqrt(dx * dx + dy * dy);
    }
};

#endif
