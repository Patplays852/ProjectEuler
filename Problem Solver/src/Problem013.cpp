#include "Problem013.h"
#include "InfInt.h"
#include <iostream>
#include <string>

Problem013::Problem013()
{
    //ctor
}

Problem013::~Problem013()
{
    //dtor
}


void Problem013::Solve(){

    InfInt sum = 0;

    for (int i = 0; i <= num.size() - 1;){
        cout << i << endl;
        sum = sum + num.substr(i, 50);
        i = i+50;
    }

    cout << sum.toString().substr(0,10) << endl;
}
