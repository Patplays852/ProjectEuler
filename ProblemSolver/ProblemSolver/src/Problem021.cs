/*
Amicable numbers
Problem 21
Let d(n) be defined as the sum of proper divisors of n (numbers less than n which divide evenly into n).
If d(a) = b and d(b) = a, where a ≠ b, then a and b are an amicable pair and each of a and b are called amicable numbers.

For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110; therefore d(220) = 284. The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220.

Evaluate the sum of all the amicable numbers under 10000.
*/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Numerics;

namespace ProblemSolver.src
{
    class Problem021 : SolvedProblems
    {
        public int d(int x){
            List<BigInteger> divs = EulerHelper.properDivisors(x);
            divs.Remove(x);

            int sum = 0;
            foreach(BigInteger i in divs){
                sum += (int)i;
            }

            return sum;
        }
        public override void Solve()
        {
            List<int> aPairs = new List<int>();
            for (int a = 1; a < 10000; a++)
            {
                if (aPairs.Contains(a)) { continue; }

                int b = d(a);

                if (d(b) == a && a != b)
                {
                    aPairs.Add(a);
                    aPairs.Add(d(a));
                }
                
            }
            int sum = 0;
            foreach (int i in aPairs)
            {
                sum += i;
            }

            EulerHelper.printAns(sum.ToString());
        }
    }
}
