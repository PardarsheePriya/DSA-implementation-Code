#include <iostream>

using namespace std;

class Node{
	public:
		int data;
		Node* next;
		
		Node(int data){
			this-> data = data;
			this->next = NULL;
		}
		
		//destructor
		
		~Node(){
			int value = this->data;
			//memory free
			if(this->next != NULL){
				delete next;
				this->next = NULL;
			}
			cout << "memory is free for node with data " << value << endl;
		}
};

void insertAtHead(Node* &head, int d){
	Node*temp = new Node(d);
	temp->next = head;
	head = temp;
}

void insertAtTail(Node* &tail, int d){
	Node *temp = new Node(d);
	tail->next = temp;
	tail = tail->next;
}

void deleteNode(int position, Node* &head){
	if(position == 1){
		Node* temp = head;
		head = head -> next;
		//free memory 
		temp->next = NULL;
		delete temp;
	}
	else{
		
		//deleting any middle node or last node
		Node* curr = head;
		Node* prev = NULL;
		int cnt = 1;
		while(cnt < position){
			prev =curr;
			curr = curr -> next;
			cnt++;
		}
		
		prev->next = curr->next;
		curr->next = NULL;
		delete curr;
	}
}

void print(Node* &head){
	Node *temp = head;
	while(temp->next != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}



int main(){
	
	Node* node1 = new Node(10);
	Node* head = node1;
	Node* tail = node1;
	insertAtHead(head, 20);
	insertAtHead(head, 30);
	insertAtHead(head, 40);
	print(head);
	deleteNode(2, head);
	print(head);
	
	return 0;
}