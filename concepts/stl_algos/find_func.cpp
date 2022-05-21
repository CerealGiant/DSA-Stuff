#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	//Using find Function to find an element	
	//If the element is found, find will return the address of the element. If not, find will return the
	//If not, find returns the address directly after the last element in the array.

	int a[] = {1,5,4,3,2,11,20};
	int n = sizeof(a)/sizeof(int);
	int key;
	cin >> key;
	auto it = find(a,a+n,key);
	int index = it - a;

	if(index == n) {
		cout<<"Element was not found!"<<endl;
	}else {
		cout<<"Element found at "<<index<<endl;
	}


}
