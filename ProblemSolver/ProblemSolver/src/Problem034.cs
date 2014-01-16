/*
Digit factorials
Problem 34
145 is a curious number, as 1! + 4! + 5! = 1 + 24 + 120 = 145.

Find the sum of all numbers which are equal to the sum of the factorial of their digits.

Note: as 1! = 1 and 2! = 2 are not sums they are not included.
*/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ProblemSolver.src
{
    class Problem034 : SolvedProblems
    {
        private int sumDigitFactorials(int n)
        {
            int sum = 0;
            while (n > 0)
            {
                int d = n % 10;
                n /= 10;
                sum += (int)EulerHelper.factorial(d);
            }
            return sum;
        }
        public override void Solve()
        {
            // We can establish an upper bound of the problem by figuring out that 9!*7 = 2540160 which is the upper limit. There is no possible higher value since 9!*8 also results in a 7 digit number. 
            int limit = 2540160;

            

            int sum = 0;
            for (int i = 3; i <= limit; i++)
            {
                if (i == sumDigitFactorials(i))
                {
                    sum += i;
                }
            }

            EulerHelper.printAns(sum.ToString());

        }
    }
}
