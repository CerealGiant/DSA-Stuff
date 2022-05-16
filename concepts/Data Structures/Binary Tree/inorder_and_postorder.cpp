#include <iostream>
using namespace std;

//Comparision between preorder,inorder and postorder:

//PreOrder:
//Root,Left,Right

//InOrder:
//Left,Root,Right

//PostOrder:
//Left,Right,Root

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


void postOrder(node* root) {
	if(root == NULL) {
		return;
	}

	postOrder(root->left);
	postOrder(root->right);
	cout<<root->data<<" ";

}

void inOrder(node* root) {
	if(root == NULL) {
		return;
	}

	inOrder(root->left);
	cout<<root->data<<" ";
	inOrder(root->right);
}


int main() {
	node* root = buildTree();
	inOrder(root);
	cout<<endl;
	postOrder(root);
}