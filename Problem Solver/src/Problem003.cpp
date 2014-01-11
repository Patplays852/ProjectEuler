#include "Problem003.h"
#include "EulerHelper.h"
#include <iostream>
#include "Primes.h" //for the isPrime() function
#include <string>

using namespace std;

Problem003::Problem003()
{
	numToFactor = 13195;  //as per Euler site.
}

Problem003::~Problem003()
{
}


void Problem003::SetNum(unsigned long long x){
	numToFactor = x;
}


void Problem003::Solve(){
    vector<unsigned long long> x = EulerHelper::factors(600851475143);

    cout << "your factors are:" << endl;
	for (long long i = 0; i <= x.size() - 1; i++){
		cout << x.at(i) << " ";
	}
	cout << endl << endl;
}
