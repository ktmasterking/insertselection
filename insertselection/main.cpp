#include <iostream>
#include <vector>
#include <functional>
#include "sort.h"

int main() {
    std::vector<int> v = { 5, 3, 8, 1, 2 };

    selectionSort(v, std::less<int>());

    for (int x : v) {
        std::cout << x << " ";
    }

    return 0;
}
