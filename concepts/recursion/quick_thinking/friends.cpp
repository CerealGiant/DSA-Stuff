#include <iostream>
using namespace std;

//1*f(N-1) + N-1C1 * f(N-2)
//n!/(n-r)!*r!

int factorial(int N) {
	if(N == 0) return 1;
	if(N == 1) return 1;

	return N * factorial(N-1);
}


int friends(int N) {
	//base case
	if(N == 0) return 1;
	if(N < 0) return 0;

	if(N >= 2) {
		return friends(N-1) + (factorial(N-1)/factorial(N-2))* friends(N-2);
	}else {
		return 1;
	}
	

}


int main() {
	
	int ways =
	ways = friends(3);
	cout<<ways<<endl;

}