#include <iostream>
using namespace std;

int profit(int* a,int n,int i) {
    //base case
    
    if(i >= n) {
        return 0;
    }

    //rec case
    int p1 = 0;
    for(int k =2;k<n;k++) {
     p1 = max(p1,a[i] + profit(a,n,i+k));
    }


    return p1;
}


int main() {
	int t;
	cin >> t;
	for(int i=0;i<t;i++) {
		int n;
		cin >> n;
		int houses[n];
		for(int k=0;k<n;k++) {
			cin >> houses[k];
		}

        int maxProfit = 0;

		for(int k=0;k<n;k++) {
            maxProfit = max(maxProfit,profit(houses,n,k) );
        }

        cout<<maxProfit<<endl;

	}


}