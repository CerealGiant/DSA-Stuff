#include <iostream>
using namespace std;

//Recursive Fibonnaci Recursion Basics
//n is the index in the fibonnaci sequence we want to get


int fibonnaci(int n) {
	//Base case
	//Making 1 a base case since n-2 < 0
	if(n == 0 or n == 1) {
		return n;
	}
	return fibonnaci(n-1) + fibonnaci(n-2);
}


int main() {
	cout<<fibonnaci(5);
}