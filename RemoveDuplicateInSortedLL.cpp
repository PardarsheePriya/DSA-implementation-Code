#include <iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		
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
		cout << temp->data;
		temp = temp->next;
	}
	cout << endl;
}

Node* removeDuplicate(Node* &head){
	
	if(head == NULL){
		return NULL;
	}
	
	Node* curr = head;
	while(curr != NULL & curr->next != NULL){
		if(curr -> data == curr->next->data){
			Node* next_next = curr->next->next;
			Node* toDelete = curr->next;
			delete(toDelete);
			curr->next = next_next;
		}
		else{
			curr = curr->next;
		}
	}
	return head;
}

int main(){
	Node* node1 = new Node(10);
	Node* head = node1;
	Node* tail = node1;
	
	//inserting linked list
	insertAtTail(tail, 20);
	insertAtTail(tail, 20);
	insertAtTail(tail, 20);
	insertAtTail(tail, 30);
	insertAtTail(tail, 40);
	insertAtTail(tail, 50);
	insertAtTail(tail, 60);
	insertAtTail(tail, 60);
	insertAtTail(tail, 70);
	
	cout << "The linked list is: ";
	print(head);
	
	cout << "The linked after removing duplicate: ";
	Node* duplicate = removeDuplicate(head);
	print(duplicate);
}