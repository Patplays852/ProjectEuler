﻿/*
Even Fibonacci numbers
Problem 2
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;


namespace ProblemSolver.src
{
    class Problem002 : SolvedProblems
    {
        public override void Solve()
        {
            ulong maxFib = 4000000;
            ulong sum = 2;
            ulong fib1 = 1;
            ulong fib2 = 2;
            ulong fib3;
            do
            {
                fib3 = fib1 + fib2;
                if (fib3 % 2 == 0)
                {
                    sum += fib3;
                }
                fib1 = fib2;
                fib2 = fib3;
            } while (fib3 < maxFib);

            EulerHelper.printAns(sum.ToString());
        }
    }
}