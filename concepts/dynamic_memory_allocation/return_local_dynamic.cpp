#include <iostream>
using namespace std;

int* fun() {
//	int a[] = {1,2,3,4,5}; //Creating a local array like this and returning it will cause an error when we try to access its elements from the main function. Why? This is because this is a local array and this will be deleted once the function call is over. Hence, tyring to access the elements of this array in main may cause a seg fault or give a garbage value
	//Hence, we should not return the address of a local variable like that.
	int* a = new int[5];
	a[0] = 1;
	//We should create a dynamic array and store the address in a local pointer and return that local pointer.
	//What happens is that before the function call is over and the local variable *a gets deleted, *a's value which is the address of the first element in the array on the heap, will get copied over to b and now b can access that array.
	cout<< a << endl;

	cout<< a[0] << endl;

	return a;
}

int main() {
	int* b = fun();
	cout<<b<<endl;
	cout<<b[0]<<endl;
	delete [] b;
}

