#include <iostream>
using namespace std;

class Node{
    
    public:
    
    //data memebers
    int data;
    Node* left;
    Node* right;
    
    //Constructor
    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* insertInto(Node* &root, int d){
    
    //base case
    if(root == NULL){
        root = new Node(d);
        return root;
    }
    
    if(d > root->data){
        root->right = insertInto(root->right, d);
    }
    else{
        root->left = insertInto(root->left, d);
    }
    
    return root;
}
void takeInput(Node* &root){
    
    int data;
    cin >> data;
    
    while(data != -1){
        
        insertInto(root, data);
        cin >> data;
    }
}

void inorder(Node* &root){
    
    if(root == NULL){
        return;
    }
    
    //left part
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
    
}

void preOrder(Node* &root){
	
	if(root == NULL){
		return;
	}
	
	cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right);
}

void postOrder(Node* &root){
	if(root == NULL){
		return;
	}
	
	postOrder(root->left);
	postOrder(root->right);
	cout << root->data << " ";
}

int main(){
    
    Node* root = NULL;
    cout << "Enter the data to create Binary Search Tree "<< endl;
    takeInput(root);
    
    cout << "printing the BST"<< endl;
    
    inorder(root);
    cout << endl;
    
    cout << "Printing the PreOrder: " << endl;
    preOrder(root);
    cout << endl;
    
    cout << "Printing the PostOrder: " << endl;
    postOrder(root);
    cout << endl;
}