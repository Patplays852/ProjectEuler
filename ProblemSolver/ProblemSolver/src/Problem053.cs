/*
Combinatoric selections
Problem 53
There are exactly ten ways of selecting three from five, 12345:

123, 124, 125, 134, 135, 145, 234, 235, 245, and 345

In combinatorics, we use the notation, 5C3 = 10.

In general,

nCr =	
n!
r!(n−r)!
,where r ≤ n, n! = n×(n−1)×...×3×2×1, and 0! = 1.
It is not until n = 23, that a value exceeds one-million: 23C10 = 1144066.

How many, not necessarily distinct, values of  nCr, for 1 ≤ n ≤ 100, are greater than one-million?
*/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Numerics;

namespace ProblemSolver.src
{
    class Problem053 : SolvedProblems
    {
        private BigInteger combinations(BigInteger n, BigInteger r)
        {
            return ((EulerHelper.factorial(n)) / (EulerHelper.factorial(r) * EulerHelper.factorial(n - r)));
        }

        public override void Solve()
        {
            int counter = 0;

            for (BigInteger n = 1; n <= 100; n++)
            {
                for (BigInteger r = 1; r < n; r++)
                {
                    if (combinations(n, r) > 1000000)
                    {
                        counter++;
                    }
                }
                   
            }
            EulerHelper.printAns(counter.ToString());
        }
    }
}
