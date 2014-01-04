#include "Problem5.h"


Problem5::Problem5()
{
}

Problem5::~Problem5()
{
}


unsigned long long Problem5::Solve(){
	unsigned long long ans = 10;
	bool div = false;
	do {
		notdiv:
		ans++;
		for (long long i = 2; i <= 20; i = i++){
			if (ans % i != 0){
				goto notdiv;
			}
		}
		div = true;
	} while (div == false);



	return ans;
}
