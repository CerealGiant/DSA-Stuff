#include <iostream>
#include <queue>
using namespace std;

//Application 1:
//push has a time complexity of O(1).
//pop has a time complexity of O(N).


class stack {
private:
	queue<int> q1;
	queue<int> q2;
	int cs,f;

public:

    stack() {
        cs = 0;
    }

	void push(int d) {
		q1.push(d);
		cs++;
		f = d;
	}

	bool isEmpty() {
		return cs==0;
	}

    

	void pop() {
		//Move over all elements to q2.
		if(q1.empty()) {
			return;
		}
		int ts = cs;
		int d;
		while(ts > 1) {
			d = q1.front();
			q1.pop();
			q2.push(d);
			ts--;
		}

		q1.pop();
		cs--;
		ts = cs;

		while(ts > 1) {
			d = q2.front();
			q2.pop();
			q1.push(d);
			ts--;
		}
		//Last element is the new front.
		f = q2.front();
		q2.pop();
		q1.push(f);

	}

	int front() {
		return f;
	}




};


int main() {
	stack s;
	int t;
	cin >> t;
	for(int i =0;i<t;i++) {
		int n;
		cin >> n;
		s.push(n);
	}
	cout<<endl;
	while(!s.isEmpty()) {
		cout<<s.front()<<endl;
		s.pop();
	}
}