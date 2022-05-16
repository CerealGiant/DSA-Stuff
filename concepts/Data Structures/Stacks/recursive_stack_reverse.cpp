#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int>&s1,int value) {

	//rec case
	if(s1.empty()){s1.push(value);return;}

	//base case
	int data = s1.top();
	s1.pop();
	insertAtBottom(s1,value);
	s1.push(data);


	//Alternate Method(without recursion)
	/* int tempVal[100];
	// int count = 0;
	// while(!s1.empty()) {
	// 	tempVal[count++] = s1.top();
	// 	s1.pop();
	// }

	// s1.push(value);

	// for(int i=0;i<count;i++) {
	// 	s1.push(tempVal[count-i-1]);
	// } */



}

void reverseStack(stack<int>&s1) {
	//base case
	if(s1.empty()) {
		return;
	}

	//rec case
	int x = s1.top();
	s1.pop();
	reverseStack(s1);
	//Happens after all the recursive calls after base case is hit
	insertAtBottom(s1,x);
}


int main() {
	stack<int> s1;
	for(int i =1;i<=4;i++) s1.push(i);	
	reverseStack(s1);	

	cout<<"AFTER: "<<endl;
	while(!s1.empty()) {
		cout<<s1.top()<<endl;
		s1.pop();
	}
}