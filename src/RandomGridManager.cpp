#include "RandomGridManager.h"
#include <ctime>
#include <cstdlib>


void RandomGridManager::generateGrid() {
    std::srand((unsigned int) std::time(nullptr));

    for (auto i = 0; i < grid.size(); ++i) {
        for (auto j = 0; j < grid[i].size(); ++j) {
            grid[i][j] = std::rand() % 2;
        }
    }
}

RandomGridManager::RandomGridManager(int width, int height)
        : GridManager(width, height) {
    generateGrid();
}


RandomGridManager::~RandomGridManager() {
}

std::vector<std::vector<int>> RandomGridManager::getGrid() {
    return grid;
}
