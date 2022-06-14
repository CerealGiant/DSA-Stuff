#include <iostream>
#include <climits>
using namespace std;

int min_steps(int n) {
	//base case
	if(n == 1) return 0;

	//rec case
	int div_three = INT_MAX;
	int div_two = INT_MAX;
	int minus_one = INT_MAX;
	
	if(n % 3 == 0) {div_three = 0;div_three =  div_three + 1 + min_steps(n/3);}
	if(n % 2 == 0) {div_two = 0;div_two = div_two + 1 + min_steps(n/2);}
	if(n - 1 > 1) {minus_one = 0;minus_one = minus_one + min_steps(n-1) + 1;}

	return min(div_three,min(div_two,minus_one));
}

int main() {
	//Not feasible to use a greedy approach to solve this question since greedy apporach does not give best possible answer in certain scenarios.
	//Original Recursive Approach will be used here
	int n;
	cin >> n;
	cout<<min_steps(n)<<endl;
}
