#include <iostream>
using namespace std;

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

//Both countNodes and sumNodes use PreOrder Traversal.
//Check Root,Left,Right


int countNodes(node* root) {
	//base case
	if(root == NULL) {
		return 0;
	}

	int ls = countNodes(root->left);
	int rs = countNodes(root->right);
	
	return ls+rs+1;

}


int sumNodes(node* root) {
	//base case
	if(root == NULL) {
		return 0;
	}
	
	return root->data + sumNodes(root->left) + sumNodes(root->right);
}

int main() {
	node* root = buildTree();
	cout<<"NODES: "<<countNodes(root)<<endl;
	cout<<"SUM: "<<sumNodes(root)<<endl;
}