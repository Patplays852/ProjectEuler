using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Diagnostics;

using System.Numerics;

namespace ProblemSolver.src
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Welcome to the Project Euler problem solver!");
            Console.Write("Please enter the number of the problem you'd like to solve(1 - n):  ");
            uint probToSolve = (uint)Convert.ToInt32(Console.ReadLine());
            

            Stopwatch stopWatch = new Stopwatch();
            stopWatch.Start();

            Unsolved x = new Unsolved();

            List<BigInteger> primes = new List<BigInteger>();

            for (int i = 0; i < primes.Count; i++)
            {
                Console.WriteLine(primes[i].ToString());
            }

                x.Solve();

            //will run function here

            stopWatch.Stop();
           
            Console.WriteLine(String.Format("This problem was solved in:  {0}", stopWatch.Elapsed));
            Console.ReadKey();
        }
    }
}
