#include <iostream>
using namespace std;

void bubble_sort(int* arr,int n,int itr) {
	//base case
	if(n == 1) {
		//Only 1 element array is sorted already.
		return;
	}
	//rec case
	if(arr[0] > arr[1] && itr != n-1) {
		swap(arr[0],arr[1]);
		bubble_sort(arr+1,n,itr+1);
	}

	//When sort is done
	bubble_sort(arr-itr,n-1,0);

}


int main() {
	int arr[] = {5,4,3,1,2};
	int n = sizeof(arr)/sizeof(n);
	bubble_sort(arr,n,0);
	for(int i =0; i < n;i++) {
		cout<<arr[i]<<endl;
	}
}