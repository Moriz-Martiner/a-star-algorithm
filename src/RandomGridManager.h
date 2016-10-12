#ifndef A_STAR_RANDOM_GRID_MANAGER_H
#define A_STAR_RANDOM_GRID_MANAGER_H

#include "GridManager.h"

class RandomGridManager :
        public GridManager {
private:
    void generateGrid();

public:
    RandomGridManager(int width, int height);

    ~RandomGridManager();

    std::vector<std::vector<int>> getGrid() override;
};

#endif