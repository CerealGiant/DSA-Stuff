#include <iostream>
#include <vector>
using namespace std;

vector<int> prime_list(int* p) {
    //Setting all odd numbers to be prime
    for(long long i =3;i<=1000000;i+=2) {
        p[i] = 1;
    }
    for(long long i = 3;i <=1000000;i++) {
        //If number is marked as prime, mark its multiples as non prime
        if(p[i] == 1) {
            for(long long j = i*i;j <=1000000;j+=i) {
                p[j] = 0;
            }
        }        
    }
    //corner cases
    p[2] = 1;
    p[0] = p[1] = 0; 


    vector<int> prime_values;
    for(int i =0; i <= 1000000;i++) {
        if(p[i] == 1) prime_values.push_back(i);
    }
    return prime_values;
}


int find_divisor(vector<int> p,int n) {
    int i = 0;
    int prime = p[i];
    int count = 0;
    int ans = 1;
    
    while(prime * prime <= n) {
    
    if( n % prime == 0) {

    while(n % prime == 0) {
        count++;
        n/=prime;
    }

    ans = ans * count;
    }

    i++;
    prime = p[i];

    }

    if(n != 1) ans = ans * 2; //For example n == 11 then we have 11^0 and 11^1.

    return ans;

}


int main() {
    int n;
    cin >> n;
    int p[1000005] = {0};
    vector<int> l = prime_list(p);

    int ans =  find_divisor(l,n);
    
    cout<<ans<<endl; 
    
    return 0;
}