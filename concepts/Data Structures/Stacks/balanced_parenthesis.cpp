#include <iostream>
#include <stack>
#include <string.h>
#include <string>
using namespace std;

bool isValidExp(string s) {
	stack<char> s1;
	for(int i =0;i<s.length();i++) {
		if(s[i] == '(') {
			s1.push(s[i]);
		}else if(s[i] == ')') {
			if(!s1.empty()) {
			if(s1.top() == '(') s1.pop();
			else s1.push(s[i]);
		}else s1.push(s[i]);

		}
	}
	return s1.empty();
}

int main() {
	string s = "(a+b)(())";
	if(isValidExp(s)) {
		cout<<"Expression is valid!"<<endl;
	}else {
		cout<<"Invalid Expression!"<<endl;
	}
}