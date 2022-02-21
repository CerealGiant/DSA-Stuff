#include <iostream>
using namespace std;

void spiral_print(int a[4][5],int m,int n) {
	int startRow = 0;
	int startCol = 0;
	int endRow = m-1;
	int endCol = n-1;

	while(startRow <= endRow && startCol <= endCol ) {


		//Printing top row
		for(int col = startCol;col<=endCol;col++) {
			cout<<a[startRow][col]<<" ";
		}
		startRow++;



		//Printing End Column
		for(int row = startRow;row <=endRow;row++) {
			cout<<a[row][endCol]<<" ";
		}
		endCol--;

		//Printing the bottom row
		if(endRow > startRow) {
		for(int col = endCol;col >=startCol;col--) {
			cout<<a[endRow][col]<<" ";
		}
		endRow--;
	}

		//Printing first column
		if(endCol > startCol) {
		for(int row = endRow;row >= startRow;row--) {
			cout<<a[row][startCol]<<" ";
		}
		startCol--;
	}

	}
}


int main() {
	int arr[4][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
	int m = 4;
	int n = 5;
	spiral_print(arr,m,n);
}