#include <iostream>
using namespace std;

void generate_subarrays(int* a,int n) {
	for(int i = 0;i<n;i++) {
		for(int j =i;j<n;j++) {
			for(int k = i;k<=j;k++) {
				cout<<a[k]<<" ";
			}
			cout<<endl;
		}
	}
}

int main() {
	int a[] = {1,2,3,4};
	int n = sizeof(a)/sizeof(int);
	generate_subarrays(a,n);
	return 0;
}