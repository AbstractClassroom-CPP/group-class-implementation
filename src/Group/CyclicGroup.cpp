#include "Group/CyclicGroup.h"
#include <stdexcept>


CyclicGroup::CyclicGroup(int n) : Group(createTable(n), n) {
    if (n <= 0) {
        throw std::invalid_argument("Invalid group size.");
    }
}

int** CyclicGroup::createTable(int n) {
    int** table = new int*[n];
    for (int i = 0; i < n; ++i) {
        table[i] = new int[n];
        for (int j = 0; j < n; ++j) {
            table[i][j] = (i + j) % n;  // Modular addition for cyclic group
        }
    }
    return table;
}

