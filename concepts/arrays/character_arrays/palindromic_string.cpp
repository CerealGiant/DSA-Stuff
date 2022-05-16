#include <iostream>
#include <string.h>
using namespace std;


bool checkPalindrome(char* a) {
	int i = 0;
	int j = strlen(a) - 1;

	while(i < j) {
		if(a[i] == a[j]) {
			i++;
			j--;
		}else if(a[i] != a[j]) return false;
	}

	return true;
}


int main() {
	char a[1000];
	cin >> a;

	if(checkPalindrome(a) ) {
		cout<<a<<" is a palindrome!"<<endl;
	}else {
		cout<<a<<" is not a palindrome!"<<endl;
	}
}