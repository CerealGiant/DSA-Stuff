#include <iostream>
using namespace std;

//How does insertion sort work?
//We take the value at the current index and check if the element before it is greater than it.
//If it is, we will copy that previous element into the current elements postiion and store the current element in a variable called e
//Then we will keep subtracting j till the condition is no longer met
//Once it is not met, we will put the element at a position of j+1

void insertionSort(int* a,int n) {
	for(int i =0;i<n-1;i++) {
		int e = a[i]; //This is the current element
		int j = i-1;
		while(j >= 0 && a[j] > e) {
			a[j+1] = a[j]; //Copying previous element into the next one
			j--;
		}
		a[j+1] = e; //This works for element to be inserted at the front since j will be -1 at the end of the loop in that case. so -1 + 1 = 0.

	}
}



int main() {
	int a[] = {1,5,7,3,2,8};
	int n = sizeof(a)/sizeof(n);
	insertionSort(a,n);
	for(auto x: a) cout<<x<<" ";
}
