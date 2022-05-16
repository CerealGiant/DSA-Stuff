#include <iostream>
#include <climits>
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


node* insertinBST(node* root,int d) {
	//base case
	if(root == NULL) {
		return new node(d);
	}

	//rec case
	if(d <= root->data) {
		root->left = insertinBST(root->left,d);
	}else {
		root->right = insertinBST(root->right,d);
	}

	return root;
}


node* build() {
	int d;
	cin >> d;
	node* root = NULL;
	while(d != -1) {
		root = insertinBST(root,d);
		cin >> d;
	}

	return root;
}


int main() {
	node* root = build();
	
}