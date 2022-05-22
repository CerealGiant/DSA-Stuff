#include <iostream>
#include <vector>
#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;

bool compare(pair<int,int>p1,pair<int,int>p2) {
	int d1 = sqrt( (p1.first)*(p1.first)+ (p1.second)*(p1.second));
	int d2 = sqrt( (p2.first)*(p2.first)+ (p2.second)*(p2.second));
	
	if(d1 == d2) {
		return p1.first < p2.first;	
	}
	return d1 < d2;

}

int main() {
	int n;
	cin >> n;
	vector<pair<int,int>> v;
	for(int i =0;i<n;i++) {
		int x,y;
		cin >> x >> y;
		v.push_back(make_pair(x,y));	
	}
	//We want to sort according to distance from the origin(0,0)
	sort(v.begin(),v.end(),compare);
	cout<<endl;
	for(auto it: v) {
		cout<<it.first<<" "<<it.second<<endl;
	}

}
