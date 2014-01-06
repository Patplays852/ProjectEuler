/*
Multiples of 3 and 5
Problem 1
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/


#include "Problem1.h"
#include <vector>
using namespace std;


Problem1::Problem1()
{
	//Constructor, if Problem1.setnum() isn't called, the default to solve for is 1000 (as per the problem)
	long long num = 1000;
}


Problem1::~Problem1()
{
}


long long Problem1::setnum(long long number)
{
	//Used to set the number to solve for.
	num = number;
	return 0;
}

long long Problem1::Solve(){
	//Logic to solve the problem, we'll take all numbers from 3 to n, if divisable by 3 or 5 we'll add to a stack, then sum them up and return the value.
	long long sum = 0;
	for (long long n = 3; n < num; n++){
		if (n % 3 == 0 || n % 5 == 0){
			sum += n;
		}
	}

	return sum;
}
