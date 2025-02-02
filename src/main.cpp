#include "Group/Group.h"
#include <iostream>


using namespace std;

int main() {
    try {
        int sizeZ2 = 2;
        int sizeZ3 = 3;

        // Cayley table for Z/2Z (addition mod 2)
        int** cayleyTableZ2 = new int*[sizeZ2];
        for (int i = 0; i < sizeZ2; ++i) {
            cayleyTableZ2[i] = new int[sizeZ2];
            for (int j = 0; j < sizeZ2; ++j) {
                cayleyTableZ2[i][j] = (i + j) % 2;
            }
        }

        // Cayley table for Z/3Z (addition mod 3)
        int** cayleyTableZ3 = new int*[sizeZ3];
        for (int i = 0; i < sizeZ3; ++i) {
            cayleyTableZ3[i] = new int[sizeZ3];
            for (int j = 0; j < sizeZ3; ++j) {
                cayleyTableZ3[i][j] = (i + j) % 3;
            }
        }

        int ** cayleyTableZ6 = new int*[6];
        for (int i = 0; i < 6; ++i) {
            cayleyTableZ6[i] = new int[6];
            for (int j = 0; j < 6; ++j) {
                cayleyTableZ6[i][j] = (i + j) % 6;
            }
        }

        // Create groups
        Group Z2(cayleyTableZ2, sizeZ2);
        Group Z3(cayleyTableZ3, sizeZ3);
        Group Z6(cayleyTableZ6, 6);

        cout<<(Z2==Z3)<<endl;
        cout<<(Z2==Z2)<<endl;
        cout<<(Z3==Z3)<<endl;

        // Clean up allocated tables
        for (int i = 0; i < sizeZ2; ++i) delete[] cayleyTableZ2[i];
        delete[] cayleyTableZ2;

        for (int i = 0; i < sizeZ3; ++i) delete[] cayleyTableZ3[i];
        delete[] cayleyTableZ3;

        // Direct sum
        Group Z2Z3 = Z2 + Z3;
        cout << "Direct sum of Z2 and Z3 is isomorphic to Z6: " << (Z2Z3 == Z6) << endl;

        cout << "Identity of Z2 ⊕ Z3: " << Z2Z3.getIdentity() << endl;
        cout << "Order of Z2 ⊕ Z3: " << Z2Z3.getOrder() << endl;

    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}