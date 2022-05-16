#include <iostream>
#include <queue>
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


node* insertinBST(node* root,int d) {
	//base case
	if(root == NULL) {
		return new node(d);
	}

	//rec case
	//Updating the pointers (left or right)
	if(root->data >= d) {
		root->left = insertinBST(root->left,d);
	}else if(root->data < d) {
		root->right = insertinBST(root->right,d);
	}

	//Then eventually returning the new root with its updated pointers.
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


void inOrder(node* root) {
	//base case
	if(root == NULL) {
		return;
	}

	//rec case
	inOrder(root->left);
	cout<<root->data<<" ";
	inOrder(root->right);
}


//Level order printing.
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


bool elementPresent(node* root,int data) {
	//base case
	if(root == NULL) {
		return false;
	}

	if(root->data == data) return true;


	if(data > root->data) {
		return elementPresent(root->right,data);
	}else {
		return elementPresent(root->left,data);
	}


}

int main() {
	node* root = build();
	bfs(root);
	cout<<endl;
	cout<<endl;
	//InOrder printing of a bfs is always sorted since we go through the
	//left side first then the right side of the tree.
	inOrder(root);
	if(elementPresent(root,9)) cout<<"FOUND!"<<endl;
	else cout<<"NOT FOUND!"<<endl;
}	