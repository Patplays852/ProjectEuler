#pragma once
#include "SolvedProblems.h"
#include <vector>
using namespace std;


class Problem003 : public SolvedProblems
{
public:
	Problem003();
	virtual ~Problem003();
	unsigned long long numToFactor;
	void SetNum(unsigned long long x);
	vector<unsigned long long> factors(unsigned long long);
	void Solve();
};

