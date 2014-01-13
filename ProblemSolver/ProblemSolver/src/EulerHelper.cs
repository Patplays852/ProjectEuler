using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Numerics;


namespace ProblemSolver.src
{
    static class EulerHelper
    {
        public static string reverseString(string s)
        {
            char[] arr = s.ToCharArray();
            Array.Reverse(arr);
            return new string(arr);
        }


        public static bool isPalindrome(string x)
        {
            string y = reverseString(x);
            if (y == x)
            {
                return true;
            }
            return false;
        }


        public static ulong sumDigits(string str)
        {
            ulong sum = 0;
            foreach (char x in str)
            {
                sum = sum + (ulong)Char.GetNumericValue(x);
            }
            return sum;
        }


        public static BigInteger Sqrt(this BigInteger n)
        {
            if (n == 0) return 0;
            if (n > 0)
            {
                int bitLength = Convert.ToInt32(Math.Ceiling(BigInteger.Log(n, 2)));
                BigInteger root = BigInteger.One << (bitLength / 2);

                while (!isSqrt(n, root))
                {
                    root += n / root;
                    root /= 2;
                }

                return root;
            }

            throw new ArithmeticException("NaN");
        }

        private static Boolean isSqrt(BigInteger n, BigInteger root)
        {
            BigInteger lowerBound = root * root;
            BigInteger upperBound = (root + 1) * (root + 1);

            return (n >= lowerBound && n < upperBound);
        }

    }
}
