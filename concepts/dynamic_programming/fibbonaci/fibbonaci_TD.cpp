#include <iostream>
using namespace std;

int fibbonaci(int n,int* dp) {
	//Top Down approach to the qn
	//base case
	if(n <= 1) {
		if(n == 0 || n == 1) return n;	
		else return 0;
	}

	//rec case
	//lookup in the DP Array
	if(dp[n] != -1) {
		return dp[n];		
	}	

	return dp[n] = fibbonaci(n-1,dp) + fibbonaci(n-2,dp);
}

int main() {
	int n;
	cin >> n;
	int dp[100];
	fill_n(dp,100,-1);
	dp[0] = 0;
	dp[1] = 1;
	
	cout<<fibbonaci(n,dp)<<endl;

}
