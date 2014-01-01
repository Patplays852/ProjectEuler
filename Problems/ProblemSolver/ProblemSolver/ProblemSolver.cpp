/* ProblemSolver.cpp : Defines the entry point for the console application.

This will be the main "controller" of which program you want to solve.  If the appropriate solution has been prepared, you can launch it via this application.
*/

#include "stdafx.h"
#include <iostream>

#include "InfInt.h"
#include "Primes.h"
#include "Problem1.h"
#include "Problem2.h"
#include "Problem3.h"
#include "Problem4.h"
#include "Problem5.h"
#include "Problem6.h"
#include "Problem8.h"
#include "Problem9.h"
using namespace std;
#include <cstdio>
#include <ctime>
#include <vector>



int main()
{
	//create an int, get the input for it then find which problem it is for, create the object, do some initalization for the problem, then after the if we'll call prob.Solve() to solve the problem.
	string answer;

	cout << "Welcome to the Project Euler problem solver!\n";
	cout << "Please enter the number of the problem you'd like to solve(1 - n):";
	int probToSolve;
	cin >> probToSolve;
	
	clock_t start;
	double duration;

	start = clock();
	//TODO:: Add errorcatching for bad input.
	if (probToSolve == 1){
		Problem1 prob;
		prob.setnum(1000);
		answer = to_string(prob.Solve());
	}
	else if (probToSolve == 2){
		Problem2 prob;
		prob.setMaxFib(4000000);
		answer = to_string(prob.Solve());
	}
	else if (probToSolve == 3){
		Problem3 prob;
		prob.factors(600851475143);
	}
	else if (probToSolve == 4){
		Problem4 prob;
		answer = to_string(prob.Solve());
		
	}
	else if (probToSolve == 5){
		Problem5 prob;
		answer = prob.Solve();
	}
	else if (probToSolve == 6){
		Problem6 prob;
		answer = prob.Solve();
	}
	else if (probToSolve == 7){
		Primes prob;
		vector<unsigned _int64> p = prob.primeList(1000000);
		answer = to_string(p.at(10000));
	}
	else if (probToSolve == 8){
		Problem8 prob;
		answer = prob.Solve();
	}
	else if (probToSolve == 9){
		Problem9 prob;
		answer = prob.Solve();
	}
	else if (probToSolve == 10){
		Primes prob;

		vector<unsigned long long> plist = prob.primeList(2000000);
		__int64 sum = 0;

		for (int i = 0; i <= plist.size() - 1; i++){
			sum += plist.at(i);
		}


		answer = to_string(sum);
	}
		
	duration = (clock() - start) / (double) CLOCKS_PER_SEC;
	

	
	//Display the answer to the selected problem.
	cout << endl << answer << endl;
	cout << "The problem took " << duration << " seconds to solve." << endl;
	system("pause");


	return 0;
}

