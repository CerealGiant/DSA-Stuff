#include <iostream>
using namespace std;

//Finding square root using binary search(monotonic search space)
float square_root(int n,int p) {
	//Monotonic search space ranging from 0 to n.
	int s = 0;
	int e = n;
	float ans = -1.00;
	while(s<=e) {
		int mid = (s+e)/2;
		if(mid*mid > n) {
			e = mid - 1;
		}else if(mid*mid < n) {
			ans = mid;
			s = mid + 1;
		}else if(mid*mid == n){
			return mid;
		}
	}

	//Floating part
	//Brute force
	float inc = 0.1;
	for(int times=1;times<=p;times++) {
		
		while(ans*ans <=n) {
			ans = ans + inc;
		}
		ans = ans - inc;
		inc = inc/10;

	}

	return ans;
}


int main() {
	int n,p;
	cin >> n >> p;
	cout<<square_root(n,p)<<endl;
}
