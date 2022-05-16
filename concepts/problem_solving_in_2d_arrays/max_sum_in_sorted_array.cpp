#include <iostream>
using namespace std;

void suffix(int a[][10],int m,int n) {
	//To generate suffix subarray first element will be m-1 and n-1;
	//Sum row wise
	for(int row=m-2;row>=0;row--) {
		for(int col=n-1;col>=0;col--) {
			a[row][col] = a[row][col] + a[row+1][col];
		}
	}

	//Sum column wise
	for(int col=n-2;col>=0;col--) {
		for(int row=m-1;row>=0;row--) {
			a[row][col] = a[row][col] + a[row][col+1];
		}
	}
}


int max_sum(int arr[][10],int m,int n) {
	//Generating the suffix subarray
	suffix(arr,m,n);

	int maxSum = 0;
	for(int i =0;i<m;i++) {
		for(int j=0;j<n;j++) {
			maxSum = max(maxSum,arr[i][j]);
		}
	}
	return maxSum;
}


int main() {
	int arr[][10] = {{-5,-4,-1},{-3,2,4},{2,5,8}};
	cout<<max_sum(arr,3,3)<<endl;
}