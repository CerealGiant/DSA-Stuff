//Next Permutations in C++
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int arr[] = {10,20,30,40,50};
	int n = sizeof(arr)/sizeof(int);
	rotate(arr,arr+2,arr+n); //Give start,middle(point of rotation),end.This can also be applied on a vector 


	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}

	//next_permutation
	next_permutation(arr,arr+n);
	cout<<endl;
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}

	next_permutation(arr,arr+n);
	cout<<endl;
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}



}

