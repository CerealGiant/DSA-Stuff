#include <iostream>
#include <string.h>
using namespace std;
//char* strtok(char* s,char* delimeters)
//returns a token with each call
//on the first call, add the string to be tokenised.
//on the subsequent calls, add NULL instead of adding the same string in string parameter to get the rest of the tokens.

int main() {
	char s[100] = "Today is a rainy day";
	char* p = strtok(s," ");
	cout<<p<<endl;
	while(p != NULL) {
		p = strtok(NULL," ");
		cout<<p<<endl;
	}


}