#include "Problem016.h"
#include "EulerHelper.h"
#include "InfInt.h"
#include <string>

using namespace std;

Problem016::Problem016()
{
    //ctor
}

Problem016::~Problem016()
{
    //dtor
}

void Problem016::Solve(){
    InfInt x = 2;
    for (int i = 2; i <= 1000; i++){
        x = x * 2;
    }

    string ans = EulerHelper::sumOfDigits(x.toString()).toString();

    cout << ans << endl;
}
