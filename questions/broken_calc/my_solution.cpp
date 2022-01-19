#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

long long factorial(long long number) {
    if(number == 1) return 1;
    else return number*factorial(number - 1);
}


int main() {
    long long number;
    cin >> number;
    cout<<factorial(number)<<endl;
}