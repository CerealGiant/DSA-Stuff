#include <iostream>
#include <vector>
using namespace std;

void factorise(int n) {
	int i = 2;
	vector<pair<int,int>> factors;
	for(;i*i<n;i++) {
		int count = 0;
		if(n % i == 0) {
			while(n % i == 0) {
				count++;
				n/=i;
			}
			factors.push_back(make_pair(i,count));
		}
	}

	//if i equals to a prime number larger than sqrt(n) like 11 when trying to find factors for 66
	if(i != 1) {
		factors.push_back(make_pair(n,1));
	}

	for(auto p: factors) {
		cout<<p.first<<"^"<<p.second<<" * ";
	}
}


int main() {
	int n;
	cin >> n;
	factorise(n);
}
