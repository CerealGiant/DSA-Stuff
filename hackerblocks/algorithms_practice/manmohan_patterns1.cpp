#include<iostream>
using namespace std;

void pattern(int N) {
    //rec case
    if(N == 1) {
        cout<<"1"<<endl;
        return;
    }

    //base case
    pattern(N-1);

	if(N % 2 != 0) {
		//Odd number
		for(int i =0;i<N;i++) {
			cout<<"1";
		}
		cout<<endl;
	}else {
		//Even number
		int temp = N;
		cout<<"1";
		while(temp-1 != 1) {
			cout<<"0";
            temp-=1;
		}
		cout<<"1"<<endl;
	}

    
 
}

int main() {
	int N;
	cin >> N;
	pattern(N);
	return 0;
}