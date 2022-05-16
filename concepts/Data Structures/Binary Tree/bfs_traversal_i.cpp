#include <iostream>
#include <queue>
using namespace std;

//Why BFS?
//Level Order Traversal has a time complexity of O(N^2).
//BFS has a time complexity of O(N).
//8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1

class node {
public:
	int data;
	node*left;
	node*right;

	node(int d) {
		data = d;
		left = NULL;
		right = NULL;
	}
};

node* buildTree() {
	int d;
	cin >> d;

	//base case
	if(d == -1) {
		return NULL;
	}

	node* root = new node(d);
	root->left = buildTree();
	root->right = buildTree();

	return root;
}

void bfs(node* root) {
	queue<node*> q;
	q.push(root);
	//Pushing NULL to print the values level by level.
	q.push(NULL);

	while(!q.empty()) {
		node* f = q.front();
		if(f == NULL) {
			cout<<endl;
			q.pop();
			if(!q.empty()) q.push(NULL);
		}else {
		cout<<f->data<<" ";
		q.pop();
		if(f->left) {
			q.push(f->left);
		}

		if(f->right) {
			q.push(f->right);
		}
	}

	}

}

int main() {
	node* root = buildTree();
	bfs(root);
}