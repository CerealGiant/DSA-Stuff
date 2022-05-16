#include <iostream>
#include <vector>
using namespace std;

void prime_sieve(int* p,vector<int>&primes) {
	//Marking all odd as prime
	for(int i=3;i<1000000;i+=2) {
		p[i] = 1;
	}

	for(long long i=3;i<1000000;i+=2) {
		//If number is marked as prime mark its multiples as not prime
		if(p[i] == 1) {
			for(long long j = i*i;j<1000000;j+=i) {
				p[j] = 0;
			}
		}
	}

	//corner case
	p[2] = 1;
	p[0] = p[1] = 0;


	for(int i =0;i<1000000;i++) {
		if(p[i] == 1) primes.push_back(i);
	}


}


int divisors(int n,vector<int> primes) {
	int count = 0;
	int i = primes[count];
	int ans = 1;

	//If a number(e.g) 66 has divisors 2^1, 3^1, 11^1, total number of divisors will be (1+1)*(1*1)*(1*1) = 8.

	while(i*i < n) {
		int c = 0;
		if(n%i == 0) {
			while(n%i == 0) {
				c++;
				n/=i;
			}
			ans*=(c+1);
		}
		count++;
		i = primes[count];
	}

	if(i != 1) {
		ans*=2;
	}
	return ans;
}



int main() {
	int* p = new int[1000005]{0};
	vector<int>primes;
	prime_sieve(p,primes);
	int n;
	cin >> n;
	int a = divisors(n,primes);
	cout<<"Number of divisors are "<<a<<endl;
}