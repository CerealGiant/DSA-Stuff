#include <iostream>
using namespace std;

int generate_subarrays(int* a,int n,int* cumSum) {
	int cSum = 0;
	int maxSum = 0;
	int left = 0;
	int right = 0;
	for(int i = 0;i<n;i++) {
		for(int j =i;j<n;j++) {
			cSum = cumSum[j] - cumSum[i-1];
			if(cSum > maxSum) {
				maxSum = cSum;
				left = i;
				right = j;
			}
			cSum = 0;
		}
	}
	for(int k =left;k<=right;k++) {
		cout<<a[k]<<" ";
	}
	cout<<endl;
	return maxSum;
}

//Input to test
// 9
// -4 1 3 -2 6 2 -8 -9 4

int main() {
	int a[1000];
	int cumSum[1000];
	int n;
	cin >> n;
	cin >> a[0];
	cumSum[0] = a[0];

	for(int i = 1;i<n;i++) {
		cin >> a[i];
		cumSum[i] = cumSum[i-1] + a[i];
	}

	cout<<generate_subarrays(a,n,cumSum)<<endl;
	return 0;
}