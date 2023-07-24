#include <iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		Node* prev;
		
		//constructor
		Node(int data){
			this->data = data;
			this->next = NULL;
			this->prev = NULL;
		}
};

void insertAtTail(Node* &tail, int d){
	Node* temp = new Node(d);
	tail->next = temp;
	temp->prev = tail;
	tail = temp;
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
	Node* tail = node1;
	Node* head = node1;
	print(head);
	insertAtTail(tail, 20);
	insertAtTail(tail, 30);
	insertAtTail(tail, 40);
	
	print(head);
	
	return 0;
}