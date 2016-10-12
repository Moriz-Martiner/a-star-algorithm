#include <iostream>
#include "RandomGridManager.h"
#include "Display.h"

using namespace std;

int main(int argc, char **argv) {
    RandomGridManager *gridManager = new RandomGridManager(40, 40);

    vector<vector<int>> grid = gridManager->getGrid();

    Display display(400, 420, "Hello World!");

    return 0;
}
