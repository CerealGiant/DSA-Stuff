#include <iostream>
using namespace std;

int first_occ(int* a,int n,int key) {
	//Binary Search
	int s = 0;
	int e = n-1;
	int ans = 0;
	while(s <= e) {
		int mid = (s+e)/2;
		if(a[mid] == key) {
			ans = mid;
			//Since we are trying to find the first occurence in a sorted array,
			//when we find the key we will search the array to the left of the current element
			//which is equal to the key since we want the first occurence which is likely to be
			//at the left side
			e = mid - 1; 
		}else if(a[mid] > key) {
			e = mid - 1;
		}else if(a[mid] < key) {
			s = mid + 1;
		}
	}
	return ans;
} 

int last_occ(int* a,int n,int key) {
	//Binary Search
	int s = 0;
	int e = n - 1;
	int ans = 0;
	while(s <= e) {
		int mid = (s+e)/2;
		if(a[mid] == key) {
			ans = mid;
			//Since we want the last occurence, we look at the right side of the current element
			//which is equal to the key.
			s = mid + 1;
		}else if(a[mid] > key) {
			e = mid - 1;
		}else if(a[mid] < key) {
			s = mid + 1;
		}
	}

	return ans;
}



int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i =0;i<n;i++) {
		cin >> a[i];
	}
	int key;
	cin >> key;
	cout<<first_occ(a,n,key)<<endl;
	cout<<last_occ(a,n,key)<<endl;
}