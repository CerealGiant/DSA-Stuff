#include <iostream>
#include <string.h>
using namespace std;

//ccoooddinng //Removing duplicates in a string inplace 
    
void remove_duplicates(char* a) {
	int len = strlen(a);
	if(len == 0 || len == 1) return;

	int j = 0;
	for(int i = 1;i<len;i++) {
		//if a[j] == a[i] ignore move to next i and keep j as same
		if(a[j] != a[i]) {
			j++;
			a[j] = a[i];
		}
	}

	a[j+1] = '\0';
	return;
}



int main() {
	char a[1000];
	cin >> a;
	remove_duplicates(a);
	cout<<a<<endl;
}