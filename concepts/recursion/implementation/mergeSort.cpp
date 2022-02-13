#include <iostream>
using namespace std;

//Merge Sort
void Merge(int* a,int s,int e) {
	int mid = (s+e)/2;

	int i = s;
	int j = mid + 1;
	int k = s;
	int temp[100];

	while(i<=mid && j <= e) {
		if(a[i] < a[j]) {
			temp[k++] = a[i++];
		}else {
			temp[k++] = a[j++];
		}
	}

	while(i<=mid) {
		temp[k++] = a[i++];
	}
	while(j<=e) {
		temp[k++] = a[j++];
	}

	//Copying over
	for(int i =s;i<=e;i++) {
		a[i] = temp[i];
	}


}




void mergeSort(int* a,int s,int e) {
	//Base case
	//Only 1 element is left
	if(s >= e) {
		return;
	}
	//rec case
	int mid = (s+e)/2;

	mergeSort(a,s,mid);
	mergeSort(a,mid+1,e);

	Merge(a,s,e);
}


int main() {
	int arr[] = {1,3,5,7,8,2,4};
	int n = sizeof(arr)/sizeof(n);
	mergeSort(arr,0,n-1);
	for(int i =0;i<n;i++) {
		cout<<arr[i]<<endl;
	}
}