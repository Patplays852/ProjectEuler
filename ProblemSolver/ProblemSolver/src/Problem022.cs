/*
Names scores
Problem 22
Using names.txt (right click and 'Save Link/Target As...'), a 46K text file containing over five-thousand first names, begin by sorting it into alphabetical order. Then working out the alphabetical value for each name, multiply this value by its alphabetical position in the list to obtain a name score.

For example, when the list is sorted into alphabetical order, COLIN, which is worth 3 + 15 + 12 + 9 + 14 = 53, is the 938th name in the list. So, COLIN would obtain a score of 938 × 53 = 49714.

What is the total of all the name scores in the file?
*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Resources;
using System.Globalization;


namespace ProblemSolver.src
{
    class Problem022 : SolvedProblems
    {
        public override void Solve()
        {
            string str = Properties.Resources.Problem022;
            string[] names = str.Split(',');
            Array.Sort(names); //sort names into alphabetical order

            //get rid of the quotation marks.
            uint sum = 0;
            for (int i = 0; i < names.Length; i++)
            {
                names[i] = names[i].Trim('"');
                sum += (uint)((i + 1) * EulerHelper.alphaValue(names[i].ToString()));//sum up the values:
            }

            EulerHelper.printAns(sum.ToString());
        }
    }
}
