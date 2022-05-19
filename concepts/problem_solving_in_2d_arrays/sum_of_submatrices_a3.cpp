#include <iostream>
using namespace std;

int subarray_sum(int a[][10],int m,int n) {
	//In 3rd approach we want to calcuate the number of times a particular number appears in the various submatrices
	//Then mulitply the number of times with the particular number to obtain its contribution in the subarray sum
	//We do so for all numbers in the matrix and then we get the final answer.
	//To do so, we need to determine which points can be a possible top right and top left such that the particular number is included in the subarray.

	//For top left, numbers less than or equal to i and j will be included starting from 0,0
	//For bottom right, numbers more than or equal to i and j will be included ending at m and n.
	//For i,j to be top left, numbers have to be greater than or equal to i and j (right side of i,j)
	//For i,j to be top right, numbers have to be less than or equal to i and j (left side of i,j)
	int sum = 0;
	for(int i = 0;i<m;i++) {
		for(int j =0;j<n;j++) {
			int x = (j+1) * (i+1);
			int y = (m - i) * (n - j); //Starting from i,j to m-1 to n-1
			sum+=a[i][j]*(x*y);
		}	
	}
	return sum;

}


int main() {
	int a[][10] = {{1,1},{1,1}};
	cout<<subarray_sum(a,2,2)<<endl;
}
