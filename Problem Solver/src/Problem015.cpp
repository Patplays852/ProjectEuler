#include "Problem015.h"

#include <iostream>.

using namespace std;

Problem015::Problem015()
{
    //ctor
}

Problem015::~Problem015()
{
    //dtor
}


void Problem015::Solve(){
    int gridSize = 20;
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

    cout << to_string(grid[gridSize][gridSize]) << endl;
}
