#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    
    Node(int data){
        this->data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }
};

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp-> next = head;
    head-> prev = temp;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail-> next = temp;
    temp-> prev = tail;
    tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int d, int position){
    
    //inserting at beginning
    if(position == 1){
        insertAtHead(head, d);
        
        return;
    }
    
    Node* temp = head;
    int cnt = 1;
    
    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }
    
    //inserting at last Position
    if(temp->next == NULL){
        insertAtTail(tail, d);
        return;
    }
    
    //creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
    
    
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp-> data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    
    insertAtTail(tail, 100);
    insertAtTail(tail, 200);
    insertAtTail(tail, 300);
    print(head);
        
    insertAtPosition(head, tail, 20, 2);
    insertAtPosition(head, tail, 30, 3);
    print(head);

    
    
}