#include <iostream>
using namespace std;




long long factorial(long long n) {
	//base case

	if(n <= 0) {
		return 1;
	}

	//rec case
	return n * factorial(n-1);
}


long long sum_modulo(long long* arr,int N) {
	
	long long fact_sum = 0;

	for(int i=0;i<N;i++) {
		fact_sum+=factorial(arr[i]);
	}

	return (fact_sum % 107);
}



int main() {
	int N;
	cin >> N;
	long long arr[N];
	for(int i =0;i<N;i++) {
		cin >> arr[i];
	}
	cout<<sum_modulo(arr,N)<<endl;
}