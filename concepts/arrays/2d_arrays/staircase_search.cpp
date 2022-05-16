#include <iostream>
using namespace std;


void staircase_search(int a[][10],int m,int n,int key) {	
	//Pick a starting point 
	int i = 0;
	int j = n - 1;

	while(i != m && j != -1) {
		if(a[i][j] == key) {
			cout<<"Found! "<<i<<" and "<<j<<endl;
			break;
		}else if(a[i][j] > key) {
			j--;
		}else if(a[i][j] < key) {
			i++;
		}
	}



}


int main() {
	int key;
	cin >> key;
	int a[][10] = {{1,4,8,10},{2,5,9,15},{6,16,18,20},{11,17,19,23}};
	staircase_search(a,4,4,key);
}