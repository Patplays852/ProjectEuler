/*
Longest Collatz sequence
Problem 14
The following iterative sequence is defined for the set of positive integers:

n → n/2 (n is even)
n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:

13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.
*/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ProblemSolver.src
{
    class Problem014 : SolvedProblems
    {
        public override void Solve()
        {
            uint maxChainNum = 0;
            uint maxChain = 0;

            for (uint num = 13; num < 1000000; num++)
            {
                uint temp = num;
                uint chain = 1;

                while (temp != 1)
                {
                    chain++;

                    if (temp % 2 == 0)
                    {
                        temp /= 2;
                    }
                    else
                    {
                        temp = (temp * 3) + 1;
                    }
                }
                if (chain > maxChain)
                {
                    maxChainNum = num;
                    maxChain = chain;
                }
            }

            EulerHelper.printAns(maxChainNum.ToString());
        }
    }
}
