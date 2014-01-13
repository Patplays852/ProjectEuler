/*
Largest palindrome product
Problem 4
A palindromic number reads the same both ways.The largest palindrome made from the product of two 2 - digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3 - digit numbers.
*/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ProblemSolver.src
{
    class Problem004 : SolvedProblems
    {
        public override void Solve()
        {
            ulong ret = 0;

            for (ulong x = 999; x > 0; x--)
            {
                for (ulong y = 999; y > 0; y--)
                {
                    ulong prod = x * y;
                    if (prod > ret && EulerHelper.isPalindrome(ret.ToString()))
                    {
                        ret = prod;
                    }
                }
            }
            EulerHelper.printAns(ret.ToString());
        }
    }
}
