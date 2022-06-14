#include <iostream>
using namespace std;

int fibbonaci(int n) {
	//base case
	if(n <= 1) {
		if(n == 0 || n == 1) return n;
		else return 0;
	}

	//rec case	
	return fibbonaci(n-1) + fibbonaci(n-2);
}


int main() {
	int n;
	cin >> n;
	cout<<fibbonaci(n)<<endl;
}
