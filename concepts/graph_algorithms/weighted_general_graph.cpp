#include <iostream>
#include <list>
#include <unordered_map>
using namespace std;

template<typename T>
class graph {
	unordered_map<string,list<pair<string,T>>> adjacency_list;
	
public:
	void addEdge(string x,string y,T wt,bool bidir) {
		adjacency_list[x].push_back(make_pair(y,wt));	
		if(bidir) {
			adjacency_list[y].push_back(make_pair(x,wt));
		}
	}

	void printGraph() {
		for(auto p: adjacency_list) {
			cout<<p.first<<"->";
			for(auto nbr_pair:p.second) {
				cout<<nbr_pair.first<<","<<nbr_pair.second<<"|";
			}
			cout<<endl;
		}
	}
};

int main() {
	graph<int> g;
	g.addEdge("A","B",20,true);
	g.addEdge("A","D",50,false);
	g.addEdge("B","D",40,true);
	g.addEdge("A","C",10,true);
	g.addEdge("C","D",30,true);
	g.printGraph();	
}
