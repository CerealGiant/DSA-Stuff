#include <iostream>
using namespace std;
//3 4 -1 6 -1 -1 5 1 -1 -1 -1
class node {
public:
	int data;
	node* left;
	node* right;

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

	//rec case
	node* root = new node(d);
	root->left = buildTree();
	root->right = buildTree();

	return root;
} 

void printPreOrder(node* root) {
	if(root == NULL) {
		return;
	}
	cout<<root->data<<" ";
	printPreOrder(root->left);
	printPreOrder(root->right);
}

int main() {
	node* root = buildTree();
	printPreOrder(root);
}