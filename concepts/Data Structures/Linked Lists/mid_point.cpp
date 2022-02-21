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


int length(node* head) {
	int count = 0;

	while(head != NULL) {
		count++;
		head = head->next;
	}

	return count;
}


//Using functions for functionality of linked list(Procedural programming)

//Passing head by reference since we have to change what head points to(since we are inserting at head)
void insertAtHead(node*&head,node*&tail,int data) {
	if(head == NULL) {
		//No element in the linked list. Data being added is 1st in linked list.
		head = new node(data);
		tail = head;
		return;
	}

	//If the head is not null(already has elements)
	node* n = new node(data);
	n->next = head; //head points to the current first element. we want the new node n to have its next set to this current first element
	head = n; //Now head points to this new element n;


}

void insertAtTail(node*&tail,node*head,int data) {
	

	//Tail is already defined.
	node* n = new node(data);
	tail->next = n; //Tail is now pointing to current last element in the linked list.
	tail = n; //Now setting tail to new last element.

}

//Deleting data at the head
void deleteAtHead(node*&head) {
	node* temp = head->next; //Node pointer to hold address to next element after head(new head).
	delete head;
	head = temp;
}


//Deleting data at the tail
void deleteAtTail(node*&tail,node*head) {
	
	node*temp = head;

	while(temp->next != tail) {
		temp = temp->next;
	}
	//head now points to element before the tail element
	delete tail;
	temp->next = NULL;
	tail = temp; //Tail is now the element before the deleted element.
}

//Deleting data in the middle
void deleteAtMiddle(node*&head,node*&tail,int p) {
	
	if(p == 0) {
		deleteAtHead(head);
		return;
	}else if(p >= length(head) ) {
		deleteAtTail(tail,head);
		return;
	}

	int jump = 1;
	node* temp = head;
	while(jump<=p-2) {
		temp = temp->next;
		jump++;
	}

	//temp points to element just before deleted element
	node* temp2 = temp->next->next;
	delete temp->next;
	temp->next = temp2;
	

}

bool search(node*head,int element) {
	
	while(head != NULL) {
		if(head->data == element) return true;
		head = head->next;
	}
	return false;
}

//Passing the head by reference and taking position p
void insertAtMiddle(node*&head,node*&tail,int data,int p) {
	
	if(head == NULL) {
		//If there are no elements then we will use previous function to add.
		insertAtHead(head,tail,data);
		return;
	}else if(p >= length(head) ) {
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

//Overloading the left shift(<<) operator
void operator<<(ostream &os, node* head) {
	print(head);
}


void printTail(node*tail) {

	if(tail != NULL) {
		cout<<"TAIL: "<<tail->data<<endl;
	}
}


//Correct solution
node* reverse_recursive(node* head) {
	//base case
	if(head == NULL || head->next == NULL) {
		return head;
	}

	//rec case
	node* shead = reverse_recursive(head->next);
	//node* temp = shead;
	// while(temp->next != NULL) {
	// 	temp = temp->next;
	// }
    //node* temp = head->next; -> Referring to the element before the head(the one with NULL)
	//head->next = NULL; -> Setting the head's next to be NULL.
	//temp->next = head; -> Setting temp's next to point to head.
    //temp is equal to head->next.
    head->next->next = head; //This line has to be before head->next = NULL.
    head->next = NULL;
    
	return shead;

}

//Own solution
// void reverse_recursive(node*& head,node*& current,node* prev,node* next,node*& tail) {
//     //base case
//     if(current == NULL) {
//     	tail = head;
//         head = prev;
//         return;
//     }
    
//     //rec case
//     next = current->next;
//     current->next = prev;

//     //Setting Prev and Current
//     reverse_recursive(head,next,current,NULL);
// }



void reverse(node*& head,node*& tail) {
	node* current = head;
	node* prev = NULL;
	node* next; //Not known

	while(current != NULL) {
		//Store the next node
		next = current->next;

		//Make the current node point to the previous node
		current->next = prev;

		//Set the Previous and Next node(update them)
		prev = current; //This current is referring to the node whose previous we just set
		current = next; // Next node which is after the current node will now be the current node
	}
	tail = head;
	head = prev;
}


//Two ways to take input
//One way
// void take_input(node*head) {

// }

//Another way
node* take_input() {
	int d;
	node* head = NULL;
	node* tail = NULL;
	while(cin >> d) {
		insertAtHead(head,tail,d);
	}
	return head;
}


//Fast way to get the mid-point of a linked list:
node* midPoint(node* head) {
	//Make 2 pointers -> slow and fast pointer
	//fast pointer will take 2 steps(2 nodes)
	//slow pointer will take 1 step.
	//When fast pointer has finished looping through whole linked list, slow pointer will be at the midPoint of the linked list.
	if(head == NULL || head->next == NULL) {
		//if there is only 1 element or no element
		return head;
	}

	node* slow = head;
	node* fast = head;

	while(fast != NULL && fast->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}

int main() {

	node*head = take_input();
	node*tail = NULL;
	head = reverse_recursive(head);
	cout<<midPoint(head)->data<<endl;
	//reverse(head);
	cout<<head;
	// insertAtHead(head,tail,4);
	// insertAtHead(head,tail,3);
	// insertAtHead(head,tail,2);
	// insertAtHead(head,tail,1);
	// insertAtHead(head,tail,10);
	// deleteAtMiddle(head,tail,5);
	// insertAtMiddle(head,tail,100,5);
	// printTail(tail);
	// print(head);
	// if(search(head,100) ) cout<<"Element found!"<<endl;
}