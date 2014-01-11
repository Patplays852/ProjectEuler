#include "Problem020.h"
#include "InfInt.h"
#include "EulerHelper.h"
#include <iostream>
#include <string>

using namespace std;

Problem020::Problem020()
{
    //ctor
}

Problem020::~Problem020()
{
    //dtor
}


void Problem020::Solve(){
    InfInt ex = 1;
    for (int i = 99; i > 1; i--){
        ex = ex * i;
    }

    string ans = EulerHelper::sumOfDigits(ex.toString()).toString();

    cout << ans << endl;
}
