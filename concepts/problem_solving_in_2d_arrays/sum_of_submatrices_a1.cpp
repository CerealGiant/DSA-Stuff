#include <iostream>
using namespace std;

int subarray_sum(int a[][10],int m,int n) {
	//Top Left(i,j) and Bottom Right(i,j)
	int sum = 0;
	for(int li = 0;li<m;li++) {
		for(int lj=0;lj<n;lj++) {
			for(int bi = li;bi<m;bi++) {
				for(int bj = lj;bj<n;bj++) {
					for(int i = li;i<=bi;i++) {
						for(int j = lj;j<=bj;j++) {
							sum+=a[i][j];
						}
					}
				}
			}
		}
	}
	return sum;
}


int main() {
	int a[][10] = {{1,1},{1,1}};
	cout<<subarray_sum(a,2,2)<<endl;
}