#include <iostream>
using namespace std;

int generate_subarrays(int* a,int n) {
	int cSum = 0;
	int maxSum = 0;
	for(int i = 0;i<n;i++) {
		for(int j =i;j<n;j++) {
			for(int k = i;k<=j;k++) {
				cSum+=a[k];
			}
			maxSum = max(maxSum,cSum);
			cSum = 0;
		}
	}
	return maxSum;
}

int main() {
	int a[] = {1,2,3,4};
	int n = sizeof(a)/sizeof(int);
	cout<<generate_subarrays(a,n)<<endl;
	return 0;
}
