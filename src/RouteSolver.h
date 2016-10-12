//
// Created by Martin on 11.10.2016.
//

#ifndef A_STAR_ROUTESOLVER_H
#define A_STAR_ROUTESOLVER_H


#include <vector>
#include "GridManager.h"

class RouteSolver {
private:
    GridManager gridManager;

public:
    RouteSolver(GridManager gridManager);

    virtual ~RouteSolver();

    virtual void solve() = 0;
};


#endif //A_STAR_ROUTESOLVER_H
