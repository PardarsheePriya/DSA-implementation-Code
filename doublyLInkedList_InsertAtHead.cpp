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

void print(Node* &head){
	Node* temp = head;
	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

void insertAtHead(Node* &head, int d){
	Node* temp = new Node(d);
	temp->next = head;
	head->prev = temp;
	head = temp;
}

int main(){
	Node* node1 = new Node(10);
	Node* head = node1;
	print(head);
	
	//function call to insert at head
	insertAtHead(head, 20);
	insertAtHead(head, 30);
	print(head);
	
	return 0;
	
}