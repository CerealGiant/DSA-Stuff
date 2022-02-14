#include <iostream>
#include <set>
#include <string.h>
using namespace std;

//getting permutations for a string "abc"

void getPermutations(char* a,int i,int n,set<string>& s) { //Passing a set reference.
	//base case
	if(a[i] == '\0') {
		//cout<<a<<endl;
		string t(a);
		s.insert(t);
		return;
	}	

	//rec case
	for(int j = i;j<n;j++) {
		//Any thing before the recursion(function call) will happen before all call stacks are created.
		swap(a[i],a[j]);
		getPermutations(a,i+1,n,s);
		//After the recursion(function call) any thing written below it will happen after all the call frames
		//At the very top of the call stack.
		swap(a[j],a[i]);
	}
}


int main() {
	char arr[] = {'a','b','c','\0'};
	set<string> s;
	getPermutations(arr,0,3,s);

	for(auto x: s) cout<<x<<endl;
}