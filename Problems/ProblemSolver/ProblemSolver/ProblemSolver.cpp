/* ProblemSolver.cpp : Defines the entry point for the console application.

This will be the main "controller" of which program you want to solve.  If the appropriate solution has been prepared, you can launch it via this application.
*/

#include "stdafx.h"
#include <iostream>
#include "Problem1.h"
using namespace std;



int main()
{
	//create an int, get the input for it then find which problem it is for, create the object, do some initalization for the problem, then after the if we'll call prob.Solve() to solve the problem.
	int answer = 0;
	cout << "Welcome to the Project Euler problem solver!\n";
	cout << "Please enter the number of the problem you'd like to solve(1 - n):";
	int probToSolve;
	cin >> probToSolve;
	

	//TODO:: Add errorcatching for bad input.
	if (probToSolve == 1){
		Problem1 prob;
		prob.setnum(1000);
		answer = prob.Solve();
	}
	else if (probToSolve == 2){
		
	}
		
		
	

	
	//Display the answer to the selected problem.
	cout << endl << answer << endl;
	system("pause");


	return 0;
}

