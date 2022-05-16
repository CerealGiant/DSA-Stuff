#include <iostream>
using namespace std;

void prefix_arr(int a[][10],int m,int n) {
	//To generate a prefix sum arr,
	//First we wil add across the rows
	//Then across columns

	//Adding across rows
	//First element will not have any value change starting from top left
	for(int row =1;row<m;row++) {
		for(int col =0;col<n;col++) {
		 a[row][col] = a[row][col] + a[row-1][col];
	}

	}

	//Adding across columns
	//First element will not have any value change(starting from top left)
	for(int col=1;col<n;col++) {
		for(int row =0;row<m;row++) {
			a[row][col] = a[row][col] + a[row][col-1];
		}
	}

	return;


}

int subarray_sum(int a[][10],int m,int n) {
	//In second approach, we will make a prefix sum array to pre calculate the sum and remove the inner loop that calculates the sum
	prefix_arr(a,m,n);
	int sum = 0;
	for(int li =0;li<m;li++) {
		for(int lj=0;lj<n;lj++) {
			for(int bi =li;bi<m;bi++) {
				for(int bj=lj;bj<n;bj++) {
					//To get sum
					sum+=a[bi][bj] - a[li-1][bj] - a[bi][lj-1] + a[li-1][lj-1];
				}
			}
		}
	}
	return sum;
}



int main() {
	int a[][10] = {{1,1},{1,1}};
	cout<<subarray_sum(a,2,2)<<endl;
}