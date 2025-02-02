#include "Group/Group.h"

#include <iostream>
#include <stdexcept>
#include <algorithm> 

using namespace std;

Group::Group(int** table, int n) {
    if (n <= 0) {
        throw invalid_argument("Invalid group size.");
    }
    size = n;
    operationTable = new int*[size];
    for (int i = 0; i < size; ++i) {
        operationTable[i] = new int[size];
        for (int j = 0; j < size; ++j) {
            operationTable[i][j] = table[i][j];
        }
    }
    inverses = new int[size];

    verifyClosure();
    identity = findIdentity();
    findInverses();
    verifyAssociativity();
}

Group::Group(const Group& other) {
    size = other.size;
    operationTable = new int*[size];
    for (int i = 0; i < size; ++i) {
        operationTable[i] = new int[size];
        for (int j = 0; j < size; ++j) {
            operationTable[i][j] = other.operationTable[i][j];
        }
    }
    inverses = new int[size];
    for (int i = 0; i < size; ++i) {
        inverses[i] = other.inverses[i];
    }
    identity = other.identity;
}

Group::~Group() {
    for (int i = 0; i < size; ++i) {
        delete[] operationTable[i];
    }
    delete[] operationTable;
    delete[] inverses;
}

void Group::verifyClosure() {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (operationTable[i][j] < 0 || operationTable[i][j] >= size) {
                throw invalid_argument("Closure property violated.");
            }
        }
    }
}

int Group::findIdentity() {
    for (int e = 0; e < size; ++e) {
        bool isIdentity = true;
        for (int x = 0; x < size; ++x) {
            if (operationTable[e][x] != x || operationTable[x][e] != x) {
                isIdentity = false;
                break;
            }
        }
        if (isIdentity) return e;
    }
    throw invalid_argument("No identity element found.");
}

void Group::findInverses() {
    for (int x = 0; x < size; ++x) {
        bool hasInverse = false;
        for (int y = 0; y < size; ++y) {
            if (operationTable[x][y] == identity && operationTable[y][x] == identity) {
                inverses[x] = y;
                hasInverse = true;
                break;
            }
        }
        if (!hasInverse) throw invalid_argument("No inverse found for an element.");
    }
}

void Group::verifyAssociativity() {
    for (int a = 0; a < size; ++a) {
        for (int b = 0; b < size; ++b) {
            for (int c = 0; c < size; ++c) {
                if (operationTable[operationTable[a][b]][c] != operationTable[a][operationTable[b][c]]) {
                    throw invalid_argument("Associativity property violated.");
                }
            }
        }
    }
}

void Group::print() const {
    cout << "Group of order " << size << ":" << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << operationTable[i][j] << " ";
        }
        cout << endl;
    }
}

int Group::getIdentity() const {
    return identity;
}

int Group::getOrder() const {
    return size;

}

int Group::operate(int a, int b) const {
    return operationTable[a][b];
}




Group Group::operator+(const Group& other) const {
    int newSize = size * other.size;
    int** newTable = new int*[newSize];
    for (int i = 0; i < newSize; ++i) {
        newTable[i] = new int[newSize];
    }
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < other.size; ++j) {
            for (int k = 0; k < size; ++k) {
                for (int l = 0; l < other.size; ++l) {
                    int index1 = i * other.size + j;
                    int index2 = k * other.size + l;
                    int result1 = operate(i, k);
                    int result2 = other.operate(j, l);
                    newTable[index1][index2] = result1 * other.size + result2;
                }
            }
        }
    }

    return Group(newTable, newSize);
}

bool Group::operator==(const Group& other) const {
    if (size != other.size) return false;

    int* perm = new int[size];
    for (int i = 0; i < size; ++i) perm[i] = i;

    do {
        bool isIsomorphic = true;
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < size; ++j) {
                if (perm[operationTable[i][j]] != other.operationTable[perm[i]][perm[j]]) {
                    isIsomorphic = false;
                    break;
                }
            }
            if (!isIsomorphic) break;
        }
        if (isIsomorphic) return true;
    } while (next_permutation(perm, perm + size));

    return false;
}

bool Group::operator!=(const Group& other) const {
    return !(*this == other);
}


