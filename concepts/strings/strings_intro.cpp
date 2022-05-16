#include <iostream>
#include <string>
using namespace std;


int main() {
	//String init
	string s0;
	string s1("hello");
	string s2 = "hello world";
	string s3(s2);
	string s4 = s3;

	char a[] = {'a','b','c','\0'};
	string s5(a);
	cout<<s5<<endl;

	//Checking an empty string
	if(s0.empty() ){ //empty() returns a booelean
		cout<<"s0 is empty"<<endl;
	}


	//Amending
	s1.append(" and yo lol");
	cout<<s1<<endl;
	s1 += " and hello";
	cout<<s1<<endl;

	//Clearing a string
	cout<<s1.length() <<endl;
	s1.clear();
	cout<<s1.length()<<endl;


	//Compare 2 strings
	s0 = "Apple";
	s1 = "Mango";
	cout<<s1.compare(s0)<<endl; //If compare returns 0 then it means strings are equal

	if(s1 > s0) {
		//Comparators are overloaded for strings
		cout<<"s1 is longer than s0"<<endl;
	}

	cout<<s0[0]<<endl;


	//Finding substrings
	string s7 = "I want to have apple juice";
	int idx = s7.find("apple");
	cout<<idx<<endl;
	cout<<s7<<endl;

	//Removing a word from a string
	string word = "apple";
	int len = word.length();
	s7.erase(idx,len+1);
	cout<<s7<<endl;


	//Iterate over all characters in a string
	for(int i =0;i<s1.length();i++) {
		cout<<s1[i]<<":";
	}

	cout<<endl;

	//Use iterators
	for(string::iterator it = s1.begin();it != s1.end();it++) { //it datatype = string::iterator
		cout<<(*it)<<":"; //it is a pointer and *it dereferences the pointer and you get the value stored at the address pointed at by it
	}

	cout<<endl;

	//For each
	for(auto x: s1) {
		cout<<x<<":";
	}
}