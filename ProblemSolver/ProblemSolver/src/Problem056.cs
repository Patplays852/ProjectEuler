/*
Powerful digit sum
Problem 56
A googol (10100) is a massive number: one followed by one-hundred zeros; 100100 is almost unimaginably large: one followed by two-hundred zeros. Despite their size, the sum of the digits in each number is only 1.

Considering natural numbers of the form, ab, where a, b < 100, what is the maximum digital sum?
*/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Numerics;

namespace ProblemSolver.src
{
    class Problem056 : SolvedProblems
    {
        public override void Solve()
        {
            BigInteger max = 0;

            for (int a = 1; a < 100; a++)
            {
                for (int b = 1; b < 100; b++)
                {
                    if (EulerHelper.sumDigits(BigInteger.Pow(a, b).ToString()) > max)
                    {
                        max = EulerHelper.sumDigits(BigInteger.Pow(a, b).ToString());
                    }
                }
            }
            EulerHelper.printAns(max.ToString());
        }
    }
}
