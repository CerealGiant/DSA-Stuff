#include <iostream>
using namespace std;

//2D Arrays have a row and column.
void wave_print(int a[3][4] ) {
	for(int col = 0;col<4;col++) {
		if(col % 2 == 0) {
			//Even col- top down direction
			for(int row = 0;row<3;row++) {
				cout<<a[row][col]<<" ";
			}
		}else {
			//Bottom up direction
			for(int row = 2;row>=0;row--) {
				cout<<a[row][col]<<" ";
			}
		}
	}
}

int main() {
	int a[3][4] = {{1,4,7,10},{2,5,8,11},{3,6,9,12} };
	for(int m = 0;m<3;m++) {
		for(int n = 0;n<4;n++) {
			cout<<a[m][n]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	wave_print(a);
}