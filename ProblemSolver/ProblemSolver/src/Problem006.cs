/*
Sum square difference
Problem 6
The sum of the squares of the first ten natural numbers is,

1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)^2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ProblemSolver.src
{
    class Problem006 : SolvedProblems
    {
        public override void Solve()
        {
            ulong sumOfSquares = 0;
            ulong squareOfSums = 0;

            for (ulong i = 1; i <= 100; i++)
            {
                sumOfSquares += i * i;
            }

            for (ulong i = 1; i <= 100; i++)
            {
                squareOfSums += i;
            }

            squareOfSums *= squareOfSums;

            ulong res = squareOfSums - sumOfSquares;

            EulerHelper.printAns(res.ToString());
        }
    }
}
