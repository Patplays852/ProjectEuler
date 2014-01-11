#pragma once
#include "SolvedProblems.h"
#include <string>

using namespace std;

class Problem002 : public SolvedProblems
{
public:
	Problem002();
	virtual ~Problem002();
	unsigned long long maxFib;
	unsigned long long setMaxFib(unsigned long long);
	void Solve();
};

