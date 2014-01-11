#include "Problem014.h"
#include <iostream>

using namespace std;

Problem014::Problem014()
{
    //ctor
}

Problem014::~Problem014()
{
    //dtor
}

void Problem014::Solve(){
    int maxChainNum = 0;
    int maxChain = 0;

    for (int num = 13; num < 1000000; num++){
        unsigned long long temp = num;
        int chain = 1;

        while(temp != 1){
            chain++;

            if(temp % 2 == 0){
                temp /= 2;
            }
            else{
                temp = (temp * 3) + 1;
            }

        }
        if(chain > maxChain){
            maxChainNum = num;
            maxChain = chain;
        }

    }


    cout << to_string(maxChainNum) << endl;
}
