#include <iostream>
using namespace std;

class vector {
	public:
	int currentSize;
	int maxSize;
	int* arr;
	
	vector(){
		currentSize = 0;	
		maxSize = 10;
		arr = new int[maxSize];
	}

	void push_back(int data) {
		if(currentSize < maxSize*0.5 - 1) {
			//Meaning that we can insert without doubling	
			arr[currentSize] = data;	
			currentSize++;
		}else {
			//We need to double the array	
			maxSize*=2;
			int* temp_arr = new int[maxSize];
			for(int i =0;i<currentSize;i++) {
				temp_arr[i] = arr[i];	
			}	
			temp_arr[currentSize] = data;
			delete [] arr;	
			arr = temp_arr;
		}		
	}	

	void pop_back() {
		currentSize--;	
	}
	
	void print() {
		for(int i =0;i<currentSize;i++) {
			cout<<arr[i]<<endl;
		}
	}
	
	void popAtPosition(int p) {
		if(p >= currentSize) return;
		cout<<"Current Size: "<<currentSize<<endl;
		for(int i =p;i<currentSize;i++) {
			if(i + 1 <= currentSize) {
				arr[i] = arr[i+1];		
			}
		}		
	}


};

int main() {
	vector v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.popAtPosition(4);
	v.print();
	cout<<v.maxSize<<endl;
}
