/*
Champernowne's constant
Problem 40
An irrational decimal fraction is created by concatenating the positive integers:

0.123456789101112131415161718192021...

It can be seen that the 12th digit of the fractional part is 1.

If dn represents the nth digit of the fractional part, find the value of the following expression.

d1 × d10 × d100 × d1000 × d10000 × d100000 × d1000000
*/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ProblemSolver.src
{
    class Problem040 : SolvedProblems
    {
        public override void Solve()
        {
            StringBuilder strx = new StringBuilder();
            int i = 1;
            do{
                strx.Append(i);
                i++;
            }while(strx.Length < 1000000);

            string str = strx.ToString();

            int prod = Convert.ToInt32(str.Substring(0, 1)) *
                Convert.ToInt32(str.Substring(9, 1)) *
                Convert.ToInt32(str.Substring(99, 1)) *
                Convert.ToInt32(str.Substring(999, 1)) *
                Convert.ToInt32(str.Substring(9999, 1)) *
                Convert.ToInt32(str.Substring(99999, 1)) *
                Convert.ToInt32(str.Substring(999999, 1));

            EulerHelper.printAns(prod.ToString());


        }
    }
}
