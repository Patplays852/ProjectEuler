#include "Problem012.h"
#include "Primes.h"
#include <vector>
#include <array>
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

Problem012::Problem012()
{
    //ctor
}

Problem012::~Problem012()
{
    //dtor
}

void Problem012::Solve(){

    unsigned long long tri = 0;
    int numOfDivisors;
    int maxd = 0;


    for (unsigned long long i = 1; numOfDivisors < 500; i++){

        numOfDivisors = 1;
        tri += i;

        for (unsigned long long n = 1; n <= sqrt(tri); n++){
            if(tri % n == 0){
                numOfDivisors += 1;
            }
        }

        numOfDivisors = (numOfDivisors - 1) * 2;

        if (numOfDivisors > maxd){maxd = numOfDivisors;}
        //cout << tri << setw(10) <<  numOfDivisors << setw(10) << maxd <<  endl;

    }


    cout << to_string(tri) << endl;
}
