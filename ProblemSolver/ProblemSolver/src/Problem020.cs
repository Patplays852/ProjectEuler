/*
Factorial digit sum
Problem 20
n! means n × (n − 1) × ... × 3 × 2 × 1

For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,
and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.

Find the sum of the digits in the number 100!
*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Numerics;

namespace ProblemSolver.src
{
    class Problem020 : SolvedProblems
    {
        public override void Solve()
        {
            BigInteger ex = 1;

            for (int i = 99; i > 1; i--)
            {
                ex *= i;
            }

            EulerHelper.printAns(EulerHelper.sumDigits(ex.ToString()).ToString());
        }
    }
}
