#include <iostream>
#include <queue>
#include <algorithm>
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


//PreOrder traversal
//Root -> Left -> Right
//O(N^2) Approach
node* addToBST(node* root,int d) {
	//base case
	if(root == NULL) {
		return new node(d);
	}

	//rec case
	if(root->data >= d) {
		root->left = addToBST(root->left,d);
	}else {
		root->right = addToBST(root->right,d);
	}

	return root;
}

node* createBST(int* p,int n) {

	node* root = new node(p[0]);

	for(int i = 1;i<n;i++) {
		if(root->data >= p[i]) {
			root->left = addToBST(root->left,p[i]);
		}else {
			root->right = addToBST(root->right,p[i]);
		}

	}	

	return root;
}


//O(N) Approach
node* BSTN(int* p,int n) {
	int* q = new int(n);

	for(int i =0;i<n;i++) {
		q[i] = p[i];
	}

	//Inorder
	sort(q,q+n);

	
}


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
	int arr[100];
	int d;
	int count = 1;
	cin >> d;
	arr[0] = d;

	while(d != -1) {
		cin >> d;
		if(d != -1) {
		arr[count++] = d;
		
	}

	}
	
	//5 3 1 7 6 8
	
	//1 3 5 6 7 8

	//Inorder -> Left,Root,Right

	node* root = createBST(arr,count);
	bfs(root);
}