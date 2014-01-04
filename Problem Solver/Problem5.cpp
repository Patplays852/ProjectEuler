#include "Problem5.h"

Problem5::Problem5()
{
}

Problem5::~Problem5()
{
}


unsigned long long Problem5::Solve()
{

    unsigned long long ans = 22;
    bool div = false;

    do
    {
notdiv:
        ans = ans + 2;
        for (long long i = 3; i <= 20; i++)
        {
            if (ans % i != 0)
            {
                goto notdiv;
            }
        }
        div = true;
    }
    while (div == false);



    return ans;
}
