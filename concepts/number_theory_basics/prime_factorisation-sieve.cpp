#include <iostream>
#include <vector>
using namespace std;

void prime_sieve(int* p,vector<int>& primes) {
	//Setting all odd numbers to be prime
	for(int i=3;i<1000000;i+=2) {
		p[i] = 1;
	}

	for(long long i=3;i<1000000;i+=2){
		//Setting all numbers marked as prime to have their multiples not prime
		for(long long j=i*i;j<1000000;j+=i) {
			p[j] = 0;
		}
	}

	//corner case
	p[2] = 1;
	p[1] = p[0] = 0;


	for(int i =0;i<1000000;i++) {
		if(p[i] == 1) primes.push_back(i);
	}


}


void factorise(int n,vector<int> primes) {
	
	vector<int>divisors;

	int count = 0;
	int i = primes[count];

	while(i*i < n) {

		if(n % i == 0) {
			while(n % i == 0) {
				n/=i;
			}

			divisors.push_back(i);
		}
		
		count++;
		i = primes[count];
	}

	if(i != 1) {
		divisors.push_back(n);
	}


	for(auto x: divisors) {
		cout<<x<<endl;
	}
}



int main() {
	int* p = new int[1000005];
	vector<int> primes;
	prime_sieve(p,primes);
	int n;
	cin >> n;
	factorise(n,primes);
}