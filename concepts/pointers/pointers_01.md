# Pointers 01


# Address of operator (&)

- The & Operator finds the address of a given variable

	x = 10
	cout << &x  //This will return a hexadecimal value which the address of the variable

	//The above cout does not work with a character
	char ch = 'A';
	cout << &ch << endl; //This will still print a character because of operator overloading
	cout << (void *)&ch << endl; //By doing explict typecasting, now the datatype is changed from char* to void*,hence you get the address
