#include <iostream>
using namespace std;

void print_pattern(int N) {

	string line;

	for(int i =0;i<(N*2)-1;i++ ) {
		line+="*";
	}

	cout<<line<<endl;

	int blanks = 1;

	for(int i =N-1;i>=1;i--) {
		line = "";
		for(int j =0;j<i;j++) {
			line+="*";
		}
		//Blanks
		for(int k=0;k<blanks;k++) {
			line+=" ";
		}
		for(int j =0;j<i;j++) {
			line+="*";
		}
		cout<<line<<endl;
		blanks+=2;

	}

	blanks-=4;

	for(int i =2;i<=N-1;i++) {
		line = "";
		for(int j =0;j<i;j++) {
			line+="*";
		}
		//Blanks
		for(int k=0;k<blanks;k++) {
			line+=" ";
		}
		for(int j =0;j<i;j++) {
			line+="*";
		}
		cout<<line<<endl;
		blanks-=2;

	}

	line = "";

	for(int i =0;i<(N*2)-1;i++ ) {
		line+="*";
	}

	cout<<line<<endl;
}



int main() {
	int N;
	cin >> N;
	print_pattern(N);
}