#include "Group/Group.h"
#include "Group/CyclicGroup.h"
#include <iostream>


using namespace std;

int main() {
    try {
        CyclicGroup C12(12);
        CyclicGroup C2(2);
        CyclicGroup C3(3);
        CyclicGroup C4(4);
        CyclicGroup C6(6);

        Group G_2_2_3 = (C2 + C2) + C3;
        Group G_4_3 = C4 + C3;
        Group G_2_6 = C2 + C6;

        // create all possible isomorphic comparisons
        cout << "Is C12 isomorphic to C2+C2+C3? " << (C12 == G_2_2_3 ? "YES":"NO") << endl;
        cout << "Is C12 isomorphic to C4+C3? " << (C12 == G_4_3 ? "YES":"NO") << endl;
        cout << "Is C12 isomorphic to C2+C6? " << (C12 == G_2_6 ? "YES":"NO") << endl;
        cout << "Is C2+C2+C3 isomorphic to C4+C3? " << (G_2_2_3 == G_4_3 ? "YES":"NO") << endl;
        cout << "Is C2+C2+C3 isomorphic to C2+C6? " << (G_2_2_3 == G_2_6 ? "YES":"NO") << endl;
        cout << "Is C4+C3 isomorphic to C2+C6? " << (G_4_3 == G_2_6 ? "YES":"NO") << endl;





    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}