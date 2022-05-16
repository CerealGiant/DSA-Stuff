#include <iostream>
#include <queue>
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
	}else if(d > root->data) {
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
};


node* deleteElement(node* root,int d) {

	//3 Cases: 0 children, 1 child, 2 children
	if(root == NULL) return NULL;
	if(root->data == d) {
		if(root->left == NULL && root->right == NULL) {
			//This is a leaf node.
			delete root;
			return NULL;
		}else if(root->left == NULL || root->right == NULL) {
			//This is a node with only 1 child.
			node* temp = NULL;
			if(root->left) temp = root->left;
			if(root->right) temp = root->right;

			delete root;
			return temp;
		}else {
			//This is a node with 2 children.
			//We want to find the smallest node from the largest child subtree(hence we go right)
			//Finding the inorder successor
			node* smallest = root->right;
			while(smallest->left != NULL) {
				smallest = smallest->left;
			}

			//Apprach 1
			root->data = smallest->data;
			root->right = deleteElement(root->right,smallest->data);
			return root;


			/*Approach 2
			int temp = smallest->data;
			//Now smallest currently points to the smallest node.
			//Copy the node's value to the root node and then delete the smallest node.
			//Now deleting the smallest node will reduce it to a case of 0 and 1 child.
			deleteElement(root,smallest->data);
			root->data = temp;
			delete smallest;
			return root;*/
		}
	}


	if(root->data >= d) {
		root->left = deleteElement(root->left,d);
	}else {
		root->right = deleteElement(root->right,d);
	}

    return root;
}

//BFS
void bfs(node* root) {
	queue<node*>q;
	q.push(root);
	q.push(NULL);

	while(!q.empty() ){
		node* f = q.front();
		q.pop();
		if(f == NULL) {
			cout<<endl;
			if(!q.empty()) q.push(NULL); 
		}else {
			cout<<f->data<<" ";
			if(f->left) q.push(f->left);
			if(f->right) q.push(f->right);
		}

	}
}



int main() {
	node* root = build();
	int n;
	cin >> n;
	root = deleteElement(root,n);
	bfs(root);
}