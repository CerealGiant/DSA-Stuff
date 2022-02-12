#include <iostream>
using namespace std;

//Printing first N numbers in decreasing order
void decreasing(int N) {
	if(N == 0) {
		return;
	}


	cout<<N<<" ";
	decreasing(N-1);
}


void increasing(int N) {
	if(N == 0) {
		return;
	}

	increasing(N-1);
	cout<<N<<" ";
}


int main() {
	increasing(10);
	cout<<endl;
	decreasing(10);
}