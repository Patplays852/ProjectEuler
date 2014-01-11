#pragma once
#include <string>
#include <vector>
#include "InfInt.h"

using namespace std;
class EulerHelper
{
    public:
        EulerHelper();
        virtual ~EulerHelper();
        static bool isPalindrome(string x);
        static InfInt sumOfDigits(string x);
        static vector<unsigned long long> factors(unsigned long long num);
        static vector<unsigned long long> properDivisors(unsigned long long x);
        static InfInt sum(vector<InfInt> nums);
    protected:
    private:
};
