#include <iostream>
using namespace std;

void bubbleSortRecursive(int* a,int n, int i) {
	//base case
	if(i == n) {
		return;
	}
	
	//rec case
	for(int j =0;j<n-i-1;j++) {
		if(a[j] > a[j+1]) {
			swap(a[j],a[j+1]);	
		}
	}
	bubbleSortRecursive(a,n,i+1);
}

void bubble_sort(int* a,int n) {
	for(int itr = 0;itr<=n-1;itr++) {
		for(int j = 0;j<n-itr-1;j++) { //From 0 to n-number of iterations-1
			if(a[j] > a[j+1] ) {
				swap(a[j],a[j+1]);
			}
		}
	}
}

//Bubble Sort(How it works)

/*
6 7 3 4 2 1 itr = 0, j = 0
6 3 7 4 2 1 itr = 0, j = 1
6 3 4 7 2 1 itr = 0, j = 2
6 3 4 2 7 1 itr = 0, j = 3
6 3 4 2 1 7 itr = 0, j = 4 < 5
---------------------------
3 6 4 2 1 7 itr = 1, j = 0
3 4 6 2 1 7 itr = 1, j = 1
3 4 2 6 1 7 itr = 1, j = 2
3 4 2 1 6 7 itr = 1, j = 3 < 4
---------------------------
3 4 2 1 6 7 itr = 1, j = 0
3 2 4 1 6 7 itr = 1, j = 1
3 2 1 4 6 7 itr = 1, j = 2 < 3
---------------------------
2 3 1 4 6 7 itr = 1, j = 0
2 1 3 4 6 7 itr = 1, j = 1 < 2
---------------------------
1 2 3 4 6 7 itr = 1, j = 0 < 1  
*/

int main() {
	int arr[] = {6,7,3,4,2,1};
	int n = sizeof(arr)/sizeof(n);
//	bubble_sort(arr,n);
	bubbleSortRecursive(arr,n,0);
	for(auto x: arr) cout<<x<<" ";
}
