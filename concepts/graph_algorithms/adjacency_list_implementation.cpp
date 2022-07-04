#include <iostream>
#include <list>
using namespace std;

class graph {
	list<int>* l; //Pointer to an array of vector<int> graphs
	int V;

public:
	graph(int V) {
		this->V = V;
		l = new list<int>[V];
	}

	void addEdge(int x,int y) {
		//Edge between x and y is assumed to be bidrectional(undirected)
		l[x].push_back(y);
		l[y].push_back(x);
	}

	void printGraph() {
		for(int i =0;i<V;i++) {
			cout<<i<<"-> ";
			for(auto x: l[i]) {
				cout<<x<<",";
			}
			cout<<endl;
		}
	}


};




int main() {
	graph g(5);
	g.addEdge(0,1);
	g.addEdge(1,2);
	g.addEdge(3,4);
	g.addEdge(4,2);
	g.printGraph();

}
