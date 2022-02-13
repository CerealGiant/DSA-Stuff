#include <iostream>
#include <stdio.h>
using namespace std;

int max_profit(int* wt,int* price,int i, int profit,int weight) {
	//base case
	if(weight == 0 || i == 4) {
		return profit;
	}

	//rec case
	int ans = 0;
	int inc,exc;
	inc = exc = 0;
	//Choose to take current item but before that must check if weight can allow
	if(wt[i] <= weight) {
		inc = max(inc,max_profit(wt,price,i+1,profit+price[i],weight-wt[i]));
	}

	//Choose not to take current item
	exc = max(max_profit(wt,price,i+1,profit,weight),exc);

	ans = max(inc,exc);
	return ans;
	

}


int main() {
	int wt[] = {1,2,3,5};
	int price[] = {40,20,35,100};
	int answer = max_profit(wt,price,0,0,6);
	cout<<answer<<endl;
}