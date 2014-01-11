#pragma once
#include "SolvedProblems.h"
#include <iostream>

using namespace std;

class Unsolved : public SolvedProblems
{
    public:
        Unsolved();
        virtual ~Unsolved();
        void Solve(){cout << "This problem hasn't been solved yet." << endl;};
    protected:
    private:
};
