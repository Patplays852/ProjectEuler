using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Numerics;

namespace ProblemSolver.src
{
    static class Primes
    {
        static public bool isPrime(string str)
        {
            BigInteger x = BigInteger.Parse(str);
            
            //use first method for any numbers that are less than ulong (faster/more accurate to use Math.Sqrt() than it is to use custom sqrt method for BigIntegers.
            if (x < ulong.MaxValue)
            {
                for (ulong i = 2; i <= Math.Ceiling(Math.Sqrt((ulong)x)) + 1; i++)
                {
                    if (x % i == 0)
                    {
                        return false;                        
                    }
                }
                return true;
            }
            
            //if it's larger than an unsigned long, then we'll use the biginteger version
            for (BigInteger i = 2; i <= EulerHelper.Sqrt(x) + 1; i++)
            {
                if (x % i == 0)
                {
                    return false;
                }
            }
            return true;
        }


        static public Dictionary<BigInteger,bool> sieveOfEratosthenes(BigInteger num)
        {
            //create the bool vector to num + 1 in size
	        //We will be using the INDEX as if it was the number, so index 3 will represent the number 3, and the value (true/false) will determine if its a prime
            Dictionary<BigInteger, bool> sieve = new Dictionary<BigInteger,bool>();

            //lets set 0 and 1 to false as they are not primes.
            sieve[0] = false;
            sieve[1] = false;

            //fill the rest of the seive with true
            for (BigInteger i = 2; i <= num; i++)
            {
                sieve.Add(i, true);
            }

            //Determine each index's primality

            //again we'll use 2 functions, 1 if it is less than a ulong for math.sqrt, and the other will be a biginteger implimentation.
            if (num < ulong.MaxValue)
            {
                for (ulong i = 2; i <= Math.Sqrt((ulong)num); i++)
                {
                    if (isPrime(i.ToString()))
                    {
                        //check to see if index is prime, if it IS then we leave it as true then we take all multiples of it and set to false
                        ulong x = i * i;
                        do
                        {
                            sieve[BigInteger.Parse(x.ToString())] = false;
                            x += i;
                        } while (x <= num);
                    }
                }
            }
            else
            {
                for (BigInteger i = 2; i <= EulerHelper.Sqrt(num); i++)
                {
                    if (isPrime(i.ToString()))
                    {
                        //check to see if index is prime, if it IS then we leave it as true then we take all multiples of it and set to false
                        BigInteger x = i * i;
                        do
                        {
                            sieve[x] = false;
                            x += i;
                        } while (x <= num);
                    }
                }
            }
           
            return sieve;
        }

        static public Dictionary<BigInteger,BigInteger> primeList(BigInteger num)
        {
            Dictionary<BigInteger, bool> bitPrimes = sieveOfEratosthenes(num);  //calls the sieve and gets back a value of primes where 1 is prime, 0 is not prime in a bool dictionary where index indicates the number that is or is not a prime, so index 2 would have a value of 1 indicating it is a prime, whereas index 4 would have a value of 0 meaning it's not a prime.

            //we will now convert the bits into usable numbers -- will create a list where the primes are in order (index 0 is 2, index 1 is 3, index 2 is 5 etc.)
            Dictionary<BigInteger, BigInteger> x = new Dictionary<BigInteger, BigInteger>();
            BigInteger counter = 1;
            foreach (KeyValuePair<BigInteger, bool> pair in bitPrimes)
            {
                if (pair.Value)
                {
                    x.Add(counter,pair.Key);
                    counter++;
                }
                
            }

            return x;
        }

    }
}
