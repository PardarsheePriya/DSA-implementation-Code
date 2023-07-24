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

void insertAtHead(Node* &head, int d){
	Node* temp = new Node(d);
	temp -> next = head;
	head = temp;
}

Node* reverseLinkedList(Node* &head){
	if(head == NULL || head->next == NULL){
		return head;
	}
	
	Node* prev = NULL;
	Node* curr = head;
	Node* forward = NULL;
	while(curr!=NULL){
		forward = curr->next;
		curr->next = prev;
		prev = curr;
		curr = forward;
	}
	
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
	
	//inserting node
	insertAtTail(tail, 20);
	insertAtTail(tail, 30);
	insertAtTail(tail, 40);
	cout << "Linked List: ";
	print(head);
	
	cout << "Reversed Linked List: ";
	Node* previous = reverseLinkedList(head);
	print(previous);
	
	return 0;
	
}