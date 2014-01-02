/*
Largest palindrome product
Problem 4
A palindromic number reads the same both ways.The largest palindrome made from the product of two 2 - digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3 - digit numbers.
*/

#include "stdafx.h"
#include "Problem4.h"
#include <algorithm>
#include <string>

using namespace std;


Problem4::Problem4()
{
}

Problem4::~Problem4()
{
}

bool Problem4::isPalindrome(string x){
	string y = x;
	reverse(y.begin(), y.end());
	if (x.compare(y) == 0){
		return true;
	}
	return false;
}

int Problem4::Solve(){
	int ret = 0;
	
	for (int x = 999; x > 0; x--){
		for (int y = 999; y > 0; y--){
			int prod = x * y;
			if (prod > ret && isPalindrome(to_string(prod))){
				ret = prod;
			}
		}
	}
	
	
	
	return ret;
}