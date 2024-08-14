#include <iostream>
#include <vector>
#include <algorithm>

int *readNumbers() {
    int *numbers = new int[10];
    for (int i = 0; i < 10; i++) {
        std::cin >> numbers[i];
    }
    return numbers;
}

int secondSmallestSum(int *numbers, int length) {
    std::vector<int> sums;

    for (int start = 0; start < length; ++start) {
        int sum = 0;
        for (int end = start; end < length; ++end) {
            sum += numbers[end];
            sums.push_back(sum);
        }
    }

    std::sort(sums.begin(), sums.end());

    auto uniqueEnd = std::unique(sums.begin(), sums.end());
    if (uniqueEnd == sums.begin() + 1) { 
        return sums[0];
    } else {
        return *(sums.begin() + 1);
    }
}
