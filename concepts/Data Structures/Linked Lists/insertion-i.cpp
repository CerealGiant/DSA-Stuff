#include <iostream>
using namespace std;

class node {
public:
	int data;
	node*next;

	//constructor
	node(int d) {
		data = d;
		next = NULL;
	}

};



//Using a linked list class (Object Oriented Programming)
/*class LinkedList {
	node* head;
	node* tail;

public:
	LinkedList();
	void insert();
	void delete();
}*/

//Using functions for functionality of linked list(Procedural programming)

//Passing head by reference since we have to change what head points to(since we are inserting at head)
void insertAtHead(node*&head,int data) {
	if(head == NULL) {
		//No element in the linked list. Data being added is 1st in linked list.
		head = new node(data);
		return;
	}

	//If the head is not null(already has elements)
	node* n = new node(data);
	n->next = head; //head points to the current first element. we want the new node n to have its next set to this current first element
	head = n; //Now head points to this new element n;


}

void print(node*head) {
	while(head != NULL) {
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}

int main() {
	node*head = NULL; //Head is basically a node pointer that points to the first element of the linked list.
	insertAtHead(head,4);
	insertAtHead(head,3);
	insertAtHead(head,2);
	insertAtHead(head,1);
	print(head); //Notice how 1 comes first since the element 1 is the new head.

}