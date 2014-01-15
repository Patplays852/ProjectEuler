/*
The decimal number, 585 = 10010010012 (binary), is palindromic in both bases.

Find the sum of all numbers, less than one million, which are palindromic in base 10 and base 2.

(Please note that the palindromic number, in either base, may not include leading zeros.)
 */
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ProblemSolver.src
{
    class Problem036 : SolvedProblems
    {
        public override void Solve()
        {

            uint sum = 1;

            for (int i = 2; i < 1000000; i++)
            {
                if (EulerHelper.isPalindrome(i.ToString()) && EulerHelper.isPalindrome(BaseConverter.ToBase(i.ToString(), 10, 2).ToString()))
                {
                    sum += (uint)i;
                }
            }

            EulerHelper.printAns(sum.ToString());
        }
    }
}
