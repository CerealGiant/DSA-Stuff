# Pointers 04

# Passing by reference using pointers

- Generally in functions, we pass by value

	void increment(int a) {
		a = a + 1

	}

	int main() {
		int a = 10;
		increment(a)
	
	}

- In the above case, when you print the value of a inside increment, it is 11 but in the main function it is still 10
- This is because of a phenomenon called pass by value. When the local variable a in main is created, it is stored in the local memory of the main in the callstack. When increment is called, a new frame is added to the memory callstack. When you pass a, you are passing a copy of a to the increment function
- Thus, when you exit increment, the frame is deleted and memory is lost, hence a's value still stays as 10

- How to solve this? 
- We need to pass by reference now

# Passing by reference using pointers

	void increment(int* a) { //Instead of passing a, we will pass the address of a using a pointer
		*a = *a + 1;

	}


	int main() {
		int a = 10;
		increment(&a);
	}
