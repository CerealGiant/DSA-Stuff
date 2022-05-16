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

bool findNode(node* r,int a,int b) {    

    if(r == NULL) return false;

    //base case
	if(r->data == a || r->data == b) return true;

    bool ls = findNode(r->right,a,b);
    bool rs = findNode(r->left,a,b);

    if(ls == true || rs == true) return true;
	
    return false;
}


void lowest_common_ancestor(node* r,int a,int b) {
	//base case
	if(r == NULL) {
		return;
	}

	//This r could be a possible ancestor. So we will check if we can find a and b on the left and right side.
	
    if(r->left == NULL || r->right == NULL) {
        //Means that this node is either a leaf node or a node with only 1 other child node.
        //Unlikely to find lowest common ancestor here, hence move to the next node if available.
        if(r->left) {
            lowest_common_ancestor(r->left,a,b);
        }
        if(r->right) {
            lowest_common_ancestor(r->right,a,b);
        }
    }else {
    	//We will check the left child of this possible LCA.
        bool ls = findNode(r->left,a,b);
        //We will check the right child of this possible LCA.
	    bool rs = findNode(r->right,a,b);
	    
        if(ls == true && rs == true) {cout<<r->data<<endl;return;}
        lowest_common_ancestor(r->left,a,b);
	    lowest_common_ancestor(r->right,a,b);
    }


    
}


int main() {
	int a,b;
	cin >> a >> b;
	node* root = buildTree();
	lowest_common_ancestor(root,a,b);
	//cout<<ancestor->data<<endl;
}