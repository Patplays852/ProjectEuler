﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Numerics;


namespace ProblemSolver.src
{
    static class EulerHelper
    {

        public static bool isPandigital(string str)
        {
            char[] chararr = str.ToCharArray();
            Dictionary<char, bool> chars = new Dictionary<char, bool>(){
                {'0', false},
                {'1', false},
                {'2', false},
                {'3', false},
                {'4', false},
                {'5', false},
                {'6', false},
                {'7', false},
                {'8', false},
                {'9', false},
            };

            foreach (char i in chararr)
            {
                if (chars[i] == true)
                {
                    return false;
                }
                else
                {
                    chars[i] = true;
                }
            }
            return true;
        }

        public static int alphaValue(string str)
        {
            int result = 0;
            for (int i = 0; i < str.Length; i++)
            {
                result += Convert.ToInt32(str[i]) - 64;
            }
            return result;
        }

        public static void printAns(string ans)
        {
            Console.WriteLine();
            Console.WriteLine(ans);
            Console.WriteLine();
        }


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
            if (n <= 0) return 0;
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


        public static Boolean isSqrt(BigInteger n, BigInteger root)
        {
            BigInteger lowerBound = root * root;
            BigInteger upperBound = (root + 1) * (root + 1);

            return (n >= lowerBound && n < upperBound);
        }


        public static List<BigInteger> primeFactors(BigInteger num)
        {
            List<BigInteger> x = new List<BigInteger>();

            for (BigInteger i = 2; num != 1; i++)
            {
                if (num % i == 0 && Primes.isPrime(i.ToString()))
                {
                    x.Add(i);
                    num /= i;
                }
            }
            return x;
        }


        public static List<BigInteger> properDivisors(BigInteger x)
        {
            List<BigInteger> divs = new List<BigInteger>();

            for (BigInteger i = 1; i <= x; i++)
            {
                if (x % i == 0)
                {
                    divs.Add(i);
                }
            }
            return divs;
        }


        public static BigInteger max(List<BigInteger> x)
        {
            BigInteger max = 0;

            foreach (int i in x)
            {
                if (i > max)
                {
                    max = i;
                }
            }
            return max;
        }


        public static BigInteger factorial(BigInteger x)
        {
            if (x == 0) { return 0; }
            BigInteger rtn = 1;
            for (BigInteger i = x; i > 1; i--)
            {
                rtn *= i;
            }
            return rtn;
        }


        public static List<string> rotations(string str)
        {
            List<string> rtn = new List<string>();
            int i = str.Length;
            string n = str;

            while (i > 0)
            {
                n = n.Substring(str.Length - 1, 1) + n.Substring(0, str.Length - 1);
                rtn.Add(n);
                i--;
            }
            return rtn;
        }


        public static BigInteger triangleTerm(uint n)
        {
            return (BigInteger)(.5 * n * (n + 1));
        }


        public static Dictionary<BigInteger, BigInteger> triangleNums(BigInteger maxTri)
        {
            uint counter = 1;
            Dictionary<BigInteger, BigInteger> rtn = new Dictionary<BigInteger, BigInteger>();
            while (counter <= maxTri)
            {
                rtn.Add(counter, triangleTerm(counter));
                counter++;
            }
            return rtn;
        }


        public static BigInteger PentagonalTerm(uint n){
            return (BigInteger)(n * (3 * n - 1) / 2);
        }


        public static Dictionary<BigInteger,BigInteger> pentagonalNums(BigInteger maxTri)
        {
            uint counter = 1;
            Dictionary<BigInteger, BigInteger> rtn = new Dictionary<BigInteger, BigInteger>();
            while (counter <= maxTri)
            {
                rtn.Add(counter, PentagonalTerm(counter));
                counter++;
            }
            return rtn;
        }

        

        public static BigInteger hexagonalTerm(uint n)
        {
            return (BigInteger)(n * (2 * n - 1));
        }


        public static Dictionary<BigInteger, BigInteger> hexagonalNums(BigInteger maxTri)
        {
            uint counter = 1;
            Dictionary<BigInteger, BigInteger> rtn = new Dictionary<BigInteger, BigInteger>();
            while (counter <= maxTri)
            {
                rtn.Add(counter, hexagonalTerm(counter));
                counter++;
            }
            return rtn;
        }




    }
}
