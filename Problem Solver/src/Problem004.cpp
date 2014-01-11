/*
Largest palindrome product
Problem 4
A palindromic number reads the same both ways.The largest palindrome made from the product of two 2 - digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3 - digit numbers.
*/

#include "Problem004.h"
#include "EulerHelper.h"
#include <algorithm>
#include <string>
#include <sstream>
#include <iostream>


using namespace std;


Problem004::Problem004()
{
}

Problem004::~Problem004()
{
}

void Problem004::Solve(){
    long long ret = 0;

	for (long long x = 999; x > 0; x--){
		for (long long y = 999; y > 0; y--){
			long long prod = x * y;
			if (prod > ret && EulerHelper::isPalindrome(to_string(prod))){
				ret = prod;
			}
		}
	}

	cout << to_string(ret) << endl;
}
