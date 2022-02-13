#include <iostream>
#include <string.h>
using namespace std;

void replacePi(char* a,int i) {
	if(a[i] == '\0' || a[i+1] == '\0') {
		return;
	}

	if(a[i] == 'p' && a[i+1] == 'i') {
		int j = i + 2;

		while(a[j] != '\0') {
			j++;
		}

		//Shifting
		while(j >=i+2) {
			a[j+2] = a[j];
			j--;
		}

		//Adding 3.14
		a[i] = '3';
		a[i+1] = '.';
		a[i+2] = '1';
		a[i+3] = '4';

		replacePi(a,i+4);

	}else {
		replacePi(a,i+1);
	}
}


int main() {
	char arr[21] = {'x','p','i','g','h','p','i','l','m','p','i','p','i','\0'};
	int len = strlen(arr);
	
	replacePi(arr,0);

	for(char x: arr) cout<<x;
	
}