#include <iostream>
using namespace std;

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

void preorder_print(node* root) {
	//base case
	if(root == NULL) {
		return;	
	}
	//rec case
	cout<<root->data<<" ";
	preorder_print(root->left);
	preorder_print(root->right);
}

void inorder_print(node* root) {
	//base case
	if(root == NULL) {
		return;
	}
	//rec case
	inorder_print(root->left);
	cout<<root->data<<" ";
	inorder_print(root->right);
}

void postorder_print(node* root) {
	//base case
	if(root == NULL) {
		return;
	}
	//rec case
	postorder_print(root->left);
	postorder_print(root->right);
	cout<<root->data<<" ";
}

int main() {
	node* root = buildTree();
	cout<<"PreOrder:"<<endl;	
	preorder_print(root);
	cout<<endl;
	
	cout<<"InOrder:"<<endl;	
	inorder_print(root);
	cout<<endl;

	cout<<"PostOrder:"<<endl;	
	postorder_print(root);
	cout<<endl;
}
