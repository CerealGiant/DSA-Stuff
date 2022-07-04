#include <iostream>
#include <map>
using namespace std;

template<typename T>
class graph {
	map<T,list<T>> m;
public:
	void addEdge(T x, T y) {
		m[x].push_back(y);
		m[y].push_back(x);
	}

	void bfs() {
					
	}
};
