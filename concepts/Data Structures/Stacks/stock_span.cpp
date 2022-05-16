#include <iostream>
#include <stack>
using namespace std;
//Time complexity -> O(N).


void stock_span(int* prices,int n) {
	
	stack<int> s;
	
	int span[n];
	span[0] = 1;
	s.push(0);


	for(int i =1;i<n;i++) {
		while(!s.empty() && prices[i] > prices[s.top()]) s.pop();
		if(s.empty()) span[i] = i+1;
		else {
			span[i] = i - s.top();
		}
		s.push(i);
	}

	for(int i =0;i<n;i++) {
		cout<<span[i]<<" ";
	}
}


int main() {
	int prices[] = {100,80,60,70,60,75,85};
	int n = sizeof(prices)/sizeof(int);
	stock_span(prices,n);
}