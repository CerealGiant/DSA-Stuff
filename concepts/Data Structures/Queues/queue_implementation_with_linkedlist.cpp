#include <iostream>
#include <list>
using namespace std;

class queue {
private:
	list<int> arr;
	int cs;
public:

	queue() {
		cs = 0;
	}

	void push(int d) {
		arr.push_back(d);
		cs++;
	}

	bool empty() {
		return cs==0;
	}

	void front() {
		cout<<arr.front()<<endl;
	}

	void pop() {
		if(!empty()) {
			arr.pop_front();
			cs--;
		}

	}


};

int main() {
	queue q;
	q.push(5);
	q.push(10);
	q.push(15);
	q.push(20);
	q.push(25);
	while(!q.empty()) {
		q.front();
		q.pop();
	}
}