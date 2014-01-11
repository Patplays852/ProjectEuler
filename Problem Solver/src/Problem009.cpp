#include "Problem009.h"
#include <iostream>

using namespace std;


Problem009::Problem009()
{
}


Problem009::~Problem009()
{
}


void Problem009::Solve(){
	long long a1, b1, c1;
	for (long long a = 1000; a > 0; a--){
		for (long long b = 1000; b > 0; b--){
			for (long long c = 1000; c > 0; c--){

				if (a * a + b * b == c * c && a + b + c == 1000){
					a1 = a;
					b1 = b;
					c1 = c;
					cout << "a: " << a;
					cout << "b: " << b;
					cout << "c: " << c;
				}
			}
		}
	}
	long long ans = a1 * b1 * c1;

	cout << endl << to_string(ans) << endl;
}
