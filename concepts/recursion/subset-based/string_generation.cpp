#include <iostream>
using namespace std;

char code[27] = {'0','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};



void generate_strings(char* a,int i,int j,char* out) {
	//base case
	if(a[i] == '\0') {
		out[j] = '\0';
		cout<<out<<endl;
		return;
	}

	//rec case
	//Including just single digit
	int digit = a[i] - '0';
	out[j] = code[digit];
	generate_strings(a,i+1,j+1,out);

	//Including next digit as well
	if(a[i+1] != '\0') {
	int digit1 = a[i] - '0';
	int digit2 = a[i+1] - '0';
	int number =  digit1*10 + digit2;

	if(number <= 26) {
		out[j] = code[number];
		generate_strings(a,i+2,j+1,out);
	}
}
}


int main() {
	char a[] = {'1','2','3','4','\0'};
	char out[200];
	generate_strings(a,0,0,out);
}