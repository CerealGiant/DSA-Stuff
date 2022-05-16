#include <iostream>
using namespace std;

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



int height(node* root) {
	if(root == NULL) {
		return 0;
	}
	int ls = height(root->left);
	int rs = height(root->right);
	return max(ls,rs) + 1;
}

node* buildTree() {
	int d;
	cin >> d;

	if(d == -1) {
		return NULL;
	}

	//rec case
	node* root = new node(d);
	root->left = buildTree();
	root->right = buildTree();

	return root;
}


int diameter_of_tree(node* root) {

	if(root == NULL) {
		return 0;
	}

	int h1 = height(root->left);
	int h2 = height(root->right);
	int op1 = h1 + h2;
	int op2 = diameter_of_tree(root->left);
	int op3 = diameter_of_tree(root->right);
	// int app1 = height(root->left) + height(root->right);
	// int app2 = height(root->left);
	// int app3 = height(root->right);

	return max(op1,max(op2,op3));
}


int main() {
	node* root = buildTree();
	int diameter = diameter_of_tree(root);
	cout<<"Diameter: "<<diameter<<endl;
}