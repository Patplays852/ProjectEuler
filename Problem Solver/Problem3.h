#pragma once
#include <vector>
using namespace std;


class Problem3
{
public:
	Problem3();
	virtual ~Problem3();
	unsigned long long numToFactor;
	void SetNum(unsigned long long x);
	vector<unsigned long long> factors(unsigned long long);
};

