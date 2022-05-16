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


void kthLevel(node* root,int k) {
	//base case
	if(root == NULL) {
		return;
	}

	if(k == 1) {
		cout<<root->data<<" ";
		return;
	}
	kthLevel(root->left,k-1);
	kthLevel(root->right,k-1);
}


void levelOrder(node* root) {
	int h = height(root);
	for(int i =1;i<=h;i++) {
		kthLevel(root,i);
		cout<<endl;
	}
}

int main() {
	node* root = buildTree();
	levelOrder(root);
}