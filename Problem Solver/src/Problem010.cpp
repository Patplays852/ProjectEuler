#include "Problem010.h"
#include "Primes.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

Problem010::Problem010()
{
    //ctor
}

Problem010::~Problem010()
{
    //dtor
}

void Problem010::Solve(){

    Primes prob;

    vector<unsigned long long> plist = prob.primeList(2000000);
    __int64 sum = 0;

    for (long long i = 0; i <= plist.size() - 1; i++){
        sum += plist.at(i);
    }

    string ans = to_string(sum);

    cout << ans << endl;
}
