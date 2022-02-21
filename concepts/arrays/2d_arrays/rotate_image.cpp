#include <iostream>
#include <algorithm>
using namespace std;

void rotate_image(int a[][10],int n) {
	//First we need to rotate the rows then transpose

	//Rotating the rows
	
	// for(int row = 0;row<n;row++) {
	// 	int startCol = 0;
	// 	int endCol = n-1;
	// 	while(startCol < endCol) {
	// 	swap(a[row][startCol],a[row][endCol]);
	// 	startCol++;
	// 	endCol--;
	// }


	//Rotating via STL
	for(int row =0;row<n;row++) {
		reverse(a[row],a[row]+n);
	}



	//Transpose
	for(int i = 0;i<n;i++) {
		for(int j =0;j<n;j++) {
			if(i < j) {
				swap(a[i][j],a[j][i]);
			}
		}
	}

}






int main() {
	int n;
	cin >> n;
	int val = 1;
	int a[n][10];
	for(int row = 0;row < n;row++) {
		for(int col = 0;col<n;col++) {
			a[row][col] = val;
			val++;
		}
	}

	for(int row = 0;row < n;row++) {
		for(int col = 0;col<n;col++) {
			cout<<a[row][col]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;

	rotate_image(a,n);

	for(int row = 0;row < n;row++) {
		for(int col = 0;col<n;col++) {
			cout<<a[row][col]<<" ";
		}
		cout<<endl;
	}
}