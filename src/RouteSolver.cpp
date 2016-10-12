//
// Created by Martin on 11.10.2016.
//

#include "RouteSolver.h"

RouteSolver::RouteSolver(GridManager *gridManager)
        : gridManager(gridManager) {
}

RouteSolver::~RouteSolver() {
    delete gridManager;
}
