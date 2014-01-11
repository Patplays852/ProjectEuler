#include "EulerHelper.h"
#include "InfInt.h"
#include "Primes.h"
#include <algorithm>
#include <string>
#include <vector>


using namespace std;

EulerHelper::EulerHelper()
{
    //ctor
}

EulerHelper::~EulerHelper()
{
    //dtor
}

bool EulerHelper::isPalindrome(string x){
    string y = x;
	reverse(y.begin(), y.end());
	if (x.compare(y) == 0){
		return true;
	}
	return false;
}

InfInt EulerHelper::sumOfDigits(string x){
    InfInt num = x;

    InfInt sum;
    for(unsigned long long i = 0; i <= num.toString().length() - 1; i++){
        sum += atoi(num.toString().substr(i,1).c_str());
    }
    return sum;
}

vector<unsigned long long> EulerHelper::factors(unsigned long long num)
{
    Primes p;  //will be used to call primes::isPrime(u_int64)
    vector<unsigned long long> x;  // will use this to return the factors.

    for (unsigned long long i = 2; num != 1; i++)
    {
        if (p.isPrime(i) && num % i == 0)
        {
            x.push_back(i);
            num = num / i;
        }
    }
    return x;
}

vector<unsigned long long> EulerHelper::properDivisors(unsigned long long x){
    vector<unsigned long long> divs;

    for(unsigned long long i = 1; i < x; i++){
        if(x % i == 0){
            divs.push_back(i);
        }
    }
    return divs;
}


InfInt EulerHelper::sum(vector<InfInt> nums){
    InfInt x = 0;

    for (unsigned long long i = 0; i < nums.size(); i++){
        x = x + nums.at(i);
    }

    return x;
}

