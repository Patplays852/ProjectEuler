#pragma once
#include <vector>
using namespace std;


class Problem3
{
public:
	Problem3();
	virtual ~Problem3();
	unsigned _int64 numToFactor;
	void SetNum(unsigned _int64 x);
	vector<unsigned _int64> factors(unsigned _int64);
};

