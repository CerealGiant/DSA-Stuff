#include <iostream>
#include <algorithm>
using namespace std;

bool compare(string a,string b) {
	if(a.length() == b.length() ) {
		return a < b; //compare lexiographically //overloaded less than operator
	}
	return a.length() > b.length();
}

int main() {
	string s[100];

	int n;
	cin >> n;
	cin.get(); //To absorb extra space
	for(int i =0;i<n;i++) {
		getline(cin,s[i]); //for a string cin.getline does not work so you have to use getline(cin,string)
	}	

	sort(s,s+n,compare); //by default it is sorted lexiographically.

	for(int i =0;i<n;i++) {
		cout<<s[i]<<endl;
	}
}
