#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;


int stow(char* s,int len) {
	//base case
	if(len == 0) {
		return 0;
	}

	return (s[0]-'0')*pow(10,len-1) + stow(s+1,len-1);
}


int main() {
	char a[] = {'1','2','3','4','\0'};
	int len = strlen(a); 
	int number = stow(a,len);
	cout<<number<<endl;

}