//Binary Search using STL
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int a[] = {1,4,7,8,9,12,15,20};
	int n = sizeof(a)/sizeof(int);

	//We can use find to find a particular key but given that a is sorted, it would be more efficient to use binary search.

	int key;
	cin >> key;

	bool present = binary_search(a,a+n,key);

	if(present) {
		cout<<"Element found!"<<endl;
	}else {
		cout<<"Element not found!"<<endl;
	}

	//How to find the index of the element?
	//We have 2 main functions -> lower_bound and upper_bound

	//Lower Bound Function which will return the address of the element

	auto it = lower_bound(a,a+n,12); //Lower bound will return address of first value that is >= key
	int index = it - a;
	cout<<"Lower Bound Index:"<<index<<endl;

	//Upper Bound Function which will return the address of the element
	it = upper_bound(a,a+n,15); //Upper bound will return the address of first value that is > key
	index = it - a;
	cout<<"Upper Bound Index: "<<index<<endl;


	//Use of Upper Bound and Lower Bound

	//We can use it to find the freq. of a repeated element in a sorted array

	//Upper Bound Index - Lower Bound Index = Freq. of a repeated element.
}
