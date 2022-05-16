#include <iostream>
#include <climits>
using namespace std;

bool canRead(int* books,int n,int m,int mid) {
	int studentUsed = 1;
	int pages_read = 0;
	for(int i =0;i<n;i++) {
		if(pages_read + books[i] > mid) {
			studentUsed++;
			pages_read = books[i];
			if(studentUsed > m) {
				return false;
			}
		}else {
			pages_read = pages_read + books[i];
		}
	}
	return true;
}


int minPages(int* books,int n,int m) {

	if(n < m) {
		return -1;
	}

	//Set up a monotonic search space
	int s = 0;
	int e = 0;
	for(int i =0;i<n;i++){
		e+=books[i];
	}



	int ans = INT_MAX;

	while(s<=e) {
		int mid = (s+e)/2;
		bool pages = canRead(books,n,m,mid);
		if(pages) {
			ans = min(ans,mid);
			e = mid -1;
		}else {
			//It is not possible to divide at x pages
			//increase the number of pages
			s = mid + 1;
		}
	}

	return ans;
}

int main() {
	int N,M;
	cin >> N >> M;
	int books[N];
	for(int i =0;i<N;i++) {
		cin>>books[i];
	}
	cout<<minPages(books,N,M)<<endl;
}