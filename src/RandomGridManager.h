#pragma once

#include "gridManager.h"

class RandomGridManager :
        public GridManager {
private:
    void generateGrid();

public:
    RandomGridManager(int width, int height);

    ~RandomGridManager();

    std::vector<std::vector<int>> getGrid() override;
};

