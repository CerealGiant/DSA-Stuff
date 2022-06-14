#include <iostream>
#include <climits>
using namespace std;

int coins_change(int n,int coins[]) {
	//base case
	if(n == 0) return 0;

	//rec case
	int op1,op2,op3;
	op1 = op2 = op3 = INT_MAX;
	
	if(n >= coins[0]) {
		op1 = 1 + coins_change(n-coins[0],coins);
	}

	if(n >= coins[1]) {
		op2 = 1 + coins_change(n-coins[1],coins);
	}

	if(n >= coins[2]) {
		op3 = 1 + coins_change(n-coins[2],coins);
	}

	//Get min value
	return min(op1,min(op2,op3));
}

int main() {
	//Coin Change Problem. Not possible to use greedy approach since greedy approach fails at certain cases
	//For Indian Currency, then greedy approach is possible and will work.
	int coins[] = {1,7,10};
	int n;
	cin >> n;
	cout<<coins_change(n,coins)<<endl;

}
