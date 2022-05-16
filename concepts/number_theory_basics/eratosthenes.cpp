#include <iostream>
using namespace std;

void prime_sieve(int* arr,int* cSum) {
	//Setting all the odd numbers as prime
	for(long long i =3;i<1000000;i+=2) {
		arr[i] = 1;
	}

	for(long long i=3;i<1000000;i+=2) {
		//If number is marked as prime, mark all its multiples as not prime
		if(arr[i] == 1) {
			for(long long j=i*i;j<1000000;j+=i){
				arr[j] = 0;
			}
		}
	}

	//corner case
	arr[2] = 1;
	arr[1] = arr[0] = 0;

	for(int i=0;i<1000000;i++) {
		cSum[i] = cSum[i-1] + arr[i];
	}

}



int main() {
	int* p = new int[1000005]{0};
	int* cSum = new int[1000005]{0};
	prime_sieve(p,cSum);
	int t;
	cin >> t;
	for(int i =0;i<t;i++) {
		int lb,ub;
		cin >> lb >> ub;
		cout<<cSum[ub] - cSum[lb-1]<<endl;
        // for(int j =0;j<ub;j++) {
        //     if(p[j] == 1) cout<<j<<",";
        // }
	}
}