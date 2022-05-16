#include <iostream>
using namespace std;

bool placeCows(int* stalls,int seperation,int Cows,int N) {
	//We can place the first cow at the first stall
	int count = 1;
	int prevCow = 0;
	for(int i =1;i<N;i++) {
		if( (stalls[i] - stalls[prevCow]) >= seperation) {
			//Cow can be placed at this stall
			count++;
			prevCow = i;
			if(count == Cows) {
				return true;
			}
		}
	}
	return false;
}

int minimum_distance(int* stalls,int N,int C) {
	//Creating a monotonic search space from 0 to stalls[N-1] - stalls[0](maximum seperation)
	int s = 0;
	int e = stalls[N-1] - stalls[0];
	int ans = 0;

	while(s<=e) {
		int mid = (s+e)/2;
		bool cowsPlaced = placeCows(stalls,mid,C,N);
		if(cowsPlaced) {
			ans = mid;
			s = mid + 1;
		}else {
			e = mid - 1;
		}
	}

	return ans;
}



int main() {
	int t;
	cin >> t;
	for(int i =0;i<t;i++) {
		int N,C;
		cin >> N >> C;
		int stalls[N];
		for(int k=0;k<N;k++) {
			cin >> stalls[k];
		}
		cout<<minimum_distance(stalls,N,C);
	}
}