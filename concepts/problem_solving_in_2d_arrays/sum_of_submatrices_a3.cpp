#include <iostream>
using namespace std;

int subarray_sum(int a[][10],int m,int n) {
	//In 3rd approach we want to calcuate the number of times a particular number appears in the various submatrices
	//Then mulitply the number of times with the particular number to obtain its contribution in the subarray sum
	//We do so for all numbers in the matrix and then we get the final answer.
	//To do so, we need to determine which points can be a possible top right and top left such that the particular number is included in the subarray.

	//For top left, numbers less than or equal to i and j will be included starting from 0,0
	//For bottom right, numbers more than or equal to i and j will be included ending at m and n.
	int sum = 0;
	for(int i = 0;i<m;i++) {
		for(int j =0;j<n;j++) {
			int x = (j+1) * (i+1);
			int y = (m - i) * (n - j);
			sum+=a[i][j]*(x*y);
		}	
	}
	return sum;

}


int main() {
	int a[][10] = {{1,1},{1,1}};
	cout<<subarray_sum(a,2,2)<<endl;
}