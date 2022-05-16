#include <iostream>
using namespace std;



int main() {
	//Character Array
	char a[] = {'a','b','c','\0'}; //When creating a character array end with a '\0' char.
	//If while creating a character array, '\0' is not added and cout is used,
	//cout will print garbage value until a '\0' is found.
	cout<<a<<endl; //cout is overloaded for char array which is why whole char array is printed out.

	int b[] = {1,2,3};
	cout<<b<<endl; //For other arrays like int arrays, you get the address of the 1st element of the array.

	//You can use sizeof() operator to get size of char array.
	cout<<sizeof(a)<<endl; // It will say 4 not 3 since \0 is also an element.

	//Input
	cin >> a; //When taking input into a character array, '\0' is automatically added.
	cout<< a;
}