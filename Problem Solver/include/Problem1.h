#pragma once
#include "SolvedProblems.h"


class Problem1 : public SolvedProblems
{
public:
	Problem1();
	virtual ~Problem1();
	long long num;
	long long setnum(long long);
	string Solve() override; //long long Solve();
};

