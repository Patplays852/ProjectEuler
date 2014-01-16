/*
Circular primes
Problem 35
The number, 197, is called a circular prime because all rotations of the digits: 197, 971, and 719, are themselves prime.

There are thirteen such primes below 100: 2, 3, 5, 7, 11, 13, 17, 31, 37, 71, 73, 79, and 97.

How many circular primes are there below one million?
*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Numerics;

namespace ProblemSolver.src
{
    class Problem035 : SolvedProblems
    {
        public override void Solve()
        {
            uint counter = 0;
            List<BigInteger> pl = Primes.primeList(1000000);
            Dictionary<BigInteger,bool> plist= new Dictionary<BigInteger,bool>();

            foreach (BigInteger i in pl)
            {
                plist.Add(i, false);
            }

            foreach (BigInteger prime in pl)
            {
                List<string> rot = EulerHelper.rotations(prime.ToString());
                uint internalcount = (uint)rot.Count();
                foreach (string rotation in rot)
                {
                   
                    if (plist.ContainsKey(BigInteger.Parse(rotation)))
                    {
                        internalcount--;
                    }
                    if (internalcount == 0)
                    {
                        counter++;
                    }
                }
            }

            EulerHelper.printAns(counter.ToString());



        }
    }
}
