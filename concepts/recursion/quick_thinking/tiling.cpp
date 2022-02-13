#include <iostream>
using namespace std;


int ways(int N) {
	//base case
	if(N == 0) {
		return 1;
	}

	//rec case
	if(N >= 4) {
		return ways(N-1) + ways(N-4);
	}else {
		return ways(N-1);
	} 

}

int main() {
	//(1,4) , (4,1)
	//4 X N  4 X 4
	int N = 4;
	int wa = ways(4);
	cout<<wa;
}