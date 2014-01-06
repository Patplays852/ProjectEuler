#include "Problem12.h"
#include "Primes.h"
#include <vector>
#include <array>
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

Problem12::Problem12()
{
    //ctor
}

Problem12::~Problem12()
{
    //dtor
}

unsigned long long Problem12::Solve(){

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


return tri;
}
