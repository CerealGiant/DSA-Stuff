#include <iostream>
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


node* buildTree(int* p,int* i,int p_size,int i_size) {
	node* root = NULL;

	for(int j=0;j<p_size;j++) {
		
	}
}


int main() {
	int preorder[] = {1,2,3,4,8,5,6,7};
	int p_size = sizeof(preorder)/sizeof(int);
	int inorder[] = {3,2,8,4,1,6,7,5};
	int i_size = sizeof(inorder)/sizeof(int);

	node* root = buildTree(preorder,inorder,p_size,i_size);
}