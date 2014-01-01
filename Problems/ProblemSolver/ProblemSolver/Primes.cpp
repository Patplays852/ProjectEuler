#include "stdafx.h"
#include "Primes.h"
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;


Primes::Primes()
{
}


Primes::~Primes()
{
}

bool Primes::isPrime(unsigned long long x){
	for (unsigned long long i = 2; i <= floor(sqrt(x)); i++){
		if (x % i == 0){
			return false;
		}	
	}
	return true;
}

vector<bool> Primes::sieveOfEratosthenes(unsigned long long num){
	//create the bool vector to num + 1 in size
	//We will be using the INDEX as if it was the number, so index 3 will represent the number 3, and the value (true/false) will determine if its a prime
	vector<bool> sieve(num + 1, true);
	//lets set 0 and 1 to false as they are not primes.
	sieve.at(0) = false; 
	sieve.at(1) = false;

	//determine each index's primality
	for (unsigned long long i = 2; i <= sqrt(num); i++){
		if (isPrime(i) == true){
			//check to see if index is prime, if it IS then we leave it as true then we take all multiples of it and set to false
			unsigned long long x = i * i;
			do{
				sieve.at(x) = false;
				x += i;
			} while (x <= num);
		}
	}

	return sieve; //return the vector of primes
	/*
	Example:
	sieve has value of [0,0,1,1,0]
	this means that at index 0 is false, so 0 is not a prime,
	index 1 is 0, so 1 is not a prime
	index 2 is 1, so 2 is a prime,
	index 3 is true, so 3 is a prime,
	index 4 is false/0, so 4 is not a prime
	*/
}

vector<unsigned long long> Primes::primeList(unsigned long long num){
	vector<bool> bitPrimes = sieveOfEratosthenes(num); //calls the sieve and gets back a value of primes where 1 is prime, 0 is not prime in a bool vector where index indicates the number that is or is not a prime, so index 2 would have a value of 1 indicating it is a prime, whereas index 4 would have a value of 0 meaning it's not a prime.

	//we will now convert the bits into usable numbers -- will create a vector where the primes are in order (index 0 is 2, index 1 is 3, index 2 is 5 etc.)
	vector<unsigned long long> x;
	for (unsigned long long i = 0; i <= bitPrimes.size() - 1; i++){
		if (bitPrimes.at(i) == true){
			x.push_back(i);
		}
	}
	return x;
}