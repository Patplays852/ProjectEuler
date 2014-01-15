/*
Self powers
Problem 48
The series, 11 + 22 + 33 + ... + 1010 = 10405071317.

Find the last ten digits of the series, 11 + 22 + 33 + ... + 10001000.
*/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Numerics;

namespace ProblemSolver.src
{
    class Problem048 : SolvedProblems
    {
        public override void Solve()
        {
            BigInteger num = 0;

            for (int i = 1; i <= 1000; i++)
            {
                num += BigInteger.Pow(i, i);
            }

            EulerHelper.printAns(num.ToString().Substring((num.ToString().Length - 10), 10).ToString());
        }
    }
}
