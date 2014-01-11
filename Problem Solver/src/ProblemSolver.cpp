/* ProblemSolver.cpp : Defines the entry point for the console application.

This will be the main "controller" of which program you want to solve.  If the appropriate solution has been prepared, you can launch it via this application.
*/

#include <iostream>

#include "InfInt.h"
#include "Primes.h"
#include "Problems.h"
#include "SolvedProblems.h"


using namespace std;
#include <cstdio>
#include <ctime>
#include <vector>
#include <string>



int main()
{
    again:
	//create an long long, get the input for it then find which problem it is for, create the object, do some initialization for the problem, then after the if we'll call prob.Solve() to solve the problem.
	string answer;

	cout << "Welcome to the Project Euler problem solver!\n";
	cout << "Please enter the number of the problem you'd like to solve(1 - n):";
	long long probToSolve;
	cin >> probToSolve;



	vector<SolvedProblems*> probs = {new Problem1(), new Problem25()};

	cout << probs.at(0) -> Solve() << endl;
	cout << probs.at(1) -> Solve() << endl;

/*
	//create a vector that will hold all the classes of the problems;
	vector<SolvedProblems*> probs;// = (0, Problem1(), Problem2(), Problem3(), Problem4());
	//probs.push_back(0);
	probs.push_back(new Problem1());
	probs.push_back(new Problem1());
	probs.push_back(new Problem1());
	probs.push_back(new Problem25());
	int problemmm = 25;

	probs.push_back(new Problem[problemmm]());


	for (int i = 1; i < probs.size(); i++){
        cout << "The answer to problem " << i << " is " << probs.at(i) -> Solve() << endl;
	}

*/


	clock_t start;
	double duration;

	start = clock();
	//TODO:: Add error catching for bad input.
	if (probToSolve == 1){
		Problem1 prob;
		prob.setnum(1000);
		answer = prob.Solve();
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
		answer = to_string(prob.Solve());
	}
	else if (probToSolve == 6){
		Problem6 prob;
		answer = to_string(prob.Solve());
	}
	else if (probToSolve == 7){
		Primes prob;
		vector<unsigned long long> p = prob.primeList(1000000);
		answer = to_string(p.at(10000));
	}
	else if (probToSolve == 8){
		Problem8 prob;
		answer = to_string(prob.Solve());
	}
	else if (probToSolve == 9){
		Problem9 prob;
		answer = to_string(prob.Solve());
	}
	else if (probToSolve == 10){
		Primes prob;

		vector<unsigned long long> plist = prob.primeList(2000000);
		__int64 sum = 0;

		for (long long i = 0; i <= plist.size() - 1; i++){
			sum += plist.at(i);
		}

		answer = to_string(sum);
	}
	else if (probToSolve == 11){
		Problem11 prob;
		answer = to_string(prob.Solve());
	}
	else if (probToSolve == 12){
        Problem12 prob;
        answer = to_string(prob.Solve());
	}
	else if(probToSolve == 13){
        Problem13 prob;
        answer = prob.Solve();
	}
	else if(probToSolve == 14){
        Problem14 prob;
        answer = to_string(prob.Solve());
	}
	else if(probToSolve == 15){
        Problem15 prob;
        answer = to_string(prob.Solve(20));
	}
	else if(probToSolve == 16){
        InfInt x = 2;
        for (int i = 2; i <= 1000; i++){
            x = x * 2;
        }

        unsigned int sum;
        for(int i = 0; i <= x.toString().length() - 1; i++){
            sum += atoi(x.toString().substr(i,1).c_str());
        }
        answer = to_string(sum);
	}
	else if (probToSolve == 20){
        InfInt ex = 1;
        for (int i = 99; i > 1; i--){
            ex = ex * i;
        }

        int a;
        for (int i = 0; i < ex.toString().length(); i++){
            a += atoi(ex.toString().substr(i,1).c_str());
        }

        answer = to_string(a);

	}
	else if(probToSolve == 25){
        Problem25 prob;
        answer = prob.Solve(); //to_string(prob.Solve());
        ////vector<SolvedProblems*> x;
        ////x.push_back(new Problem25());
        //answer = x.at(0) -> Solve();
        //cout << "your answer is:  " << x.at(0) -> Solve();
	}




	duration = (clock() - start) / (double) CLOCKS_PER_SEC;



	//Display the answer to the selected problem.
	cout << endl << answer << endl;
	cout << "The problem took " << duration << " seconds to solve." << endl;
	system("pause");

    cout << endl << endl << "Would you like to solve another problem? ";
    string yn;
    cin >> yn;
    if (yn == "y"){
        goto again;
    }

	return 0;
}

