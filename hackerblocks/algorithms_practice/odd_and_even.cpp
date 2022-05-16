#include <iostream>
#include <vector>
using namespace std;

void extract_digits(int a,vector<int>& b) {
	//base case
    if(a < 10) {
        b.push_back(a);
        return;
    }

    //rec case
    extract_digits(a/10,b);
    b.push_back(a%10);

    
}


string criteria(int c) {
	vector<int> b;
	extract_digits(c,b);

	int even = 0;
	int odd = 0;

	for(int x: b) {
		if(x % 2 == 0) even+=x;
		else odd+=x;
	}

	if(even % 4 == 0 || odd % 3 == 0) return "Yes";
	else return "No";


}


int main() {
	int n;
	cin >> n;
	for(int i =0;i<n;i++) {
		int check;
		cin >> check;
		cout<<criteria(check)<<endl;
	}
}