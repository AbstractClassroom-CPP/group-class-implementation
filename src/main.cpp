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


        if (C12 == (C2 + C2 + C3)) {
            cout << "Yes - Isomorphic" << endl;
        } else {
            cout << "Not Isomorphic" << endl;
        }

        // create all possible isomorphic comparisons   
        if (C12 == (C3 + C4)) {
            cout << "Yes - Isomorphic" << endl;
        } else {
            cout << "Not Isomorphic" << endl;
        }

        if (C12 == (C6 + C2)) {
            cout << "Yes - Isomorphic" << endl;
        } else {
            cout << "Not Isomorphic" << endl;
        }

        if (C12 == (C2 + C6)) {
            cout << "Yes - Isomorphic" << endl;
        } else {
            cout << "Not Isomorphic" << endl;
        }




    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}