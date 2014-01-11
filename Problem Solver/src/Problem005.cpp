#include "Problem005.h"
#include <iostream>
#include <string>

using namespace std;

Problem005::Problem005()
{
}

Problem005::~Problem005()
{
}


void Problem005::Solve()
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



    cout << to_string(ans) << endl;
}
