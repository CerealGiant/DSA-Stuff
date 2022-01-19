#include <iostream>
using namespace std;
//Naive Approach


void prime_sieve(int* p) {
    
    //first mark all the odd numbers prime
    for(int i = 3;i < 1000000;i+=2) {
        p[i] = 1;
    }
    
    //sieve
    for(long long i = 3;i<1000000;i++) {
        //If the current index is marked as prime mark all its multiples as not prime.
        if(p[i] == 1) {
            for(long long j = i*i; j<=100000;j+=i) {
                p[j] = 0;
            }
        }
    }

    //corner cases
    p[2] = 1;
    p[1] = p[0] = 0;

}



int main() {
    int n;
    cin >> n;

    int p[1000005] = {0};
    prime_sieve(p);

    for(int i =0; i <=n;i++) {
        if(p[i] == 1) {
            cout<<i<<" ";
        }
    }


    return 0;
}