#include "Problem025.h"
#include "InfInt.h"
#include <string>
#include <iostream>

using namespace std;

Problem025::Problem025()
{
    //ctor
}

Problem025::~Problem025()
{
    //dtor
}


//unsigned long long Problem25::Solve(){
void Problem025::Solve(){

    unsigned long long fibTerm = 2;
    InfInt fib1 = 1;
    InfInt fib2 = 1;
    InfInt fib3;


	do{
		fib3 = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;
		fibTerm = fibTerm + 1;
	} while (fib3.toString().length() < 1000);

    cout << to_string(fibTerm) << endl;
}
