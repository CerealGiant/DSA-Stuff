#include <iostream>
#include <string.h>
using namespace std;

char* stringTok(char* s,char delim) {
	//Creating a static variable that stores the state of the variable after each function call. Only initialised once.
	static char* input = NULL;
	if(s != NULL) {
		//Input should point to the start of s(first token in s)
		input  = s;
	}

	if(input == NULL) { //When the last token is extracted, we return null which can be used to check if all the tokens in the string have been extracted
		return NULL;
	}

	//Extracting the tokens.
	char* output = new char[strlen(input)+1];
	int i =0;
	for(;input[i] != '\0';i++) {
		if(input[i] != delim) {
			output[i] = input[i];
		}else {
			output[i] = '\0';
			input = input + i + 1; //Moving input to the next token
			return output;
		}
	}
	//corner case
	//for the last token since for loop will end since there is no delimeter at the end
	output[i] = '\0';
	input = NULL;
	return output;
}


int main() {
	char s[1000];
	cin.getline(s,1000);
	char* ptr = stringTok(s,' ');
	cout<<ptr<<endl;
	while(ptr != NULL) {
		ptr = stringTok(NULL,' ');
		cout<<ptr<<endl;
	}
}
