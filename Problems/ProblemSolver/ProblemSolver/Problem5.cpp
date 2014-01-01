#include "stdafx.h"
#include "Problem5.h"


Problem5::Problem5()
{
}

Problem5::~Problem5()
{
}


unsigned _int64 Problem5::Solve(){
	unsigned _int64 ans = 10;
	bool div = false;
	do {
		notdiv:
		ans++;
		for (int i = 2; i <= 20; i = i++){
			if (ans % i != 0){
				goto notdiv;
			}			
		}
		div = true;		
	} while (div == false);

	

	return ans;
}