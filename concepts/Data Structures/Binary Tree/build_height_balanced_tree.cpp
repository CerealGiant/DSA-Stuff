#include <iostream>
#include <cmath>
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


int height(node* root) {
	//base case
	if(root == NULL) {
		return 0;
	}
	int ls = height(root->left);
	int rs = height(root->right);
	return max(ls,rs) + 1;
}




void print(node* root) {

	if(root == NULL) {
		cout<<"-1"<<" ";
		return;
	}
	cout<<root->data<<" ";
	print(root->left);
	print(root->right);
}

void bfs(node* root) {
	queue<node*> q;
	q.push(root);
	//Pushing NULL to print the values level by level.
	q.push(NULL);

	while(!q.empty()) {
		node* f = q.front();
		if(f == NULL) {
			cout<<endl;
			q.pop();
			if(!q.empty()) q.push(NULL);
		}else {
		cout<<f->data<<" ";
		q.pop();
		if(f->left) {
			q.push(f->left);
		}

		if(f->right) {
			q.push(f->right);
		}
	}

	}
}


//Optimised Approach
node* buildTreeFromArray(int*a ,int s,int e) {
	//base case
	if(s > e) {
		return NULL;
	}
	int mid = (s+e)/2;
	node* root = new node(a[mid]);
	root->left = buildTreeFromArray(a,s,mid-1);
	root->right = buildTreeFromArray(a,mid+1,e);

	return root;
}


//Own Approach
void buildTree(int n,node*& root) {
	
	//For each element
	if(root == NULL) {
		root = new node(n);
		return;
	}

	//Check
	int h1 = height(root->left);
	int h2 = height(root->right);
	if(abs(h1-h2) <= 1) {
		if(h1 < h2) {
			buildTree(n,root->left);
		}else if(h2 < h1) {
			buildTree(n,root->right);
		}else {
			buildTree(n,root->left);
		}
	}

}



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

int main() {
	int arr[] = {1,2,3,4,5,6,7};
	int n = sizeof(arr)/sizeof(int);

	//Optimised approach
	node* root = buildTreeFromArray(arr,0,n-1);

	//Own Approach
	// node* root = NULL;
	// root = new node(1);
	// for(int i =1;i<n;i++) {
	// 	buildTree(arr[i],root);
	// }
	// print(root);
	// cout<<endl;
	// bfs(root);

	
	bfs(root);
	HBPair t = isBalanced(root);
	if(t.balance) cout<<"IT IS BALANCED YO"<<endl;
}