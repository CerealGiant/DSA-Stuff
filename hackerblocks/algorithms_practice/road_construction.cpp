#include <iostream>
#include <set>
#include <climits>
using namespace std;

//Only Test cases 0,1,2 are passing


int min_roads(pair<double,double> arr[],int N,double X,double Y) {
	
	set<pair<double,double> > r;
	pair<double,double> results;
	double m,c;
	for(int i =0;i<N;i++) {
		if(arr[i].first - X != 0) {
		m = (arr[i].second - Y)/(arr[i].first - X);
        //You have something like x = 5
		c = arr[i].second - (m*arr[i].first);
		results = make_pair(m,c);
	}else {
		c = arr[i].first;
        //y = 5 for example
		results = make_pair(INT_MAX,c);
	}
		r.insert(results);
	}


	return r.size();


}


int main() {
	int N;
	cin >> N;
	double X,Y;
	cin >> X >> Y;
	pair<double,double> arr[N];
	for(int i =0;i<N;i++) {	
		pair<double,double> p1;
		cin >> p1.first >> p1.second;
		arr[i] = p1;
	}
	cout<<min_roads(arr,N,X,Y)<<endl;
}