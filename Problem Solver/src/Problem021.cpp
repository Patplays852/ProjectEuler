#include "Problem021.h"
#include "EulerHelper.h"
#include <vector>
#include <iostream>


using namespace std;

Problem021::Problem021()
{
    //ctor
}

Problem021::~Problem021()
{
    //dtor
}




void Problem021::Solve(){

    for (int i = 4; i < 10000; i++){
        vector<unsigned long long> vdivs = EulerHelper::properDivisors(i);

    }




}
