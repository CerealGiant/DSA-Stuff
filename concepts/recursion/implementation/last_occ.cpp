#include <iostream>
using namespace std;

int last_occ(int* a,int n,int key) {
	//Base case
	//Hit the last element already
	if(n == 0) {
		return -1;
	}
	
	//rec case

	int i = last_occ(a+1,n-1,key);
	if(i == -1) { //Meaning that element could not be found
		if(a[0] == key) {
			return 0;
		}else {
			return -1;
		}
	}



	return i + 1; //Current position in the smaller array.
}




int main() {
	int arr[] = {1,2,3,7,4,5,6,7,10};
	int key = 7;
	int n = sizeof(arr)/sizeof(int);
	int pos = last_occ(arr,n,key);
	cout<<pos<<endl;

}