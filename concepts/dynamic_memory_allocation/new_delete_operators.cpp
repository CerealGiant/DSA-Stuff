// Using the new and delete operators

#include <iostream>
using namespace std;

int main() {

//Allocation + Deallocation = Compiler (Static)
int b[100];
cout << sizeof(b) << endl; //Here b represents the whole array but note that doing cout<<b<<endl still gives the addressof the first element in b -> this value comes from the symbol table.
cout << b << endl; // b cannot be overwritten since b is part of read only memory since this is assigned at compile time.
//Dynamic Allocation
int n;
cin >> n;
int* a = new int[n]{0}; //Here a represents only the address of the first element. (initalising with 0) 
cout<< sizeof(a) << endl;
cout << a <<endl; //Variable a that is created in static memory 

for(int i =0;i<n;i++) {
	cin >> a[i];
}

//Deleting Dynamic array(Deallocation)
delete [] a;

}
