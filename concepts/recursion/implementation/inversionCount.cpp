#include <iostream>
using namespace std;

int crossInversions(int* a,int s,int e) {
	int mid = (s+e)/2;

	int i = s;
	int j =	mid +  1;
	int k = s;

	int temp[100000];
	int count = 0;

	while(i <= mid && j <= e) {
		if(a[i] <= a[j]) {
			temp[k] = a[i];
			k++;
			i++;
		}else {
			temp[k++] = a[j++];
			count+=(mid - i + 1);
		}
	}

	while(i <= mid) {
		temp[k++] = a[i++];
	}

	while(j <= e) {
		temp[k++] = a[j++];
	}

	for(int i =s;i<=e;i++) {
		a[i] = temp[i];
	}

	return count;
}


int inversionCount(int* a,int s,int e) {
	//Base case
	if(s >= e) {
		return 0;
	}

	//rec case
	int mid = (s+e)/2;
	int x = inversionCount(a,s,mid);
	int y = inversionCount(a,mid+1,e);
	int z = crossInversions(a,s,e);
	return x + y + z;
}



int main() {
	int arr[] = {1,5,2,6,3,0};
	int n = sizeof(arr)/sizeof(int);
	int count = inversionCount(arr,0,n-1);
	cout<<count<<endl;
}