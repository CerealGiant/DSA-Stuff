#include <iostream>
using namespace std;

int fibbonacci(int n) {
	//Bottom up approach

	int dp[100];
	fill_n(dp,100,-1);
	dp[0] = 0;
	dp[1] = 1;

	for(int i=2;i<=n;i++) dp[i] = dp[i-1] + dp[i-2];	
	
	return dp[n];

}

int fibbonacci_opt(int n) {
	//Space Optimised
	//Since we only need the last 2 elements, to find the next element, we should only store 2 elements, not the whole array
	int a = 0;
	int b = 1;
	int c;

	for(int i=2;i<=n;i++) {
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}

int main() {
	int n;
	cin >> n;

	cout<<fibbonacci_opt(n)<<endl;

}
