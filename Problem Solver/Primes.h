#pragma once
#include <vector>
using namespace std;

class Primes
{
public:
	Primes();
	virtual ~Primes();
	bool isPrime(unsigned long long x);
	vector<bool> sieveOfEratosthenes(unsigned long long num);
	vector<unsigned long long> primeList(unsigned long long num);
};

