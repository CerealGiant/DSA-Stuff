#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

class Car {
	public:
	int x,y;
	string name;
	
	Car(string n,int x,int y) {
		name = n;	
		this->x = x;
		this->y = y;
	}

	int distance() {
		return sqrt(x*x + y*y);	
	}


};
bool compare(Car a, Car b) {
	int d1 = a.distance();
	int d2 = b.distance();
	
	if(d1 == d2) {
		return a.name < b.name;	
	}
	
	return d1 < d2;
}

int main() {
	vector<Car> p;	
	int n;
	cin >> n;
	for(int i =0;i<n;i++) {
		string name;
		int x,y;
		getline(cin,name,'\n');
		cin >> x;
		cin >> y;
		Car c(name,x,y);
		p.push_back(c);
	}
	sort(p.begin(),p.end(),compare);
	
	for(Car c: p) {
	      	cout<<c.name<<" "<<c.x<<" "<<c.y<<endl;
	}	
}
