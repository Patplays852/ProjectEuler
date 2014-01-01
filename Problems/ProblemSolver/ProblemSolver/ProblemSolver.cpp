/* ProblemSolver.cpp : Defines the entry point for the console application.

This will be the main "controller" of which program you want to solve.  If the appropriate solution has been prepared, you can launch it via this application.
*/

#include "stdafx.h"
#include <iostream>
#include "Primes.h"

#include "Problem1.h"
#include "Problem2.h"
using namespace std;
#include <cstdio>
#include <ctime>
#include <vector>



int main()
{
	vector<int> test;

	for (int i = 1; i <= 10; i++) test.push_back(i);

	for (int i = 2; i < test.size(); i++){


		test.erase(test.begin() + i);
	}



	cout << "myvector contains:";
	for (unsigned i = 0; i < test.size(); ++i)
		cout << ' ' << test[i];
	cout << '\n';





	//create an int, get the input for it then find which problem it is for, create the object, do some initalization for the problem, then after the if we'll call prob.Solve() to solve the problem.
	int answer = 0;

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
		answer = prob.Solve();
	}
	else if (probToSolve == 2){
		Problem2 prob;
		prob.setMaxFib(4000000);
		answer = prob.Solve();
	}
	else if (probToSolve == 3){
		Primes prob;
		prob.primeList(100);

	}
		
	duration = (clock() - start) / (double) CLOCKS_PER_SEC;
	

	
	//Display the answer to the selected problem.
	cout << endl << answer << endl;
	cout << "The problem took " << duration << " seconds to solve." << endl;
	system("pause");


	return 0;
}

