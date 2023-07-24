#include <iostream>

using namespace std;

class Node{
	public:
		int data;
		Node* next;
		
		Node(int data){
			this->data = data;
			this->next = NULL;
		}
};

//insert at end
void insertAtTail(Node* &tail, int d){       //tail point to NULL
    Node* temp = new Node(d);
    tail-> next = temp;                     //here tail, points to new element inserted
    tail = tail->next;                      //new element has been converted to tail, since this is the last element
}

void print(Node* &head){
	Node* temp = head;
	while(temp != NULL){
		cout << temp -> data << " ";
		temp = temp -> next;
	}
}

int main(){
	
	Node *node1 = new Node(10);
	Node *head = node1;
	Node *tail = node1;
	
	print(head);
	cout << endl;
	
	insertAtTail(tail, 20);
	insertAtTail(tail, 30);
	insertAtTail(tail, 40);
	print(head);
	return 0;
}