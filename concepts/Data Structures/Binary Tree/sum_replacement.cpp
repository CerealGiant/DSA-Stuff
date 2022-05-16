#include <iostream>
#include <queue>
using namespace std;
//8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 14 13 -1 -1 -1 -1 
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

	node* root = new node(d);
	root->left = buildTree();
	root->right = buildTree();

	return root;
}


int sum_replacement(node* root) {
	//Post Order Traversal -> from left -> right -> root
	//base case
	if(root == NULL) {
		return 0;
	}

	int left_side = sum_replacement(root->left);
	int right_side = sum_replacement(root->right);

	//If left and right side are 0 then keep root node to same value.

	if(left_side + right_side != 0) {
		int temp = root->data;
		root->data = left_side + right_side;
		return (root->data+temp);
	}

	//This will be returned in the case when we have a leaf node.
	//So we return the value of the leaf node which will be used in further computation.
	return root->data;

}

void print(node* root) {
	if(root == NULL) {
		return;
	}
	cout<<root->data<<" ";
	print(root->left);
	print(root->right);
}


void bfs(node* root) {
	queue<node*>q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()) {
		node* f = q.front();
		q.pop();
		if(f == NULL && !q.empty() ) {
			cout<<endl;
			q.push(NULL);
		}
		else if(f != NULL) {
			cout<<f->data<<" ";
			if(f->left) q.push(f->left);
			if(f->right) q.push(f->right);
		}

	}
}


int main() {
	node* root = buildTree();
	sum_replacement(root);
	bfs(root);
}
