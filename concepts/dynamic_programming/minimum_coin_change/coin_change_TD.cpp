#include <iostream>
#include <climits>
using namespace std;

int coin_change(int n,int coins[],int dp[]) {
	//Top Down Approach
	//base case	
	if(n == 0) return 0;

	//rec case

	//lookup
	if(dp[n] != -1) {
		return dp[n];
	}

	//if subproblem has not been computed before
	int op1,op2,op3;
	op1 = op2 = op3 = INT_MAX;

	if(n >= coins[0]) {
		op1 = 1 + coin_change(n-coins[0],coins,dp);	
	}

	if(n >= coins[1]) {
		op2 = 1 + coin_change(n-coins[1],coins,dp);	
	}

	if(n > coins[2]) {
		op3 = 1 + coin_change(n-coins[2],coins,dp);	
	}

	return dp[n] = min(op1,min(op2,op3));

}

int main() {
	int coins[] = {1,7,10};
	int n;
	int dp[1000];
	fill_n(dp,1000,-1);
	cin >> n;
	cout<<coin_change(n,coins,dp)<<endl;

}
