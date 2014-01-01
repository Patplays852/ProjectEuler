/*
Sum square difference
Problem 6
The sum of the squares of the first ten natural numbers is,

1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)^2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include "stdafx.h"
#include "Problem6.h"


Problem6::Problem6()
{
}


Problem6::~Problem6()
{
}


unsigned _int64 Problem6::Solve(){
	unsigned _int64 squareOfSums = 0;
	unsigned _int64 sumOfSquares = 0;

	for (int i = 1; i <= 100; i++){
		sumOfSquares += i * i;
	}

	for (int i = 1; i <= 100; i++){
		squareOfSums += i;
	}
	squareOfSums = squareOfSums * squareOfSums;



	return squareOfSums - sumOfSquares;
}