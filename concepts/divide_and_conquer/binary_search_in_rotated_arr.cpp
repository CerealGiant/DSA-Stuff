#include <iostream>
using namespace std;

int find(int* a,int n,int key) {
	int s = 0;
	int e = n-1;

	while(s<=e) {
		int mid = (s+e)/2;
		if(a[mid] == key) {
			return mid;
		}

		else if(a[mid] >= a[s]) {
			//Meaning that start to mid is a sorted array
			if(a[mid] >= key && a[s] <= key) {
				e = mid -1;
			}else {
				s = mid + 1;
			}
		}else if(a[mid] <= a[e]) {
			//Meaning that mid to end is a sorted array
			if(a[mid] <= key && a[e] >= key) {
				s = mid + 1;
			}else {
				e = mid - 1;
			}
		}
	}
}

int main() {
	int arr[] = {4,5,1,2,3};
	int n = sizeof(arr)/sizeof(int);
	int key;
	cin >> key;
	cout<<find(arr,n,key)<<endl;
}
