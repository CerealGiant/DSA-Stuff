#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a,int b) {
	return a > b;
	//If you say a < b then it will be increasing order.
}

int main() {
	int a[] = {1,5,4,2,8,10};
	int n = sizeof(a)/sizeof(int);
	sort(a,a+n); //Inbuit STL Sort -> we need to provide the starting pointer and the end
	for(auto x: a) cout<<x<<" ";
	cout<<endl;
	//If you want it in decreasing order you need to write a compartor function and add it in sort
	sort(a,a+n,compare); //Inbuit STL Sort
	for(auto x: a) cout<<x<<" ";
}
