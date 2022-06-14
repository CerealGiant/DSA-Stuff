#include <iostream>
#include <climits>
using namespace std;

int coins_change(int n,int coins[],int dp[]) {
	//Bottom Up DP Approach 

	for(int i =2;i<=n;i++) {
	int op1,op2,op3;
	op1 = op2 = op3 = INT_MAX;
	if(i >= coins[0]) {
		op1 =dp[i-coins[0]];
	}

	if(i >= coins[1]) {
		op2 = dp[i-coins[1]];
	}

	if(i >= coins[2]) {
		op3 = dp[i-coins[2]];
	}
	dp[i] = 1 + min(op1,min(op2,op3));
	}

	return dp[n];

}

int main() {

	int coins[] = {1,7,10};
	int n;
	cin >> n;
	int dp[1000];
	fill_n(dp,1000,-1);
	dp[0] = 0;
	dp[1] = 1;
	
	cout<<coins_change(n,coins,dp)<<endl;
}
