/*
Multiples of 3 and 5
Problem 1
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/


#include "stdafx.h"
#include "Problem1.h"
#include <stack>
#include <iostream>
using namespace std;


Problem1::Problem1()
{
	//Constructor, if Problem1.setnum() isn't called, the default to solve for is 1000 (as per the problem)
	num = 1000;
}


Problem1::~Problem1()
{
}


int Problem1::setnum(int number)
{
	//Used to set the number to solve for.
	num = number;
	return 0;
}

int Problem1::Solve(){
	//Logic to solve the problem, we'll take all numbers from 3 to n, if divisable by 3 or 5 we'll add to a stack, then sum them up and return the value.
	stack<int> multiples;
	for (int n = 3; n < num; n++){
		if (n % 3 == 0 || n % 5 == 0){
			multiples.push(n);
		}
	}
	//We now have a stack that contains all the multiples of 3 and 5 from 3 to n, now we will add them all together.
	int sum = 0;
	while (!multiples.empty()){
		sum += multiples.top();
		multiples.pop(); //removes the element that we just added to sum.
	}
	
	return sum;
};