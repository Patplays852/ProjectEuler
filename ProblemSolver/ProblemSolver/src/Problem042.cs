/*
Coded triangle numbers
Problem 42
The nth term of the sequence of triangle numbers is given by, tn = ½n(n+1); so the first ten triangle numbers are:

1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...

By converting each letter in a word to a number corresponding to its alphabetical position and adding these values we form a word value. For example, the word value for SKY is 19 + 11 + 25 = 55 = t10. If the word value is a triangle number then we shall call the word a triangle word.

Using words.txt (right click and 'Save Link/Target As...'), a 16K text file containing nearly two-thousand common English words, how many are triangle words?
*/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Numerics;

namespace ProblemSolver.src
{
    class Problem042 : SolvedProblems
    {
        public override void Solve()
        {
            string str = Properties.Resources.Problem042;
            List<BigInteger> nameScores = new List<BigInteger>();
            string[] names = str.Split(',');
           
            //get rid of the quotation marks.
            for (int i = 0; i < names.Length; i++)
            {
                names[i] = names[i].Trim('"');
                nameScores.Add(EulerHelper.alphaValue(names[i])); //can use this part of the loop to calculate the name scores
            }

            uint max = (uint)EulerHelper.max(nameScores);
            Dictionary<BigInteger, BigInteger> triNums = EulerHelper.triangleNums(max);
            uint counter = 0;

            for (int i = 0; i < nameScores.Count; i++)
            {
                if (triNums.ContainsValue(nameScores[i]))
                {
                    counter++;
                }
            }

            EulerHelper.printAns(counter.ToString());
        }
    }
}
