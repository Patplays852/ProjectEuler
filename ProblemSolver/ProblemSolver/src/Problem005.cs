/*
Smallest multiple
Problem 5
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
 */

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ProblemSolver.src
{
    class Problem005 : SolvedProblems
    {
        public override void Solve()
        {
            ulong ans = 22;
            bool div = false;

            do
            {
            notdiv:
                ans += 2;

                for (ulong i = 3; i <= 20; i++)
                {
                    if (ans % i != 0)
                    {
                        goto notdiv;
                    }
                }
                div = true;
            } while (!div);

            EulerHelper.printAns(ans.ToString());
        }
    }
}
