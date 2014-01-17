/*
Truncatable primes
Problem 37
The number 3797 has an interesting property. Being prime itself, it is possible to continuously remove digits from left to right, and remain prime at each stage: 3797, 797, 97, and 7. Similarly we can work from right to left: 3797, 379, 37, and 3.

Find the sum of the only eleven primes that are both truncatable from left to right and right to left.

NOTE: 2, 3, 5, and 7 are not considered to be truncatable primes.
*/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Numerics;

namespace ProblemSolver.src
{
    class Problem037 : SolvedProblems
    {
        Dictionary<BigInteger, BigInteger> plist = new Dictionary<BigInteger,BigInteger>();


        private bool truncateLeft(string str){
            List<string> nums = new List<string>();

            if (str.Substring(0, 1) == "1") { return false; }

            for (int i = 1; i < str.Length; i++)
            {
                nums.Add(str.Substring(0, i));
            }

            for (int i = 0; i < nums.Count ; i++)
            {
                if (!plist.ContainsValue(BigInteger.Parse(nums[i])))
                {
                    return false;
                }
            }
            return true;
        }

        private bool truncateRight(string str)
        {
            List<string> nums = new List<string>();
            if (str.Substring(str.Length - 1, 1) == "1") { return false; }

            for (int i = 0; i < str.Length; i++)
            {                
                str = str.Remove(0, 1);
                nums.Add(str);
            }

            for (int i = 0; i < nums.Count; i++)
            {
                if (!plist.ContainsValue(BigInteger.Parse(nums[i])))
                {
                    return false;
                }
            }
            return true;
        }


        public override void Solve()
        {
            plist = Primes.primeList(1000000);
            int counter = 11;
            int primen = 4;
            BigInteger sum = 0;

            while (counter > 0)
            {
                primen++;
                if (primen > plist.Count - 1) { break; }
                if(truncateLeft(plist[primen].ToString()) && truncateRight(plist[primen].ToString())){
                    counter--;
                    sum += plist[primen];
                    Console.WriteLine(plist[primen].ToString());
                }
                
            }

            EulerHelper.printAns(sum.ToString());
            
        }
    }
}
