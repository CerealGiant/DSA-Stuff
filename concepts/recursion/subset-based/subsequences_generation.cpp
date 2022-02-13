#include <iostream>
using namespace std;

void subset(char* s,int i,int j,char* out) {
	//base case
	if(s[j] == '\0') {
		out[i] = '\0';
		cout<<out;
		cout<<endl;
		return;
	}
	//rec case

	//Including that particular character
	out[i] = s[j];
	subset(s,i+1,j+1,out);

	//Not including that particular character
	subset(s,i,j+1,out);
}



int main() {
	char s[] = {'a','b','c','\0'};
	char out[100];
	subset(s,0,0,out);

}