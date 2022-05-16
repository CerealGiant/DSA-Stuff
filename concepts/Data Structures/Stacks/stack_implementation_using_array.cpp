#include <iostream>
#include <vector>
#include <string>
using namespace std;

//Stack if a LIFO structure
//Insert at the top and remove from the top only.


template <typename T> class mystack {
	//Private Variable
	private:
	//vector<T> data;
	T* data;
	int curr_idx;
	int size;


public:

	mystack() {
		size = 5;
		curr_idx = 0;
		data = new T[size];
	}


	mystack(int s) {
		size = s;
		curr_idx = 0;
		data = new T[size];
	}

	void insert(T v) {
		//data.insert(data.begin(),v);

		data[curr_idx] = v;

		curr_idx++;
	
	}

	void pop() {
		//data.erase(data.begin() );

		curr_idx--;
	}

	void top() {
		cout<<data[curr_idx-1]<<endl;
	}

	bool isEmpty() {
		return curr_idx == 0 ? true : false;

	}

	bool isFull() {
		return curr_idx == size ? true : false;
	}

};



int main() {
	int t,n;
	string q;
	cout<<"Enter number of elements you want to enter: ";
	cin >> t;

	//Creating a stack
	mystack<string>* s = new mystack<string>(10);

	while(t != 0) {
		cin >> q;
		s->insert(q);
		t--;
	}

	while(!s->isEmpty()) {
		s->top();
		s->pop();
	}

}