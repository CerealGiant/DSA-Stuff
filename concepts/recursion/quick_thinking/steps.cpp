#include <iostream>
using namespace std;

int steps(int s,int N) {
	//base case 
	if(N == 0) {
		return 1;
	}
	
	//rec case
	int count = 0;
	for(int i = 1;i<=s;i++) {
		if(N >= i) {
			count+=steps(s,N-i);
		}
	}
	return count;
}


int main() {
	int ways = steps(3,4);
	cout<<ways<<endl;
}