#include <iostream>
using namespace std;
//Optimised Approach


bool isPrime(int n) {

    if(n == 1) return false;
    if(n == 2) return true;

    for(int i =2; i*i<n;i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;



    return 0;
}