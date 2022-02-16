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

void insertAtTail(node*&tail,node*head,int data) {
	if(tail==NULL) {
		while(head->next != NULL) {
			head = head->next;
		}
		//Head is now currently pointing to the last element in the linked list
		tail = head;
	}

	//Tail is already defined.
	node* n = new node(data);
	tail->next = n; //Tail is now pointing to current last element in the linked list.
	tail = n; //Now setting tail to new last element.

}


int length(node* head) {
	int count = 0;

	while(head != NULL) {
		count++;
		head = head->next;
	}

	return count;
}

//Passing the head by reference and taking position p
void insertAtMiddle(node*&head,node*&tail,int data,int p) {
	
	if(head == NULL) {
		//If there are no elements then we will use previous function to add.
		insertAtHead(head,data);
		return;
	}else if(p > length(head) ) {
		insertAtTail(tail,head,data);
		return;
	}
	
	int jump = 1;
	node*temp = head;
	while(jump<=p-1) {
		temp = temp->next;
		jump++;
	}
	//Now temp points to the element that is going to be just before the insertion
	node* n = new node(data);
	n->next = temp->next;
	temp->next = n;

	


}	

void print(node*head) {
	while(head != NULL) {
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}

void printTail(node*tail) {
	if(tail != NULL) {
		cout<<"TAIL: "<<tail->data<<endl;
	}
}


int main() {
	node*head = NULL;
	node*tail = NULL;
	insertAtHead(head,4);
	insertAtHead(head,3);
	insertAtHead(head,2);
	insertAtHead(head,1);
	insertAtMiddle(head,tail,5,3);
	insertAtTail(tail,head,8);
	insertAtTail(tail,head,9);
	insertAtMiddle(head,tail,10,6);
	print(head);

}