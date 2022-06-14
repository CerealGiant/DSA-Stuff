#include <iostream>
#include <climits>
using namespace std;

int min_steps(int n) {
	//Using a Bottom Up Approach
	//In this, we are creating a DP Array to store data.
	int dp[1000];
	fill_n(dp,1000,0);

	//For each index, we should check how many possible ways there are to reach it
	for(int i =2;i<=n;i++) {

		int div_three = INT_MAX;
		int div_two = INT_MAX;
		int minus_one = INT_MAX;

		if(i % 3 == 0)	div_three=dp[i/3];
		if(i % 2 == 0)  div_two=dp[i/2];
		minus_one=dp[i-1];
		
		//At each new index, after finding the min number of ways to reach it,
		//need to remember to add 1 because we need to consider that it takes 1 step
		//to reach the current index itself.
		dp[i] = min(div_three,min(div_two,minus_one))+1;

	}
	return dp[n];
}

int main() {
	int n;
	cin >> n;

	cout<<min_steps(n)<<endl;
}
