#include <iostream>
#include "GridManager.h"

GridManager::GridManager(int width, int height)
: grid((unsigned int) width, vector<int>((unsigned int) height))
{
//    grid = std::vector((unsigned int) width, std::vector<int>((unsigned int) height));


//    vector<vector<int>> vec((unsigned int) width, vector<int>((unsigned int) height));
//
//    grid = vec;
}


GridManager::~GridManager() {
}

void GridManager::setField(int x, int y, int value) {
    if (grid.size() >= x || grid[x].size() >= y || grid[x][y] == WALL) {
        return;
    }

    grid[x][y] = value;
    render();
}

void GridManager::render() {
    //TODO: implement rendering

    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[0].size(); ++j) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

}
