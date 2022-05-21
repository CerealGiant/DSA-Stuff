//Binary Search in C++
#include <iostream>
using namespace std;

void binary_search(int* a,int n,int key) {
	int s = 0;
	int e = n-1;

	while(s < e) {
		int mid = (s+e)/2;
		if(a[mid] == key) {
			cout<<"Found at position: "<<mid<<endl;
			return;
		}else if(a[mid] > key) {
			//That means values in indexes >= mid will have values higher than key too hence should not search there	
			e = mid - 1;
		}else if(a[mid] < key) {
			s = mid + 1;
		}

	}
}


int main() {
	int a[] = {1,5,8,10,15,18,20,22};
	int n = sizeof(a)/sizeof(int);
	int key;
	cin >> key;
	binary_search(a,n,key);
}

