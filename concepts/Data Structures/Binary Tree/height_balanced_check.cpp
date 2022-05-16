#include <iostream>
#include <cmath>
using namespace std;

//A balanced tree is one in which at every node the difference between h1 and h2(h1 = height of left side, h2 = height of right side) is <= 1.

class node {
public:
	int data;
	node*left;
	node*right;

	node(int d) {
		data  = d;
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

int height(node* root) {
	//base case
	if(root == NULL) {
		return 0;
	}
	int ls = height(root->left);
	int rs = height(root->right);
	return max(ls,rs) + 1;
}

//More optmised approach
class HBPair {
public:
	int height;
	bool balance;
};

HBPair isBalanced(node* root) {
	
	HBPair p;
	//rec case
	if(root == NULL) {
		p.height = 0;
		p.balance = true;
		return p;
	}

	//rec case
	HBPair left = isBalanced(root->left);
	HBPair right = isBalanced(root->right);

	p.height = max(left.height,right.height) + 1;

	if(abs(left.height - right.height) <= 1 && left.balance && right.balance) {
		p.balance = true;
	}else {
		p.balance = false;
	}

	return p;
}

bool balanced_tree(node* root) {
	//base case
	if(root == NULL) {
		return true;
	}

	//rec case
	bool ls = balanced_tree(root->left);
	bool rs = balanced_tree(root->right);

	if(ls == true && rs == true) {
		int h1 = height(root->left);
		int h2 = height(root->right);
		if(abs(h1-h2) <= 1) return true;
	}

	return false;
}


int main() {
	node* root = buildTree();
	bool check = balanced_tree(root);
	HBPair check2 = isBalanced(root);
	if(check) cout<<"This is a balanced tree"<<endl;
	else cout<<"This is not a balanced tree at all"<<endl;
}