#include <iostream>
using namespace std;


void getInput(char* a,int max,char delim) { //delim = delimeter
	int count = 0;
	char ch = cin.get();
	while(ch != delim) {

		a[count] = ch;
		count++;

		if(count == max-1) break;
		ch = cin.get();
		
	}

	a[count] = '\0';
	return;
}


int main() {
	char a[1000] = "";

	//cin >> a; //Reading input using cin.
	//cout<<a<<endl; //With cin, only text before a space or '\n' will be printed.
	//To prevent this we use cin.get() like this
	//getInput(a,1000,'$');
	//cout<<a<<endl;

	//However STL provides a way to do so as well
	cin.getline(a,1000); //default delim is '\n'.
	cout<<a<<endl;


}
