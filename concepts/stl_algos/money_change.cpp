//Money Change Problem
#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a,int b) {
	return a <= b; //We will overwrite the default method of comparision, we want to return first index that is less than or equal to money rather than first index that is greater than or equal to money.

}

int main() {
	int coins[] = {1,2,5,10,20,50,100,200,500,2000};
	int money = 168;
	int n = sizeof(coins)/sizeof(int);

	while(money != 0) {
		//Upper Bound and Lower Bound can both accept a comparator
		int* lb = upper_bound(coins,coins+n,money);
		cout<<coins[lb-coins - 1]<<endl;
		money-=coins[lb-coins - 1];
	}

}
