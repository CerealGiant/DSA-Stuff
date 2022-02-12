#include <iostream>
using namespace std;

//Checking if an array is sorted or not through recursion

bool sorted(int* arr,int n) {
	if(n == 0 or n == 1) {
		return true;
	}

	return arr[0] < arr[1] and sorted(arr+1,n-1);
}


int main() {
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(int);
	if(sorted(arr,n)) cout<<"Sorted";
}