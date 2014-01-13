/*
Power digit sum
Problem 16
215 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 21000?
*/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Numerics;

namespace ProblemSolver.src
{
    class Problem016 : SolvedProblems
    {
        public override void Solve()
        {
            BigInteger x = BigInteger.Pow(2, 1000);
            EulerHelper.printAns(EulerHelper.sumDigits(x.ToString()).ToString());
        }
    }
}
