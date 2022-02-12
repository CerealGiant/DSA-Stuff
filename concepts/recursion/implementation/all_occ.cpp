#include <iostream>
using namespace std;

//Getting all occurences of a key and storing it in an array
//Storing values gotten in an array recursively*****


int all_occ(int* a,int n,int i,int key,int* out,int j) {
	//Base Case
	if(i == n) {
		return j;
	}

	//rec case
	if(a[i] == key) {
		out[j] = i;
		return all_occ(a,n,i+1,key,out,j+1);
	}
	return all_occ(a,n,i+1,key,out,j);
}


int main() {
	int arr[] = {1,2,4,6,7,6,5,7,8,7,9,7};
	int n = sizeof(arr)/sizeof(int);
	int out[200];
	int key = 7;
	int count = all_occ(arr,n,0,key,out,0);
	cout<<"Count: "<<count;
	cout<<endl;
	for(int i =0;i<count;i++) {
		cout<<"Position: "<<out[i]<<endl;
	}

}