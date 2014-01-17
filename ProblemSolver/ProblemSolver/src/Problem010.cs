/*
Summation of primes
Problem 10
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Numerics;

namespace ProblemSolver.src
{
    class Problem010 : SolvedProblems
    {
        public override void Solve()
        {
            Dictionary<BigInteger, BigInteger> plist = Primes.primeList(BigInteger.Parse("2000000"));
            ulong sum = 0;

            for (int i = 1; i < plist.Count; i++)
            {
                sum += (ulong)plist[i];
            }

            EulerHelper.printAns(sum.ToString());
        }
    }
}
