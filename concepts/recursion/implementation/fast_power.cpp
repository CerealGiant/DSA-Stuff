#include <iostream>
using namespace std;

//Fast way to do power recursively
//3^8 = (3^4)^2 = ((3^2)^2)^2 = ((3^1)^2)^2)^2 
int fast_power(int a,int n) {
	//base case
	if(n == 0) return 1;

	//rec case
	return a*fast_power(a,n/2);


}


int main() {
	cout<<fast_power(2,2);

}