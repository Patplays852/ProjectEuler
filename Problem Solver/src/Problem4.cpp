/*
Largest palindrome product
Problem 4
A palindromic number reads the same both ways.The largest palindrome made from the product of two 2 - digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3 - digit numbers.
*/

#include "Problem4.h"
#include <algorithm>
#include <string>
#include <sstream>

namespace patch
{
    template < typename T > std::string to_string( const T& n )
    {
        std::ostringstream stm ;
        stm << n ;
        return stm.str() ;
    }
}

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

long long Problem4::Solve(){
	long long ret = 0;

	for (long long x = 999; x > 0; x--){
		for (long long y = 999; y > 0; y--){
			long long prod = x * y;
			if (prod > ret && isPalindrome(patch::to_string(prod))){
				ret = prod;
			}
		}
	}



	return ret;
}
