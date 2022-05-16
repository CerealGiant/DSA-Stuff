#include <iostream>
#include <climits>
using namespace std;


//Brute Force approach
//O(N^2)
int max_area(int* h,int n) {

	int area = 0;
	int min_height = INT_MAX;

	for(int i=0;i<n;i++) {
		for(int j=i;j<n;j++) {
			for(int k=i;k<=j;k++) {
				//Finding the area
				min_height = min(min_height,h[k]);
			}
			int t_area = min_height*(j-i+1);
			if(t_area > area) {
				area = t_area;
				cout<<"Value of J: "<<j<<endl;
				cout<<"Value of I: "<<i<<endl;
				cout<<"Height: "<<min_height<<endl;
			} 
			min_height = INT_MAX;
		}
	}

	return area;
}

int main() {
	int heights[] = {6,2,5,4,5,1,6};
	int n = sizeof(heights)/sizeof(int);
	cout<<"AREA: "<<max_area(heights,n)<<endl;
}