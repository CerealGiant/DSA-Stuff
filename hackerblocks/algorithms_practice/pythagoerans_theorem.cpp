#include <iostream>
#include <math.h>
using namespace std;

void find_pair(int n) {
	
	//Create a search space from 0-sqrt(n).
	int s = 0;
	int e = sqrt(n);

	while(s<=e) {
		if( sqrt((s*s) + (e*e) ) > sqrt(n) ) {
			e--;	
		}else if( sqrt((s*s) + (e*e) ) < sqrt(n) ) {
			s++;
		}else {
			cout<<"("<<s<<","<<e<<")"<<" ";
			s++;
			e--;
		}
	}
}


int main() {
	int t;
	cin >> t;
	for(int i =0;i<t;i++) {
		int n;
		cin >> n;
		find_pair(n);
		cout<<endl;
	}

	
}