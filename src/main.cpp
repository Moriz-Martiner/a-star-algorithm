#include <iostream>
#include "RandomGridManager.h"

using namespace std;

int main(int argc, char **argv) {
    RandomGridManager *gridManager = new RandomGridManager(40, 40);

    vector<vector<int>> grid = gridManager->getGrid();
}
