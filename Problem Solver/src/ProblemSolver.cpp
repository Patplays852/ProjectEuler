/* ProblemSolver.cpp : Defines the entry point for the console application.

This will be the main "controller" of which program you want to solve.  If the appropriate solution has been prepared, you can launch it via this application.
*/

#include <iostream>

#include "InfInt.h"
#include "Primes.h"
#include "Problems.h"
#include "Unsolved.h"
#include "SolvedProblems.h"

#include "EulerHelper.h"

using namespace std;
#include <cstdio>
#include <ctime>
#include <vector>
#include <string>



int main()
{
    again:


	cout << "Welcome to the Project Euler problem solver!\n";
	cout << "Please enter the number of the problem you'd like to solve(1 - n):";
	unsigned int probToSolve;
	cin >> probToSolve;
	cout << endl;


    //we will use the Unsolved class to pad our problems so they match up w/ the input number.
	vector<SolvedProblems*> probs = {new Unsolved(),
                                    new Problem001(), new Problem002(), new Problem003(), new Problem004(), new Problem005(),
                                    new Problem006(), new Problem007(), new Problem008(), new Problem009(), new Problem010(),
                                    new Problem011(), new Problem012(), new Problem013(), new Problem014(), new Problem015(),
                                    new Problem016(), new Unsolved(), new Unsolved(), new Unsolved(), new Problem020(),
                                    new Unsolved(), new Unsolved(), new Unsolved(), new Unsolved(), new Problem025()};

	clock_t start;
	double duration;

	start = clock();

    //Solve the selected problem
    probs.at(probToSolve) -> Solve();


	duration = (clock() - start) / (double) CLOCKS_PER_SEC;


	//Display the answer to the selected problem.

	cout << endl << endl << "The problem took " << duration << " seconds to solve." << endl;


    cout << endl << endl << "Would you like to solve another problem? ";
    string yn;
    cin >> yn;
    if (yn == "y"){
        goto again;
    }

	return 0;
}

