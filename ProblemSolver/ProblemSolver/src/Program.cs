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
            Dictionary<int,SolvedProblems> probs = new Dictionary<int,SolvedProblems>();  //dictionary that'll hold the instances of all problems.

            //add classes to the Dictionary if they exist:
            for (int i = 1; i <= 999; i++) //454 if the current number of Project Euler problems, I'm using 999 so we wont need to edit this for a (long) time -- when there are more than 999 problems.
            {
                string className = "ProblemSolver.src.Problem" + String.Format("{0:000}", i);  //create a string to hold the full class name (including namespace)

                Type t = Type.GetType(className);
                if (t != null)
                {
                    probs.Add(i, (SolvedProblems)Activator.CreateInstance(t));
                }
                else
                {
                    probs.Add(i, (SolvedProblems)Activator.CreateInstance(Type.GetType("ProblemSolver.src.Problem000")));
                }
                
            }

            
            bool solve = true;
            Console.WriteLine("Welcome to the Project Euler problem solver!");
            while (solve)
            {
                int probToSolve;
                Console.WriteLine();
                Console.Write("Please enter the number of the problem you'd like to solve(1 - n):  ");
                
                try
                {
                    probToSolve = Convert.ToInt32(Console.ReadLine());
                    Stopwatch stopWatch = new Stopwatch();
                    stopWatch.Start();
            
                    probs[probToSolve].Solve(); //solve for the selected function

                    stopWatch.Stop();
                    Console.WriteLine(String.Format("This problem was solved in:  {0}", stopWatch.Elapsed));
                }
                catch {
                    Console.Clear();
                    Console.WriteLine("Your input was invalid, either 0 or a non-integer.  Exiting");
                    System.Threading.Thread.Sleep(1000);
                    solve = false;
                }     
            }
        }
    }
}
