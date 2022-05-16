#include <iostream>
#include <stdio.h>
using namespace std;

int divisble_subarrays(int* arr,int N) {
	int sum = 0;
	int* preSum = new int[1000005]{0}; 
	for(int i =0;i<N;i++) {
		sum+=arr[i];
		sum %= N;
		sum = (sum + N) % N;
		preSum[sum]++;
	}
	long long ans = 0;
	//We find NC2 for each index and add to get the total number of divisble subarrays
	//n!/r!*(n-r)!
	for(int i =0;i<N;i++) {
		ans+=preSum[i]*(preSum[i]-1)/2;
	}
	return ans;
}



int main() {
	int t;
	cin >> t;
	for(int i =0;i<t;i++) {
		int N;
		cin >> N;
		int arr[N];
		for(int j=0;j<N;j++) {
			cin >> arr[j];
		}
		cout<<divisble_subarrays(arr,N)<<endl;
	}
}