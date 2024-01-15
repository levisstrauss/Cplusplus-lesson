
#include "find.hpp"

namespace search {
    int find(int numbers[], int size, int target) {
        for (int i = 0; i < size; ++i) {
            if (numbers[i] == target) {
                return i;
            }
        }
        return -1;
    }
}
