# Vectors Intro 

## Vectors are dynamic arrays which can grow and shrink depending on requirements.

- Generally, if a vector originally has space for 10 elements, when element count reaches 5, then the vector's space doubles to include 20 elements.

- To use vectors we need to include <vector> object file.

## How to create and use vectors in C++:


### Defining a Vector of type int
		vector<int> a; 

### Creating a vector with 5 elements each having a value of 10
		vector<int>b(5,10); 

### We can also create a copy of another vector like this
		vector<int>c(b.begin(),b.end());

### We can also create a vector with some individual values
		vector<int>d{1,5,2,7};

		
### We can iterate using a for loop
		for(int i =0;i<b.size();i++) {
			cout<< b[i] << endl;	
		}


### We can iterate using a iterator
		for(vector<int>::iterator it = b.begin();it != b.end();it++) {
			cout<<(*it)<<endl;
		}
		
### We can also iterate using a for each loop
		for(int i: b) {
			cout<<i<<endl;
		}

### It adds an element to the end of the vector
		v.push_back(<number_to_add>) 

### Understanding at a memory level what are difference between a vector and array
		cout<<v.size()<<endl;
		cout<<v.capacity()<<endl; //Size of underlying array //The capacity may be more than the size
		cout<<v.max_size()<<endl; //Maximum elements that can be held in worst case
		
		cout<<d.size()<<endl;
		cout<<d.capacity()<<endl; //Size of underlying array
		cout<<d.max_size()<<endl; //Maximum elements that can be held in worst case
