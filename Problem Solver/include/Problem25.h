#pragma once
#include "SolvedProblems.h"

#include <string>

class Problem25 : public SolvedProblems
{
    public:
        Problem25();
        virtual ~Problem25();
        //unsigned long long Solve();
        std::string Solve() override;
    protected:
    private:
};
