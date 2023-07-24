#include <iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		
		//Constructor
		Node(int data){
			this->data = data;
			this->next = next;
		}
};

void insertAtTail(Node* &tail, int d){
	Node* temp = new Node(d);
	tail->next = temp;
	tail = temp;
}

Node* reverseK(Node* &head, int k){
	
	//Base Case
	if(head == NULL){
		return NULL;
	}
	
	Node* forward = NULL;
	Node* curr = head;
	Node* prev = NULL;
	int count = 0;
	
	//first K group reverse
	while(curr != NULL && count < k){
		forward = curr->next;	
		curr->next = prev;
		prev = curr;
		curr = forward;
		
		count++;
	}
	
	//reversing other k group via recursion
	if(forward != NULL){
		head->next = reverseK(forward, k);
	}
	
	//returning head of reversed linked list
	return prev;
}

void print(Node* &head){
	Node* temp = head;
	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main(){
	Node* node1 = new Node(10);
	Node* head = node1;
	Node* tail = node1;
	
	//inserting elements in linked list
	insertAtTail(tail, 20);
	insertAtTail(tail, 30);
	insertAtTail(tail, 40);
	insertAtTail(tail, 50);
	insertAtTail(tail, 60);
	insertAtTail(tail, 70);
	insertAtTail(tail, 80);
	insertAtTail(tail, 90);
	
	cout << "Linked List is: ";
	print(head);
	
	cout << "K group Linked List is: ";
	
	Node* K_rev = reverseK(head, 3);
	print(K_rev);
	
	return 0;
	
}