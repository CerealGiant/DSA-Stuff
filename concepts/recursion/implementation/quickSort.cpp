#include <iostream>
using namespace std;

int sorting(int* a,int s,int e) {
	int i = s-1;
	int j = s;	

	int pivot = a[e];

	for(;j<=e-1;j++) {
		if(a[j] <= pivot) {
			i++;
			swap(a[i],a[j]);
		}
	
	}
	//Swap the pivot
	swap(a[i+1],a[e]);
	return i+1;
}


void qs(int* a,int s,int e) {
	//base case
	if(s >= e) {
		return;
	}

	//rec case
	int mid = (s+e)/2;
	int p = sorting(a,s,e);
	qs(a,s,p-1);
	qs(a,p+1,e);
}


int main() {
	int arr[] = {1,4,6,7,3,2};
	int n = sizeof(arr)/sizeof(n);
	qs(arr,0,n-1);
	for(int i =0;i<n;i++) {
		cout<<arr[i]<<endl;
	}
}