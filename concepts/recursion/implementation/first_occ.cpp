#include <iostream>
using namespace std;

int first_occ(int* a,int n,int key) {
	//Base case
	//Hit the last element already
	if(n == 0) {
		return -1;
	}
	
	//rec case
	if(a[0] == key) {
		return 0;
	}

	int i = first_occ(a+1,n-1,key);
	if(i == -1) {
		return -1;
	}
	return i + 1; //Current position in the smaller array.
}




int main() {
	int arr[] = {1,2,3,7,4,5,6,7,10};
	int key = 7;
	int n = sizeof(arr)/sizeof(int);
	int pos = first_occ(arr,n,key);
	cout<<pos<<endl;

}