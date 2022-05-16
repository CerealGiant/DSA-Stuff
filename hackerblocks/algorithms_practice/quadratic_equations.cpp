#include <iostream>
#include <math.h>
using namespace std;

pair<int,int> get_root(int a,int b,int c) {
	int r1 = ( (-1*b) + sqrt( ((b*b) - (4*a*c)) ) )/(2*a);
	int r2 = ( (-1*b) - sqrt( ((b*b) - (4*a*c)) ) )/(2*a);

	return make_pair(r1,r2);

}


int main() {
	int a,b,c;
	cin >> a >> b >> c;

	if( ((b*b) - (4*a*c)) > 0) {
		cout<<"Real and Distinct"<<endl;
		pair<int,int> p1 = get_root(a,b,c);
		
		if(p1.first < p1.second) {
			cout<<p1.first<<" "<<p1.second<<endl;
		}else {
			cout<<p1.second<<" "<<p1.first<<endl;
		}


	}else if(((b*b) - (4*a*c)) == 0) {
		cout<<"Real and Equal"<<endl;
		pair<int,int> p2 = get_root(a,b,c);
		cout<<p2.first<<" "<<p2.second<<endl;
	}else {
		cout<<"Imaginary"<<endl;
	}
}