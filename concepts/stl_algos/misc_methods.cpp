#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a = 10;
	int b = 20;

	//Swap method
	swap(a,b);
	cout<<a<<" "<<b<<endl;

	//Max and Min methods
	cout<<max(a,b)<<endl;
	cout<<min(a,b)<<endl;

	//Reverse method
	int arr[] = {1,2,3,4,4,5};
	reverse(arr,arr+4); //Reverses the first 4 elements
	for(int i:arr) {
		cout<<i<<" ";
	}

}
