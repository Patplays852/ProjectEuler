#include "Problem25.h"
#include "InfInt.h"
#include <string>

using namespace std;

Problem25::Problem25()
{
    //ctor
}

Problem25::~Problem25()
{
    //dtor
}


//unsigned long long Problem25::Solve(){
string Problem25::Solve(){

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

    return to_string(fibTerm);
}
