#ifndef CYCLIC_GROUP_H
#define CYCLIC_GROUP_H

#include "Group.h"

class CyclicGroup : public Group {
public:
    explicit CyclicGroup(int n);

private:
    static int** createTable(int n);
};

#endif // CYCLIC_GROUP_H
