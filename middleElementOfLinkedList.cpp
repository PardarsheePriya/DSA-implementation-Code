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

void print(Node* &head){
	Node* temp = head;
	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
}

Node* middleOfLinkedList(Node* &head){
	Node* slow = head;
	Node* fast = head->next;
	
	while(fast != NULL){
		fast = fast->next;
		if(fast != NULL){
			fast = fast->next;
		}
		slow = slow->next;
	}
	return slow;
}

int main(){
	Node* node1 = new Node(21);
	Node* head = node1;
	Node* tail = node1;
	
	insertAtTail(tail, 30);
	insertAtTail(tail, 40);
	insertAtTail(tail, 50);
	insertAtTail(tail, 60);
	insertAtTail(tail, 70);
	insertAtTail(tail, 90);
	insertAtTail(tail, 100);
	
	cout << "The linked list is: ";
	print(head);
	
	Node* middle = middleOfLinkedList(head);
	cout << "The middle element of linked list is: ";
	cout << middle->data;
	cout << endl;
	
	return 0;
}