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

#include "Problem006.h"
#include <iostream>

using namespace std;
Problem006::Problem006()
{
}


Problem006::~Problem006()
{
}


void Problem006::Solve(){
	unsigned long long squareOfSums = 0;
	unsigned long long sumOfSquares = 0;

	for (long long i = 1; i <= 100; i++){
		sumOfSquares += i * i;
	}

	for (long long i = 1; i <= 100; i++){
		squareOfSums += i;
	}
	squareOfSums = squareOfSums * squareOfSums;



	cout << to_string(squareOfSums - sumOfSquares) << endl;
}
