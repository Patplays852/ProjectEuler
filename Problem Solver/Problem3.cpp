#include "Problem3.h"
#include <iostream>
#include "Primes.h" //for the isPrime() function
#include <string>

using namespace std;

Problem3::Problem3()
{
	numToFactor = 13195;  //as per Euler site.
}

Problem3::~Problem3()
{
}


void Problem3::SetNum(unsigned long long x){
	numToFactor = x;
}


vector<unsigned long long> Problem3::factors(unsigned long long num){
	Primes p;  //will be used to call primes::isPrime(u_int64)
	vector<unsigned long long> x;  // will use this to return the factors.


	for (unsigned long long i = 2; num != 1; i++){
		if (p.isPrime(i) && num % i == 0){
			x.push_back(i);
			num = num / i;
		}
	}


	cout << "your factors are:" << endl;
	for (long long i = 0; i <= x.size() - 1; i++){
		cout << x.at(i) << " ";
	}



	return x;
}
