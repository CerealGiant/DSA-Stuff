#include <iostream>
using namespace std;

string arr[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

void wtos(int n) {
	//base case
	if(n == 0) return;

	wtos(n/10);
	cout<<arr[n%10]<<" ";
}


int main() {
	wtos(2048);
}