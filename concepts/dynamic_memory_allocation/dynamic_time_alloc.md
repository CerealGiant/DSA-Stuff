# Runtime/Dynamic Memory Allocation

## What is Runtime/Dynamic Memory Allocation

- It allows us to define the memory requirements **during the execution of the program**

- This uses the special part of the memory called the **heap memory**. We have 2 parts of the memory -> one is the static/stack memory and the other is the heap memory. The heap memory is slightly bigger than the stack memory.

- We can reuse the same memory space to reallocate another variable, for example if we want to create a another array of1000 elements of students, we can reassign an array of 1000 elements of integer.

- Keywords used in runtime allocation is new/delete. new is used to allocate the memory and delete is used to free the memory.

- Here allocation and deallocation is done by the user, rather than the compiler in compile time allocation.

## How does Runtime Memory Allocation work?

	new int; //Line 1
	int x; //Line 2	


- In both lines, we are creating an integer. However, in line 2, this will occur at compile time in which the address of the integer is already decided during compile time and cannot be changed.

- However, Line 1 will only run during runtime and the address of this integer will only be known when the line ie executed during runtime.

- Using the new keyword will not only create the variable on the heap memory but will also return the address of the integer on the heap memory. Meaning to say that we will need to use a pointer to store the address of this variable in order to access it or use it. **The pointer will be stored in the static part of the memory**

### Hence what is the point of dynamic allocation? 

- The main use of dynamic allocation comes when we want to create a large array or an array that we know needs to be reassigned or resized later in the program.

- Lets look at an example where we will create an integer array of 1000 elements statically and dynamically.

- When the array is created statically, we cannot change the size of the array later on since the memory is already allocated to it(virtual memory mapping) during the compile time itself.

- When we create the array dynamically, we will have the pointer stored in the static/heap part of the memory **which will point to the first element on the array in the heap.**

- When you try to find the size of the array, for the statically created one, you will get the size of the array. But in the case of the dynamically created array, you will get only the size of the pointer since the pointer simply points to the array in the heap memory.

- We can reuse the dynamically created array. 

	int* a = new int[10000];
	a = new int[500];

- Now, given that a is just a pointer, a will now point to a new part of the dynamic array(the new array of 500 int) and a will store the memory address of the first element there. However, now the array of 10000 int is now just left floating in the dynamic memory since it is now inaccessible. This is known as a **memory leak** since there is no way to refer to this old array. This memory is now occupied throughout the whole duration of the program and this much memory is wasted.

- Instead, we should have done this:


	int* a = new int[10000];
	delete [] a; //We cannot do delete a since a is a pointer to a whole array and we want to delete the whole array.
