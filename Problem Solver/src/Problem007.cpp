#include "Problem007.h"
#include <iostream>
#include "Primes.h"
#include <vector>

using namespace std;

Problem007::Problem007()
{
    //ctor
}

Problem007::~Problem007()
{
    //dtor
}


void Problem007::Solve(){

    Primes prob;
    vector<unsigned long long> p = prob.primeList(1000000);


    cout << to_string(p.at(10000)) << endl;
}
