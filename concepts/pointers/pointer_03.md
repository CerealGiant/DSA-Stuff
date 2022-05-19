# Pointers 03

# Derefrencing Operator

- The derefence pointer is still the same as the pointer symbol
- By derefrencing a pointer, you can access the value stored at the address stored in the pointer

	int x = 10;
	int* xptr = &x
	cout<<*(xptr)<<endl; //xptr holds the address of x -> * of that address will give you the value in the x bucket.



# What is the difference between the 2 statments below?

	cout << *(xptr) + 1 <<endl;
	cout << *(xptr + 1) << endl;

- First statement will return 10 + 1 while second statement will access what is stored in the next bucket (x's address + 1)


# What will be the output of the following statements?

	int x = 10;
	int* xptr;
	xptr = &x

	//Statment 1
	cout << &x <<endl; //This will print the address of x

	//Statment 2
	cout<<xptr<<endl; //This will print the address of x as well since xptr stores the address of x

	//Statement 3
	cout<<*(&x)<<endl; //This will print the value of x since we are dereferncing the address

	//Statement 4
	cout<< *(xptr)<<endl; //This will print the value of x

	//Statement 5
	cout<<*(&xptr)<<endl; //This will print the address of x since we are dererefncing the address of xptr.

	//Statement 6
	cout<<&(*xptr)<<endl; //This will print the address of x

# Some clarifications of pointers

- If you have a variable of type int, pointer has int*
- If you have variable of type int*, pointer has type int** which is called a double pointer -> pointer to a pointer
	
