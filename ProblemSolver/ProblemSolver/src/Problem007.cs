/*
10001st prime
Problem 7
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Numerics;

namespace ProblemSolver.src
{
    class Problem007 : SolvedProblems
    {
        public override void Solve()
        {
            List<BigInteger> p = Primes.primeList(BigInteger.Parse("1000000"));

            EulerHelper.printAns(p[10000].ToString());
        }
    }
}
