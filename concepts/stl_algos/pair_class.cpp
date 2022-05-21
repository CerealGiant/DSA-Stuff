#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	pair<int,char> p;
	p.first = 10;
	p.second =  'B'; 

	//Copying another pair
	pair<int,char>p2(p);

	cout<<p2.first<<endl;
	cout<<p2.second<<endl;

	//Another way to make a pair (using make_pair)

	pair<int,int>p3 = make_pair(10,20);

	//Making pair of pair
	pair<pair<int,int>,string>p4;
	p4.first.first = 10;
	p4.first.second = 20;
	p4.second = "Test";
}
