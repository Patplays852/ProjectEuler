#include "Problem15.h"

#include <iostream>

Problem15::Problem15()
{
    //ctor
}

Problem15::~Problem15()
{
    //dtor
}


unsigned long long Problem15::Solve(int gridSize){

    unsigned long long grid[gridSize + 1][gridSize + 1];
    //initialize the grid where grid[*][0] = 1 and [0][*] = 1
    for (int i = 0; i < gridSize + 1; i++){
        grid[0][i] = 1;
        grid[i][0] = 1;
    }


    //solve for the number of possible ways to get to a cell.

    for(int row = 1; row < gridSize + 1; row++){
        for (int col = 1; col < gridSize + 1; col++){
            grid[row][col] = grid[row][col - 1] + grid[row - 1][col];
        }
    }

    return grid[gridSize][gridSize];
}
