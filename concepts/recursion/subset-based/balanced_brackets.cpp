#include <iostream>
using namespace std;

void brackets(int N,int open,int close,int i,char* out) {
	//base case
	if(i == 2*N) {
		out[i] = '\0';
		cout<<out;
		cout<<endl;
		return;
	}

	//rec case
	if(open < N) {
		out[i] = '(';
		brackets(N,open+1,close,i+1,out);
	}

	if(open > close && close < N) {
		out[i] = ')';
		brackets(N,open,close+1,i+1,out);
	}



}


int main() {

	int N = 3;
	char out[100];
	brackets(N,0,0,0,out);

}