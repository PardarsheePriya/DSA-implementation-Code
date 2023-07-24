#include <iostream>
#include <map>
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
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

Node* removeDuplicate(Node* &head){
    
    map<int, bool>visited;
	
	if(head == NULL){
		return NULL;
	}
	
	Node* curr = head;
	Node* prev = NULL;
	while(curr != NULL){
	    if(visited[curr->data]){
	        prev ->next = curr->next;
	        curr = curr->next;
	    }
	    else{
	        visited[curr->data] = true;
	        prev = curr;
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
	insertAtTail(tail, 10);
	insertAtTail(tail, 30);
	insertAtTail(tail, 40);
	insertAtTail(tail, 20);
	insertAtTail(tail, 60);
	insertAtTail(tail, 30);
	insertAtTail(tail, 70);
	
	cout << "The linked list is: ";
	print(head);
	
	cout << "The linked after removing duplicate: ";
	Node* duplicate = removeDuplicate(head);
	print(duplicate);
}