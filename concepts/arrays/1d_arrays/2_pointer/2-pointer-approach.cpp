#include <iostream>
using namespace std;

void getPairs(int* a,int n,int s) {
	
	int i = 0;
	int j = n - 1;


	while(i < j) {
	if(a[i] + a[j] > s) {
		j--;
	}else if(a[i] + a[j] < s) {
		i++;
	}else if(a[i] + a[j] == s) {
		cout<<a[i]<<","<<a[j]<<endl;
		i++;
		j--;
	}
}


}


int main() {
	int a[] = {1,3,5,7,10,11,12,13};
	int n = sizeof(a)/sizeof(int);
	getPairs(a,n,16);
}