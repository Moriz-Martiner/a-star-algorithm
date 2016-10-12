#ifndef A_STAR_GRID_MANAGER_H
#define A_STAR_GRID_MANAGER_H

#include <vector>

using namespace std;

class GridManager {
protected:
    const int EMPTY = 0;
    const int WALL = 1;
    const int ACTIVE = 2;
    const int FOUND_WAY = 3;

    vector<vector<int>> grid;
public:
    GridManager(int width, int height);

    virtual ~GridManager();

    void setField(int x, int y, int value);

    virtual vector<vector<int>> getGrid() = 0;

    void render();
};

#endif