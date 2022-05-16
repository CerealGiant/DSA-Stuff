#include <iostream>
using namespace std;

/*Euclid's Algorithm


a  b
b  a%b
20 12
12 8
8  4
4  0 when b== 0 return a;


a b
b a%b

12 20
20 12
12 8
*/


int gcd(int a,int b) {
	return (b==0) ? a : gcd(b,a%b);
}

int lcm(int a,int b) {
	//gcd * lcm = a * b
	int g = gcd(a,b);
	return (a*b)/g;
}


int main() {
	int a,b;
	cin >> a >> b;
	cout<<gcd(a,b)<<endl;
	cout<<lcm(a,b)<<endl;
}