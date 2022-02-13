#include <iostream>
using namespace std;

//Tower of Hanoi

void move(int n, char src, char helper, char dest) {
	//Base case
	if(n == 0) {
		return; //No more discs left to move
	}

	//rec case
	move(n-1,src,dest,helper);
	cout<<"Move disk "<<n<<" from "<<src<<" to "<<dest<<endl;
	move(n-1,helper,src,dest);
}



int main() {
	int n = 3;
	move(n,'A','B','C');
}