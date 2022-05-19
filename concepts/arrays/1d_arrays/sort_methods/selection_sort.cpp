#include <iostream>
using namespace std;

void selectionSort_recursive(int* a,int i,int N) {
	
	//base case
	if(i == N) {
		cout<<"Sorted"<<endl;
		return;
	}

	//rec case
	int min_index = i;
	for(int j =i;j<N;j++) {
		if(a[j] < a[min_index]) {
			min_index = j;
		}
	}
	swap(a[i],a[min_index]);
	selectionSort_recursive(a,i+1,N);


}

//How does selection sort work?
//We take the current index to be the minimum value
//Then starting from the current index to the end of the array we will look for the smallest value
//If there is a value lesser than current index, we will save it in the min_index variable
//Then we swap the 2 values

int selectionSort(int* a,int n) {
	for(int i = 0;i<n-1;i++) { //No need to do last digit since last digit means digit is sorted
		int min_index = i;
		for(int j = i;j<=n-1;j++) {
			if(a[j] < a[min_index]) min_index = j;
		}
		swap(a[i],a[min_index]);
	}

}

int main() {
	int arr[] = {5,6,2,10,15,3,1,7};
	int n = sizeof(arr)/sizeof(int);
	selectionSort_recursive(arr,0,n);
	for(auto x: arr) cout<<x<<" ";
	return 0;
}
