#include <iostream>
#include <stack>
using namespace std;

void transfer(stack<int>&s1,stack<int>&s2,int n) {
	for(int i =0;i<n;i++) {
		s2.push(s1.top());
		s1.pop();
	}
}

void stackReverse(stack<int>&s1) {
	//For each element in s1
	int n = s1.size();
	stack<int>s2;
	for(int i =0;i<n;i++) {
		//Store the topmost value in a temporary variable
		int x = s1.top();
		s1.pop();
		//Copy over n-1-i members of the stack s1 to s2.
		transfer(s1,s2,n-1-i);
		//Copy x to s1.
		s1.push(x);
		//Then copy over n-1-i members of the stack s2 to s1.
		transfer(s2,s1,n-1-i);

	}
}


int main() {
	stack<int> s1;
	for(int i =1;i<=4;i++) s1.push(i);	

	cout<<"BEFORE: "<<endl;
	while(!s1.empty()) {
		cout<<s1.top()<<endl;
		s1.pop();
	}
	
	for(int i =1;i<=4;i++) s1.push(i);

	stackReverse(s1);
	
	cout<<"AFTER: "<<endl;
	while(!s1.empty()) {
		cout<<s1.top()<<endl;
		s1.pop();
	}

}