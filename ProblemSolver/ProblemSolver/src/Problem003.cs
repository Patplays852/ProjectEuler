/*
 * Largest prime factor
Problem 3
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Numerics;


namespace ProblemSolver.src
{
    class Problem003 : SolvedProblems
    {
        public override void Solve(){
            List<BigInteger> x = EulerHelper.factors(BigInteger.Parse("600851475143"));

            Console.WriteLine();
            Console.WriteLine("Your factors are:");
        
            foreach(BigInteger i in x){
            Console.Write(i + " ");
            }
            Console.WriteLine();
        }
    }
}
