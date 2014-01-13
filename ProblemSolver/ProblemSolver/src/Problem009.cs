/*Special Pythagorean triplet
Problem 9
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ProblemSolver.src
{
    class Problem009 : SolvedProblems
    {
        public override void Solve()
        {
            ulong a, b, c;

            for (a = 1000; a > 0; a--)
            {
                for (b = 1000; b > 0; b--)
                {
                    for (c = 1000; c > 0; c--)
                    {
                        if (a < b && b < c && a * a + b * b == c * c && a + b + c == 1000)
                        {
                            Console.WriteLine("a:  {0}, b:  {1}, c:  {2}", a, b, c);
                            //since there is only one, we're finsihed, output the product:

                            string ans = string.Format("{0}", a * b * c);

                            EulerHelper.printAns(ans);
                            
                        }
                    }
                }
            }
        }
    }
}
