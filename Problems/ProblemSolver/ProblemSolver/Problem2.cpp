/*
Even Fibonacci numbers
Problem 2
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/


#include "stdafx.h"
#include "Problem2.h"

using namespace std;


Problem2::Problem2()
{
	//Unless otherwise specified we'll return the sum of all even FIB terms <= 4Mil as per the problem on Euler.
	unsigned int maxFib = 4000000;
	
}

unsigned int Problem2::setMaxFib(unsigned int x)
{
	maxFib = x;
	return 0;
}

unsigned int Problem2::Solve()
{
	unsigned int sum = 2;
	int fib1 = 1;
	int fib2 = 2;
	int fib3;
	do{
		fib3 = fib1 + fib2;
		if (fib3 % 2 == 0){
			sum += fib3;
		}
		fib1 = fib2;
		fib2 = fib3;
	} while (fib3 < maxFib);

	return sum;
}


Problem2::~Problem2()
{
}
