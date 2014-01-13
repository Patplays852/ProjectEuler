/*
Lattice paths
Problem 15
Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.

         see projecteuler.net/problem=15 for picture.
How many such routes are there through a 20×20 grid?
*/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ProblemSolver.src
{
    class Problem015 : SolvedProblems
    {
        public override void Solve()
        {
            int gridSize = 20;
            ulong[,] grid = new ulong[gridSize + 1, gridSize + 1];

            //initialize the grid where grid[*][0] = 1 and [0][*] = 1
            for (int i = 0; i < gridSize + 1; i++)
            {
                grid[0, i] = 1;
                grid[i, 0] = 1;
            }


            //solve for the number of possible ways to get to a cell.

            for (int row = 1; row < gridSize + 1; row++)
            {
                for (int col = 1; col < gridSize + 1; col++)
                {
                    grid[row, col] = grid[row, col - 1] + grid[row - 1, col];
                }
            }

            EulerHelper.printAns(grid[gridSize, gridSize].ToString());

        }
    }
}
