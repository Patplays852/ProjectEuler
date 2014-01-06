#include "Problem13.h"
#include "InfInt.h"
#include <iostream>

Problem13::Problem13()
{
    //ctor
}

Problem13::~Problem13()
{
    //dtor
}


string Problem13::Solve(){

    InfInt sum = 0;

    for (int i = 0; i <= num.size() - 1;){
        cout << i << endl;
        sum = sum + num.substr(i, 50);
        i = i+50;
    }


    return sum.toString().substr(0,10);
}
