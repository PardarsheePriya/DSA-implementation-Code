#include <iostream>

using namespace std;
    
class Node{
    public:
    int data;
    Node* next;
        
        
    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int d){ //reference has been taken to avoid copy creation
    
    //create new Node
    
    Node* temp = new Node(d);
    temp -> next = head;            //temp me head ka address so that head me jo node h uska adress temp me aajaye
    head = temp;                    //finally head me temp ka address daal dia, so that temp becomes first element
}

void print(Node* &head){
    Node* temp = head;  //temp at head
    while(temp != NULL){
        cout << temp->data << " ";  // prints temp
        temp = temp->next;          //temp ko aage badhao
    }
}
int main(){ 
    
    //created new node
    Node* node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1 -> next;
    
    //head pointed to new node
    Node* head = node1;
    print(head);
    cout << endl;
    
    insertAtHead(head, 12);
    insertAtHead(head, 20);
    print(head);
}