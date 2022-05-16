#include <iostream>
using namespace std;

//Queue follows a FIFO rule(First In First Out). 

class Queue {
private:
	int* arr;
	int f,r,cs,ms;
public:
	Queue(int ds=5) {
		arr = new int[ds];
		cs = 0;
		ms = ds;
		f = 0;
		r = ms-1;
	}

	bool full() {
		return cs==ms;
	}

	bool empty() {
		return cs==0;
	}

	void push(int d) {
		if(!full()) {
			r = (r+1)%ms;
			arr[r] = d;
			cs++;
		}
	}

	void pop() {	
		if(!empty()) {
			f = (f+1)%ms;
			cs--;			
		}
	}

	void top() {
		cout<<arr[f]<<endl;
	}

	~Queue() {
		if(arr != NULL) {
			delete [] arr;
			arr = NULL;
		}
	}

};



int main() {
	Queue q;
	q.push(10);
	while(!q.empty()) {
		q.top();
		q.pop();
	}
}