#include <iostream>
#include <climits>
using namespace std;

int min_steps(int n,int dp[]) {
	//This is the Top Down Approach
	//In this approach, we will be saving the answer to every subproblem so that we only compute this once	
	
	//base case
	if(n == 1) return 0;

	//rec case
	int div_three = INT_MAX;
	int div_two = INT_MAX;
	int minus_one = INT_MAX;
	
	//Lookup
	if(dp[n] != -1) return dp[n];

	//Compute if dp[n] is not known
	if(n % 3 == 0) div_three=1+min_steps(n/3,dp);
	if(n % 2 == 0) div_two=1+min_steps(n/2,dp);
	if(n - 1 > 1) minus_one=1+min_steps(n-1,dp);
	
	return dp[n] = min(div_three,min(div_two,minus_one));	

}

int main() {
	int n;
	cin >> n;
	int dp[1000];
	fill_n(dp,1000,-1);
	cout<<min_steps(n,dp)<<endl;
}
