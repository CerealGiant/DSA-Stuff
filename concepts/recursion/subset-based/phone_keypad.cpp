#include <iostream>
using namespace std;

string list[10] = {"0","1","ABC","DEF","GHI","JKL", "MNO","PQRS","TUV","WXYZ"};

void codes(char* input,char* out,int i,int j) {
	//base case
	if(input[i] == '\0') {
		out[j] = '\0';
		cout<<out<<endl;
		return;
	}

	//rec case
	if(input[i] == '1' || input[i] == '0') {
		return codes(input,out,i+1,j);
	}

	out[j] = list[input[i] - '0'][0];
	codes(input,out,i+1,j+1);
	out[j] = list[input[i] - '0'][1];
	codes(input,out,i+1,j+1);
	out[j] = list[input[i] - '0'][2];
	codes(input,out,i+1,j+1);

}

int main() {

	char numbers[4] = {'1','2','2','\0'};
	char out[100];	
	codes(numbers,out,0,0);
}