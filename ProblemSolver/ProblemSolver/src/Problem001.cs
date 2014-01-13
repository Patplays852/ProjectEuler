/*
Multiples of 3 and 5
Problem 1
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;


namespace ProblemSolver.src
{
    class Problem001 : SolvedProblems
    {
        public override void Solve()
        {
            uint num = 1000;
            uint sum = 0;

            for (uint n = 3; n < num; n++)
            {
                if (n % 3 == 0 || n % 5 == 0)
                {
                    sum += n;
                }
            }
            EulerHelper.printAns(sum.ToString());
        }
    }
}
