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


//insert at beginning
void insertAtHead(Node* &head, int d){ //reference has been taken to avoid copy creation
    
    //create new Node
    
    Node* temp = new Node(d);
    temp -> next = head;            //temp me head ka address so that head me jo node h uska adress temp me aajaye
    head = temp;                    //finally head me temp ka address daal dia, so that temp becomes first element
}


//insert at end
void inserAtTail(Node* &tail, int d){       //tail point to NULL
    Node* temp = new Node(d);
    tail-> next = temp;                     //here tail, points to new element inserted
    tail = tail->next;                      //new element has been converted to tail, since this is the last element
}

//Insert at nth position

void insertAtPosition(Node *tail, Node*head, int d, int position){
    //insert at start
    if(position == 1){
        insertAtHead(head, d);
        return;
    }
    
    //insert at n the position
    Node *temp = head;
    int cnt = 1;
    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }
    Node *nodeToInsert = new Node(d);
    nodeToInsert -> next = temp->next;
    temp->next = nodeToInsert;
    
    //insert at end
    if(temp->next == NULL){
        inserAtTail(tail, d);
        return;
    }
    
    
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
    Node* tail = node1;
    print(head);
    cout << endl;
    
    insertAtHead(head, 12);
    insertAtHead(head, 20);
    
    inserAtTail(tail, 30);
    inserAtTail(tail, 100);
    print(head);
    cout << endl;
    
    int position;
    insertAtPosition(tail, head, 5, 2);
    print(head);
    
    return 0;
}