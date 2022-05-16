#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



vector<string> substrings;

int anagram() {
	int count = 0;
	for(int i =0;i<substrings.size();i++) {
		for(int j=i+1;j<substrings.size();j++) {
			string si = substrings[i];
			string sj = substrings[j];
            sort(si.begin(),si.end());
            sort(sj.begin(),sj.end());
           	if(si == sj) count++;
		}
	}

	return count;
}



void generate_substring(string s) {

	string b = "";
	for(int i =0;i<s.length();i++) {
		for(int j=i;j<s.length();j++) {
			for(int k=i;k<=j;k++) {
				b+=s[k];
			}
			b+='\0';
			cout<<b<<endl; 
			substrings.push_back(b);
			b = "";
		}
	}
}

void q(string s,int i,string out) {
	
}


int main() {
	string s;
	string out;
	cin >> s;
	q(s,2,out);
	// generate_substring(s);
	//cout<<anagram()<<endl;
}