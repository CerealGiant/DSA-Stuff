//Creating a 2D Dynamic array

#include <iostream>
using namespace std;

int main() {
	//There is no direct way to create a 2D Dynamic array in C++. Instead we have to use a series of 1D arrays.
	//In static allocation, 2D arrays are stored in row major form(second row is stored right after first row and son)

	//In heap memory, each array is allocated independently and we do not know the address of the next array. Hence we will need to store the addresses in various pointer variables.

	//If we have r rows, we will need to create r pointer variables.

	//Hence, we will need to first dynamically allocate the 1D arrays of type int, then create another array of pointer variables that will store the starting address of each array of the type int*. Next we will need to create a variable of type int** which points to this array of type int*.

	int** arr;
	int r,c;
	cin>>r>>c;

	arr = new int*[r];

	for(int i =0;i<r;i++) {
		arr[i] = new int[c]{0};
	}

	for(int i =0;i<r;i++) {
		for(int j=0;j<c;j++) {
			cout<<(arr[i][j]);
		}
		cout<<endl;
	
	}

}
