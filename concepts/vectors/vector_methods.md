# Vector Methods

## Push Back which is of O(1) time for most - Adds the element to the end of the vector
	v.push_back(<element>);

## Pop Back - Removes the last element of the vector
	v.pop_back();

## Insert Elements in the middle of the vector
	v.insert(v.begin()+n,<element>,<another element>); //Where n+begin gives you the element after you want add.

## Delete Elements in the middle of the vector
	v.erase(v.begin()+n,<element>)
	v.erase(v.begin(), v.begin()+4) //Delete elements between 1 and 4th element.

## Finding the size of vector
	cout<<v.size()<<endl;

## Resizing the Vector
	v.resize(<value>)

## Remove all elements in a vector
	v.clear();
	if(v.empty()) cout<<"Vector is empty!"<<endl;

## Check first element of a vector
	v.front()

## Check last element of a vector
	v.back()
	
## Reserve

### Why is reserving important?

- When a vector's capacity is half filled, the vector doubles itself. In this process, it will copy over existing elements into a new vector double the size.

- This is a very expensive process. Hence, by reserving the number of elements we need, we minimise the possibility of doubling occuring.

### How is reserving done?
	v.reserve(1000); //In bytes the space you want to reserve.
