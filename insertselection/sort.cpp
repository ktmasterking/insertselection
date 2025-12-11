#include "sort.h"

template <typename T, typename Compare>
void selectionSort(std::vector<T>& v, Compare comp) {
    int n = v.size();
    for (int i = 1; i < n; ++i) {
        T key = v[i];
        int j = i - 1;

        while (j >= 0 && comp(v[j], key)) {
            v[j + 1] = v[j];
            --j;
        }
        v[j + 1] = key;
    }
}

// Template instantiations (required when using templates in .cpp files)
template void selectionSort<int, std::less<int>>(std::vector<int>&, std::less<int>);
template void selectionSort<int, std::greater<int>>(std::vector<int>&, std::greater<int>);
