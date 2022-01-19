#include <iostream>
using namespace std;
//Rather than generating 1000 prime number arrays for 1000 queries, do the cumulative sum of all prime numbers and then find the number of prime numbers in that range.


void prime_sieve(int *p) {
    //Set all odd numbers to prime
    for(int i = 3;i <= 1000000;i+=2) {
        p[i] = 1;
    }

    for(long long i = 3; i <=1000000;i++) {
        //If number is marked as prime mark its multiples as non-prime.
        if(p[i] == 1) {
            for(long long j = i*i; j <=100000;j+=i) {
                p[j] = 0;
            } 
        }
    }

    //corner case
    p[2] = 1;
    p[0] = p[1] = 0;


}


int main() {
    int p[1000005] = {0};
    //To find the number of prime numbers in a range,
    prime_sieve(p);
    int csum[1000005] = {0};
    csum[0] = 0;
    for(int i =1; i <= 1000000;i++) {
        csum[i] = csum[i-1] + p[i];
    }
    int t = 0;
    cin >> t;
    for(int i =0; i < t;i++) {
        int a,b;
        cin >> a >> b;
        cout<<csum[b]-csum[a-1]<<endl; //Remember to do a-1 because index count starts from 0.
    }

    return 0;
}