#include "stdafx.h"
#include "Problem3.h"
#include <iostream>
#include "Primes.h" //for the isPrime() function

using namespace std;

Problem3::Problem3()
{
	numToFactor = 13195;  //as per Euler site.
}

Problem3::~Problem3()
{
}


void Problem3::SetNum(unsigned _int64 x){
	numToFactor = x;
}


vector<unsigned _int64> Problem3::factors(unsigned _int64 num){
	Primes p;  //will be used to call primes::isPrime(u_int64)
	vector<unsigned _int64> x;  // will use this to return the factors.

	
	for (unsigned _int64 i = 2; num != 1; i++){
		if (p.isPrime(i) && num % i == 0){
			x.push_back(i);
			num = num / i;
		}
	}
	

	cout << "your factors are:" << endl;
	for (int i = 0; i <= x.size() - 1; i++){
		cout << x.at(i) << " ";
	}


	
	return x;
}
