# Pointers 02

# Concept of pointers in C++

- A pointer is a variable that stores the address of another variable

- Creating a pointer:
	x = 10 //x has an address which can be gotten using the '&' operator
	int* ptr = &x //This ptr will have a type of int*

- Hence the syntax to declare a pointer is as such:

	int* y = &x  //This is called declaration with initalisation
	
	int* y; //Declaration
	y = &x; //Assignment

- When a pointer is declared and not initialised, the pointer points to a garbage value and hence it is good to make the pointer initalised to point to 0.


- Pointer datatypes must be followed, we cannot store the address of an int in a char pointer


# Size of a pointer variable

	int b = 45;
	int* a = &b; 

	char c = 'A';
	char* d = &c;

- Both the pointers will have the same size(either 4 bytes or 8 bytes depending on the system). This is because the space occupied to store the address of the variables is the same despite the type of the variables differing.

# Why you should not store different datatypes' address in a pointer of a different datatype:

- For example, if you have a char pointer and store the address of the int of it, when you try to dereference to pointer to get the value, the pointer will only read 1 byte of data rather than 4 bytes of data. 

