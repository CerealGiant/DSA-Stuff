#include <iostream>
using namespace std;

void generate_prefix(int a[][10],int m,int n) {
	//First we generate across rows then across columns.
	//Top left element which is the first element will not be added
	for(int row =1;row<m;row++) {
		for(int col=0;col<n;col++) {
			a[row][col] = a[row][col] + a[row-1][col];
		}
	}

	//Adding across columns
	for(int col=1;col<n;col++) {
		for(int row=0;row<m;row++) {
			a[row][col] = a[row][col] + a[row][col-1];
		}
	}

	return;

}


int get_sum(int a[][10],int li,int lj,int bi,int bj,int m,int n) {
	//generate a prefix subarray
	generate_prefix(a,m,n);

	//Get Sum accordingly
	return a[bi][bj] - a[li-1][bj] - a[bi][lj-1] + a[li-1][lj-1];

}


int main() {
	//We take in Q queries
	//Each query will pass a coordinate for top left and bottom right.
	//We need to find the subarray sum between these two coordinates.
	int Q;
	int m,n;
	cout<<"Enter number of rows: ";
	cin >> m;
	cout<<"Enter number of columns: ";
	cin >> n;
	cout<<"Enter number of Queries: ";
	cin >> Q;
	int arr[m][10];
	int val = 0;
	for(int row = 0;row<m;row++) {
		for(int col=0;col<n;col++) {
			val++;
			arr[row][col] = val;
		}
	}

	// for(int row = 0;row<m;row++) {
	// 	for(int col=0;col<n;col++) {
	// 		cout<<arr[row][col]<<" ";
	// 	}
	// 	cout<<endl;
	// }


	for(int i =0;i<Q;i++) {
		int li,lj,bi,bj;
		cout<<"Enter Top Left Row: ";
		cin >> li;
		cout<<"Enter Top Left Col: ";
		cin >> lj;
		cout<<"Enter Top Right Row: ";
		cin >> bi;
		cout<<"Enter Top Right Col: ";
		cin >> bj;
		cout<<"Total Sum: ";
		cout<<get_sum(arr,li,lj,bi,bj,m,n)<<endl;
	}



}